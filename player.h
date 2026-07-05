#ifdef PLAYER_H
#define PLAYER_H

#include "creatingItems.h"
#include <iostream>
#include <vector>
#include <string>

class Player
{
private:
  //Добавляем характеристике для геройне
  std::string _name_;
  int player.health;
  int player.maxHealth;
  float player.damage;
  float levelUpDamage;
  int xp;
  int level;
  int player.mana;
  std::vector<std::string> inventory;
  bool skils;
  bool hesSword;
  bool hesNewSword;
  bool ignifer;
  bool devorantis;
  bool somnum;

public:
  Player();
  void takeDamage(int amout);
  void health(int amout);
  void addXp(int amout);
  void levelUp();
  void mana(int anout);
  void addToInventory(const std::string& item);
  bool hasItem(const std::string& item) const;
  void addNote(const std::string& note);
  bool hasNote(const std::string& note) const;

  std::string getName() const { return name; }
  int getHealht() const { return healht; }
  int getMaxHealht() const { return maxHealht; }
  int getDamage() const { return damage; }
  int getLevelUpDamage() const { return levelUpDamage; }
  int getXp() const { return xp; }
  int getLevel() const { return level; }
  int getMana() const { return mana; }
  bool getHasSword() const { return hasSword; }
  bool gerHasNewSword() const { return hasNewSword; }
  bool getIsImprisoned() const { return isImprisoned; }
  bool addSkills() const { return skills; }

  //Добовляем окна c статистикой
  void displayStatus() const;
  void displayInventory() const;
  void displayLevel() const;
  void displayHealht() const;
  void displayMana() const;
};

#endif 