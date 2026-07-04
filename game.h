#ifdef GAME_H
#define GAME_H

#include "player.h"
#include "saveSystem.h"
#include <iostream>
#include <string>
#include <vector>

class game
{
private:
  Player = player;
  SaveSystem = saveSystem;
  int currentChapter;
  bool isRunning = true;

  //Главы
  void chapter1;

  //Вспомогатели 
  void clearScreen();
  void waitForEnter();
  void displayChapterTitle(const std::string& title);
  bool askYesNo(const std::string& question);
  int askChoice(const std::string& question, const std::vector<std::string>& options);

  //Головоломки и мини игры
  bool solveRiddle1();

public:
  Game();
  void run();
  void startGame;
  void continueGame;
  void showMainMenu;


};

#endif 

