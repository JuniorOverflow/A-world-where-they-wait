#include "creatingItems.h"
#include <iostream>
#include <string>
#include "player.h"
#include "game.h"

enum class SkillType
{
  Ignifer,
  Devorantis,
  Sleepwalker,
  Descriptions
};

void CreatingSkills()
{
  std::cout << "Создание Скиллов " << std::endl;
  std::cout << "1. Игнифер." << std::endl;
  std::cout << "2. Деворантис." << std::endl;
  std::cout << "3. Сомнум." << std::endl;
  std::cout << "4. Описание скиллов." << std::endl;
  char input;
  std::cin >> input;

  SkillType selectSkillType = SkillType::Descriptions;

  if (input == 1)
  {
    selectSkillType = static_cast<SkillType>(SkillType::Ignifer);
  }if (input == 2)
  {
    selectSkillType = static_cast<SkillType>(SkillType::Devorantis);
  }if (input == 3)
  {
    selectSkillType = static_cast<SkillType>(SkillType::Sleepwalker);
  }if (input == 4)
  {
    selectSkillType = static_cast<SkillType>(SkillType::Descriptions);
  }

  switch (selectSkillType)
  {
  case SkillType::Ignifer:
    if (mana >= 35)
    {
      mana -= 35;
      addSkills("Ignifer");
      std::cout << "Вы получили скилл *Игнифер*" << std::endl;
    }
    else
    {
      std::cout << "Недостаточно маны для изготовление" << std::endl;
    }
    break;
  case SkillType::Devorantis:
    if (mana >= 75)
    {
      mana -= 75;
      addSkills("Devorantis");
      std::cout << "Вы получили скилл *Деворантис*" << std::endl;
    }
    else
    {
      std::cout << "Недостаточно маны для изготовление" << std::endl;
    }
    break;
  case SkillType::Sleepwalker:
    if (nama >= 20)
    {
      mana -= 20;
      addSkills("Sleepwalker");
      std::cout << "Вы получили скилл *Сомнум*" << std::endl;
    }
    else
    {
      std::cout << "Недостаточно маны для изготовление" << std::endl;
    }
    break;
  case SkillType::Descriptions:
    std::cout << "Описание скиллов:" << std::endl;
    std::cout << "1. Игнифер - что-то похожие на фаер бол, при поподание наносет урон в размере 20 единц" << std::endl;
    std::cout << "2. Деворантис - Расплавляет металл, заставляя врагов снимать шлемы из-за это легче убить" << std::endl;
    std::cout << "3. Сомнум - по первым 3 буквам можно понят что этот скилл заставляем врогов зазыпать лучше использова со спены, пере врогом есть вероятность что враг будет не спать" << std::endl;
    break;
  default:
    std::cout << "Это все, а ты что думал." << std::endl;
  }