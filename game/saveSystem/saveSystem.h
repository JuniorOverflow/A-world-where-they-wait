#ifdef SAVESYSTEAM_H
#define SAVESYSTEM_H

#include <string> 
#include "player.h"

class saveSystem
{
private:
  std::string fileSaveName;
  int currentChapter;

public:
  SaveSystem();

  bool saveGame(const Player& player, int chapter);
  bool loadGame(Player& player, int chapter);
  bool saveExitx() const;

  void setCurrentChapter(int chapter) { currentChapter = chapter; }
  int getCurrentChapter() const { return chapter; }
};

#endif