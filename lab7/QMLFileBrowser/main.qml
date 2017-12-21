import QtQuick 2.2
import QtQuick.Controls 1.4
import QtQml.Models 2.2

ApplicationWindow {
    width: 500; height: 500
    visible: true

    ItemSelectionModel {
        id: sel
        model: treeFileSystemModel
        onSelectionChanged: {
            console.log("selected", selected)
            console.log("deselected", deselected)
        }
        onCurrentChanged: console.log("current", current)
    }

    SplitView {
        anchors.fill: parent

        TreeView {
            id: treeView;
            selection: sel

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

        TableView {
            id: tableView;
//            Layout.fillWidth: true
//            Layout.preferredWidth: 500
//            Layout.preferredHeight: 500

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
//            onDoubleClicked: {
//                var curIndex = this.currentRow;
//                rootIndex: treeFileSystemModel.changeDir(curIndex);
//            }
            onClicked: {
                treeView.rootIndex = treeFileSystemModel.getIndex(this.currentRow);
            }
            model: treeFileSystemModel
        }
    }
}
