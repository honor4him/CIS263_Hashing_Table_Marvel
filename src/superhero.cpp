#include <string>
#include "superhero.h"

/***************************************************************
 * This class holds a line from marvelData.csv file.
 *
 * @author Zachary Thomas
 * @version 1.0
 **************************************************************/
Superhero::Superhero(){}

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
