#ifndef LAUNCHINGSCREEN_H
#define LAUNCHINGSCREEN_H

#include <QString>
#include <QDialog>
#include <QSettings>
#include <QListWidgetItem>
#include <QTreeWidgetItem>

namespace Ui {
class LaunchingScreen;
}

class LaunchingScreen : public QDialog
{
    Q_OBJECT

public:
    explicit LaunchingScreen(QWidget *parent = 0);
    virtual ~LaunchingScreen();
    QString selectedFile();

private slots:
    void checkboxState(bool state);
    void enableRecentButton(const QModelIndex &current, const QModelIndex &previous);
    void enableExampleButton(QTreeWidgetItem *current, QTreeWidgetItem *previous);
    void openFile();
    void openRecent();
    void openExample();
    void openUserManualURL();

private:
    void checkOpen(const QVariant &data);
    
    QString selection;
    Ui::LaunchingScreen *ui;
};

#endif // LAUNCHINGSCREEN_H
