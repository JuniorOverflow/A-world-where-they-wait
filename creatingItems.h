#ifdef CREARINGTEMS_H
#define CREARINGTEMS_H

#include "player.h"
#include <iostream>
#include <string>

class crearingIngtems 
{
private:
  //Довавляем имя скиллам и урон,востоновление|здоровия|маны.
  std::string _skill_Name_;
  std::string _skill_Description_;
  int damageSkill;
  int restoringHealth;
  int restoringMana;

public:
  //Добовляем функции.
  void CreatingSkills();
  CreatingSkills();
  
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