import QtQuick 2.2
import QtQuick.Controls 1.4
import QtQml.Models 2.2
import QtQuick.Layouts 1.1

ApplicationWindow {
    width: 500; height: 500
    visible: true
    property var treeRoot: tableFileSystemModel.index(0, 0);

    ColumnLayout {

        anchors.fill: parent

        Button {
            height: 50; width: 150
            text: "Up";

            onClicked: {
                tableView.model.rootIndex = tableView.model.parentModelIndex();
            }
        }


        SplitView {
            //anchors.fill: parent
            Layout.fillHeight: true
            Layout.fillWidth: true

            TableView {
                id: tableView;

                TableViewColumn {
                    title: "Name"
                    role: "fileName"
                    width: 300
                }

                model: DelegateModel {
                    model: tableFileSystemModel


                    delegate: Rectangle {
                        width: 200; height: 25
                        Text { text: fileName }

                        MouseArea {
                            anchors.fill: parent
                            onDoubleClicked: {
                                if (model.hasModelChildren)
                                    tableView.model.rootIndex = tableView.model.modelIndex(index)
                            }
                        }
                    }
                }
            }

            TreeView {
                id: treeView;

                TableViewColumn {
                    title: "Name"
                    role: "fileName"
                    width: 300
                }
                TableViewColumn {
                    title: "Permissions"
                    role: "filePermissions"
                    width: 100
                }

                model: treeFileSystemModel
            }
        }
    }
}
