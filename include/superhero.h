#include <string>
#include <stdio>

#ifndef __SUPERHERO_
#define __SUPERHERO_

class superhero{

public:
  superhero(int page_id, std::string name, std::string urlslug, std::string id,
    std::string alignment, char eye_color, char hair_color, char sex,
    std::string gsm, boolean alive, int appearances,
    std::string first_appearance, int year);

private:
  int page_id;
  std::string name;
  std::string urlslug;
  std::string id;
  std::string alignment;
  char eye_color;
  char hair_color;
  char sex;
  std::string gsm;
  boolean alive;
  int appearances;
  std::string first_appearance;
  int year;
};

#endif
