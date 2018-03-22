#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "csv.h"
#include "my_hash.h"

/***************************************************************
 * This program takes a marvelData.csv database and converts
 * it to a hash table with 3 different hashing functions.
 * The end collisions are then printed to a file. Uses a CSV
 * parse library by user ben-strasser on github.
 * https://github.com/ben-strasser/fast-cpp-csv-parser
 *
 * @author Zachary Thomas
 * @version 1.0
 **************************************************************/

int main(int argc, char const *argv[]) {

  /** Holds the column count*/
  unsigned const colCount = 13;

  /** Using a csv parse library csv.h written by ben-strasser
   https://github.com/ben-strasser/fast-cpp-csv-parser */
  io::CSVReader<colCount, io::trim_chars<' '>,
  io::double_quote_escape<',','\"'> > in("src/marvelData.csv");

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

  /** Holds eye_colorChar*/
  char eye_colorChar;

  /** Holds hair_colorChar*/
  char hair_colorChar;

  /** Holds sexChar*/
  char sexChar;

  /** Holds eye_color*/
  std::string eye_color;

  /** Holds hair_color*/
  std::string hair_color;

  /** Holds sex*/
  std::string sex;

  /** Holds gsm*/
  std::string gsm;

  /** Holds aliveChar*/
  char aliveChar;

  /** Holds aliveBool*/
  bool aliveBool;

  /** Holds alive*/
  std::string alive;

  /** Holds appearances*/
  int appearances;

  /** Holds first_appearance*/
  std::string first_appearance;

  /** Holds year*/
  int year;

  /** Holds hashTable1*/
  My_hash hashTable1;
  // Uses function 1
  hashTable1.setHashFunction(1);

  /** Holds hashTable2*/
  My_hash hashTable2;
  // Uses funciton 2
  hashTable2.setHashFunction(2);

  /** Holds hashTable3*/
  My_hash hashTable3;
  // Uses function 3
  hashTable3.setHashFunction(3);

  /** Holds s Superhero*/
  Superhero s;

  /** Holds collisions 1*/
  int coll1 = 0;

  /** Holds collisions 2*/
  int coll2 = 0;

  /** Holds collisions 2*/
  int coll3 = 0;

  // Read in collumns
  in.read_header(io::ignore_extra_column, "page_id", "name", "urlslug", "ID",
  "ALIGN", "EYE", "HAIR", "SEX", "GSM", "ALIVE", "APPEARANCES",
  "FIRST APPEARANCE", "Year");

  // Begin main loop to read in each line
  while(in.read_row(page_id, name, urlslug, id, alignment, eye_color,
    hair_color, sex, gsm, alive, appearances, first_appearance, year)){

      // Convert respective strings into characters
      eye_colorChar = eye_color[0];
      hair_colorChar =  hair_color[0];
      sexChar = sex[0];

      // Convert to boolean
      aliveChar = alive[0];

      if(aliveChar == 'L')
        aliveBool = true;
      else
        aliveBool = false;

      // Begin inserting superhero attributes
      s.setPageId(page_id);
      s.setName(name);
      s.setUrlslug(urlslug);
      s.setId(id);
      s.setAlignment(alignment);
      s.setEyeColor(eye_colorChar);
      s.setHairColor(hair_colorChar);
      s.setSex(sexChar);
      s.setGsm(gsm);
      s.setAlive(aliveBool);
      s.setAppearances(appearances);
      s.setFirstAppearance(first_appearance);
      s.setYear(year);

      // Start inserting using respective hash functions
      // Collision goes up if there is something
      // in the index of the respective hash function
      // used.
      if(hashTable1.insert(s) == false)
        coll1++;

      if(hashTable2.insert(s) == false)
        coll2++;

      if(hashTable3.insert(s) == false)
        coll3++;

  }

  // Begin writing to file
  std::ofstream output("RESULTS.md");

  output << "Hashing function 1 collisions: " << coll1 << std::endl;
  output << "Hashing function 2 collisions: " << coll2 << std::endl;
  output << "Hashing function 3 collisions: " << coll3 << std::endl;

  // Close file and end program
  output.close();
  return 0;
}
