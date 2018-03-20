#ifndef __SUPERHERO_
#define __SUPERHERO_

#include <string>

class Superhero{

public:

  Superhero();

  Superhero(int page_id, std::string name, std::string urlslug, std::string id,
    std::string alignment, char eye_color, char hair_color, char sex,
    std::string gsm, bool alive, int appearances,
    std::string first_appearance, int year);

    std::string getName() const;
    int getPageId() const;

    void setPageId(int a);
    void setName(std::string a);
    void setUrlslug(std::string a);
    void setId(std::string a);
    void setAlignment(std::string a);
    void setEyeColor(char a);
    void setHairColor(char a);
    void setSex(char a);
    void setGsm(std::string a);
    void setAlive(bool a);
    void setAppearances(int a);
    void setFirstAppearance(std::string a);
    void setYear(int a);

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
  bool alive;
  int appearances;
  std::string first_appearance;
  int year;
};

#endif
