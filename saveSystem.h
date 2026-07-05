#ifdef SAVESYSTEAM_H
#define SAVESYSTEM_H

#include "player.h"
#include <string> 

class saveSystem
{
private:
  std::string _file_Save_Name_;
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