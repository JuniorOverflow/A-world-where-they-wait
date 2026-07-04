#include "game.h"
#include "chapter1.h"
#include "player.h"
#include "saveSystem.h"
#include "creatingItems.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


void run() {
  showMainMenu();
}

void showMainMenu()
{

  while (isRunning)
  {
    cout << "---- Добро пожаловать в игру The alchemy of eternal sunset ----" << endl;
    cout << "1. Новая игра " << endl;
    cout << "2. Продольжить " << endl;
    cout << "3. Выход " << endl;

  }

}