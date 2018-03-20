#include <string>
#include "superhero.h"

Superhero::Superhero(){}

Superhero::Superhero(int page_id, std::string name, std::string urlslug,
  std::string id,
  std::string alignment, char eye_color, char hair_color, char sex,
  std::string gsm, bool alive, int appearances,
  std::string first_appearance, int year): page_id(page_id), name(name),
  urlslug(urlslug), id(id), alignment(alignment), eye_color(eye_color),
  hair_color(hair_color), sex(sex), gsm(gsm), alive(alive),
  appearances(appearances), first_appearance(first_appearance), year(year){}

std::string Superhero::getName() const {
  return name;
}

int Superhero::getPageId() const {
  return page_id;
}

void Superhero::setPageId(int a){
  page_id = a;
}

void Superhero::setName(std::string a){
  name = a;
}

void Superhero::setUrlslug(std::string a){
  urlslug = a;
}

void Superhero::setId(std::string a){
  id = a;
}

void Superhero::setAlignment(std::string a){
  alignment = a;
}

void Superhero::setEyeColor(char a){
  eye_color = a;
}

void Superhero::setHairColor(char a){
  hair_color = a;
}

void Superhero::setSex(char a){
  sex = a;
}

void Superhero::setGsm(std::string a){
  gsm = a;
}

void Superhero::setAlive(bool a){
  alive = a;
}

void Superhero::setAppearances(int a){
  appearances = a;
}

void Superhero::setFirstAppearance(std::string a){
  first_appearance = a;
}

void Superhero::setYear(int a){
  year = a;
}
