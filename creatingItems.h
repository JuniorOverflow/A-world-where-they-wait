#ifdef CREARINGTEMS_H
#define CREARINGTEMS_H

#include "player.h"
#include <iostream>
#include <string>

class crearingIngtems 
{
private:
  //Довавляем имя скиллам и урон,востоновление|здоровия|маны.
  std::string skillName;
  std::string skillDescription;
  int damageSkill;
  int restoringHealth;
  int restoringMana;
  
  // Добавление предметов для изготовление скиллов 
  std::string itemsToMake;
  int alcohol;
  int crystals;
  int sulfur;
  int stone;
  int saltpeters;
  int cloth;
  int saltpeters;

public:
  //Добовляем функции.
  CreatingSkills();
  void CreatingSkills();

  // Добавление предметов для изготовление скиллов 
  std::string getItemsToMake() const;
  int alcohol() const;
  int crystals() const;
  int sulfur() const;
  int stone() const;
  int saltpeters() const;
  int cloth() const;
  int saltpeters() const;

  // Добовление констатов 
  std::string getNameSkill() const;
  std::string getDescriptionSkill() const;
  int getDamageSkill() const;
  int getRestoringHealth() const;
  int getRestoringMana() const;

  void setNameSkill(const std::string& name);
  void setDescriptionSkill(const std::string& description);
  void setRestoringHealth(const int health);
  void setDamageSkill(const int damage);
  void setRestoringMana(const int mana);

};


#endif