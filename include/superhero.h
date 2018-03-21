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
     * Mutator function for page_id.
     * @param page_id for superhero
     * @return none
     **************************************************************/
    void setName(std::string a);

    /***************************************************************
     * Mutator function for page_id.
     * @param page_id for superhero
     * @return none
     **************************************************************/
    void setUrlslug(std::string a);

    /***************************************************************
     * Mutator function for page_id.
     * @param page_id for superhero
     * @return none
     **************************************************************/
    void setId(std::string a);

    /***************************************************************
     * Mutator function for page_id.
     * @param page_id for superhero
     * @return none
     **************************************************************/
    void setAlignment(std::string a);

    /***************************************************************
     * Mutator function for page_id.
     * @param page_id for superhero
     * @return none
     **************************************************************/
    void setEyeColor(char a);

    /***************************************************************
     * Mutator function for page_id.
     * @param page_id for superhero
     * @return none
     **************************************************************/
    void setHairColor(char a);

    /***************************************************************
     * Mutator function for page_id.
     * @param page_id for superhero
     * @return none
     **************************************************************/
    void setSex(char a);

    /***************************************************************
     * Mutator function for page_id.
     * @param page_id for superhero
     * @return none
     **************************************************************/
    void setGsm(std::string a);

    /***************************************************************
     * Mutator function for page_id.
     * @param page_id for superhero
     * @return none
     **************************************************************/
    void setAlive(bool a);

    /***************************************************************
     * Mutator function for page_id.
     * @param page_id for superhero
     * @return none
     **************************************************************/
    void setAppearances(int a);

    /***************************************************************
     * Mutator function for page_id.
     * @param page_id for superhero
     * @return none
     **************************************************************/
    void setFirstAppearance(std::string a);

    /***************************************************************
     * Mutator function for page_id.
     * @param page_id for superhero
     * @return none
     **************************************************************/
    void setYear(int a);

private:

  /** Holds page_id*/
  int page_id;

  /** Holds page_id*/
  std::string name;

  /** Holds page_id*/
  std::string urlslug;

  /** Holds page_id*/
  std::string id;

  /** Holds page_id*/
  std::string alignment;

  /** Holds page_id*/
  char eye_color;

  /** Holds page_id*/
  char hair_color;

  /** Holds page_id*/
  char sex;

  /** Holds page_id*/
  std::string gsm;

  /** Holds page_id*/
  bool alive;

  /** Holds page_id*/
  int appearances;

  /** Holds page_id*/
  std::string first_appearance;

  /** Holds page_id*/
  int year;
};

#endif
