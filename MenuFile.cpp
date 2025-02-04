#include "MenuFile.h"

MenuFile::MenuFile()
{}

//Создание действий для меню "Файл"
void MenuFile::createCreateFileAction()
{
  createFileAction = new QAction();
}

void MenuFile::createOpenFileAction()
{
  openFileAction = new QAction();
}

void MenuFile::createCreateProjectAction()
{
  createProjectAction = new QAction();
}

void MenuFile::createOpenProjectAction()
{
  openProjectAction = new QAction();
}


void MenuFile::createQuitAction()
{
  quitAction = new QAction();
}

void MenuFile::cleanup()
{
  delete createFileAction;
  delete openFileAction;
  delete createProjectAcrtion;
  delete openProjectAction;

  delete quitAction;
}





