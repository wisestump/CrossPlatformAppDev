#include "worker-thread.h"
#include "main-window.h"

#include <assert.h>
#include <vector>


WorkerThread::WorkerThread(MainWindow *pWindow): m_pWindow(pWindow)
{

}



const cv::Mat *WorkerThread::getResultImage() const
{
	assert(isFinished());

	return m_ptrResult.data();
}



void WorkerThread::startLoadFile(const QString &rcFilePath)
{
	if (isRunning())
		return;

	m_nOperation = LoadFile;
	m_FilePath = rcFilePath;
	m_ptrInput.reset(new cv::Mat);
	QThread::start();
}



void WorkerThread::startProcessImage(const cv::Mat &rcImage)
{
	if (isRunning())
		return;

	m_nOperation = ProcessImage;
	m_ptrInput.reset(new cv::Mat(rcImage));
	QThread::start();
}



void WorkerThread::stop()
{
	requestInterruption();
}



void WorkerThread::run()
{
	switch (m_nOperation)
	{
	case LoadFile:
		*m_ptrInput = cv::imread(m_FilePath.toStdString(), CV_LOAD_IMAGE_COLOR);

		if (m_ptrInput->data)
			m_ptrResult.reset(new cv::Mat(*m_ptrInput));

		break;

	case ProcessImage:

		if (m_ptrInput)
		{
			m_ptrResult.reset(new cv::Mat(*m_ptrInput));
			
			cv::Mat gray;
			cv::cvtColor(*m_ptrResult, gray, cv::COLOR_BGR2GRAY);
			cv::Canny(*m_ptrResult, gray, 50, 200, 3);
			std::vector<cv::Vec4i> lines;
			cv::HoughLinesP(gray, lines, 1, CV_PI/180, 50, 50, 10 );
			for( size_t i = 0; i < lines.size(); i++ )
			{
				cv::Vec4i l = lines[i];
				cv::line( *m_ptrResult, cv::Point(l[0], l[1]), cv::Point(l[2], l[3]), cv::Scalar(0,0,255), 3, CV_AA);
			}


		} // if
		break;
	} // switch
}
