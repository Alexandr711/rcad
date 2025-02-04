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

  private:
    void createMenuBar();
    void createCreateFileAction();
    void createOpenFileAction();
    void createCreateProjectAction();
    void createOpenProjectAction();

    void createQuitAction();

    void cleanup();
}
