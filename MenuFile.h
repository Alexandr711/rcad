#include <QMenu>
#include <QAction>

class MenuFile: public QMenu
{
  public:
    MenuFile();

  private:
    QAction* createFileAction;
    QAction* openFileAction;
    QAction* createProjectAction;
    QAction* openProjectAction;

    QActon* quitAction;
}
