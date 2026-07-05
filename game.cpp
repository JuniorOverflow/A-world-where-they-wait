#include "game.h"
#include "chapter1.h"
#include "player.h"
#include "saveSystem.h"
#include "creatingItems.h"
#include <iostream>
#include <string>
#include <vector>


void run() 
{
  showMainMenu();
}

void showMainMenu()
{

  while (isRunning)
  {
    std::cout << "---- Добро пожаловать в игру The alchemy of eternal sunset ----" << std::endl;
    std::cout << "1. Новая игра " << std::endl;
   std::cout << "2. Продольжить " << std::endl;
    std::cout << "3. Выход " << std::endl;

  }

}