#include <string>
#include "superhero.h"

/***************************************************************
 * This class holds a line from marvelData.csv file.
 *
 * @author Zachary Thomas
 * @version 1.0
 **************************************************************/

 /***************************************************************
  * No param constructor.
  **************************************************************/
Superhero::Superhero(){}

/***************************************************************
 * Accessor function for name.
 * @return name for superhero
 **************************************************************/
std::string Superhero::getName() const {
  return name;
}


/***************************************************************
 * Accessor function for page_id.
 * @return page_id for superhero
 **************************************************************/
int Superhero::getPageId() const {
  return page_id;
}

/***************************************************************
 * Mutator function for page_id.
 * @param  a page_id for superhero
 * @return none
 **************************************************************/
void Superhero::setPageId(int a){
  page_id = a;
}

/***************************************************************
 * Mutator function for name.
 * @param a name for superhero
 * @return none
 **************************************************************/
void Superhero::setName(std::string a){
  name = a;
}

/***************************************************************
 * Mutator function for urlslug.
 * @param  a urlslug for superhero
 * @return none
 **************************************************************/
void Superhero::setUrlslug(std::string a){
  urlslug = a;
}

/***************************************************************
 * Mutator function for id.
 * @param a id for superhero
 * @return none
 **************************************************************/
void Superhero::setId(std::string a){
  id = a;
}

/***************************************************************
 * Mutator function for alignment.
 * @param a alignment for superhero
 * @return none
 **************************************************************/
void Superhero::setAlignment(std::string a){
  alignment = a;
}

/***************************************************************
 * Mutator function for eye_color.
 * @param a eye_color for superhero
 * @return none
 **************************************************************/
void Superhero::setEyeColor(char a){
  eye_color = a;
}

/***************************************************************
 * Mutator function for hair_color.
 * @param a hair_color for superhero
 * @return none
 **************************************************************/
void Superhero::setHairColor(char a){
  hair_color = a;
}

/***************************************************************
 * Mutator function for sex.
 * @param a sex for superhero
 * @return none
 **************************************************************/
void Superhero::setSex(char a){
  sex = a;
}

/***************************************************************
 * Mutator function for gsm.
 * @param  a gsm for superhero
 * @return none
 **************************************************************/
void Superhero::setGsm(std::string a){
  gsm = a;
}

/***************************************************************
 * Mutator function for alive.
 * @param a alive boolean for superhero
 * @return none
 **************************************************************/
void Superhero::setAlive(bool a){
  alive = a;
}

/***************************************************************
 * Mutator function for appearances.
 * @param a appearances for superhero
 * @return none
 **************************************************************/
void Superhero::setAppearances(int a){
  appearances = a;
}

/***************************************************************
 * Mutator function for first_appearance.
 * @param a first_appearance for superhero
 * @return none
 **************************************************************/
void Superhero::setFirstAppearance(std::string a){
  first_appearance = a;
}

/***************************************************************
 * Mutator function for year.
 * @param a year for superhero
 * @return none
 **************************************************************/
void Superhero::setYear(int a){
  year = a;
}
