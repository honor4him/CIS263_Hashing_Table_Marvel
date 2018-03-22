#ifndef __SUPERHERO_
#define __SUPERHERO_

#include <string>

/***************************************************************
 * This class holds a line from marvelData.csv file.
 *
 * @author Zachary Thomas
 * @version 1.0
 **************************************************************/
class Superhero{

public:

  /***************************************************************
   * No paramer constructor.
   **************************************************************/
  Superhero();

    /***************************************************************
     * Accessor function for name.
     * @return name for superhero
     **************************************************************/
    std::string getName() const;

    /***************************************************************
     * Accessor function for page_id.
     * @return page_id for superhero
     **************************************************************/
    int getPageId() const;

    /***************************************************************
     * Mutator function for page_id.
     * @param page_id for superhero
     * @return none
     **************************************************************/
    void setPageId(int a);

    /***************************************************************
     * Mutator function for name.
     * @param a name for superhero
     * @return none
     **************************************************************/
    void setName(std::string a);

    /***************************************************************
     * Mutator function for urlslug.
     * @param a urlslug for superhero
     * @return none
     **************************************************************/
    void setUrlslug(std::string a);

    /***************************************************************
     * Mutator function for id.
     * @param a id for superhero
     * @return none
     **************************************************************/
    void setId(std::string a);

    /***************************************************************
     * Mutator function for alignment.
     * @param a alignment for superhero
     * @return none
     **************************************************************/
    void setAlignment(std::string a);

    /***************************************************************
     * Mutator function for eye_color.
     * @param a eye_color for superhero
     * @return none
     **************************************************************/
    void setEyeColor(char a);

    /***************************************************************
     * Mutator function for hair_color.
     * @param a hair_color for superhero
     * @return none
     **************************************************************/
    void setHairColor(char a);

    /***************************************************************
     * Mutator function for sex.
     * @param a sex for superhero
     * @return none
     **************************************************************/
    void setSex(char a);

    /***************************************************************
     * Mutator function for gsm.
     * @param  a gsm for superhero
     * @return none
     **************************************************************/
    void setGsm(std::string a);

    /***************************************************************
     * Mutator function for alive.
     * @param a alive boolean for superhero
     * @return none
     **************************************************************/
    void setAlive(bool a);

    /***************************************************************
     * Mutator function for appearances.
     * @param a appearances for superhero
     * @return none
     **************************************************************/
    void setAppearances(int a);

    /***************************************************************
     * Mutator function for first_appearance.
     * @param a first_appearance for superhero
     * @return none
     **************************************************************/
    void setFirstAppearance(std::string a);

    /***************************************************************
     * Mutator function for year.
     * @param a year for superhero
     * @return none
     **************************************************************/
    void setYear(int a);

private:

  /** Holds page_id*/
  int page_id;

  /** Holds name*/
  std::string name;

  /** Holds urlslug*/
  std::string urlslug;

  /** Holds id*/
  std::string id;

  /** Holds alignment*/
  std::string alignment;

  /** Holds eye_color*/
  char eye_color;

  /** Holds hair_color*/
  char hair_color;

  /** Holds sex*/
  char sex;

  /** Holds gsm*/
  std::string gsm;

  /** Holds alive boolean*/
  bool alive;

  /** Holds appearances*/
  int appearances;

  /** Holds first_appearance*/
  std::string first_appearance;

  /** Holds year*/
  int year;
};

#endif
