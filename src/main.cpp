#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "csv.h"
#include "my_hash.h"

int main(int argc, char const *argv[]) {

  unsigned const colCount = 13;

  // Using a csv parse library csv.h written by ben-strasser
  // https://github.com/ben-strasser/fast-cpp-csv-parser
  io::CSVReader<colCount, io::trim_chars<' '>,
  io::double_quote_escape<',','\"'> > in("src/marvelData.csv");

  int page_id;
  std::string name;
  std::string urlslug;
  std::string id;
  std::string alignment;
  char eye_colorChar;
  char hair_colorChar;
  char sexChar;
  std::string eye_color;
  std::string hair_color;
  std::string sex;
  std::string gsm;
  char aliveChar;
  bool aliveBool;
  std::string alive;
  int appearances;
  std::string first_appearance;
  int year;

  My_hash hashTable1;
  hashTable1.setHashFunction(1);

   My_hash hashTable2;
   hashTable2.setHashFunction(2);

   My_hash hashTable3;
   hashTable3.setHashFunction(3);

  Superhero s;

  int coll1 = 0;
  int coll2 = 0;
  int coll3 = 0;

  in.read_header(io::ignore_extra_column, "page_id", "name", "urlslug", "ID",
  "ALIGN", "EYE", "HAIR", "SEX", "GSM", "ALIVE", "APPEARANCES",
  "FIRST APPEARANCE", "Year");

  while(in.read_row(page_id, name, urlslug, id, alignment, eye_color,
    hair_color, sex, gsm, alive, appearances, first_appearance, year)){

      eye_colorChar = eye_color[0];
      hair_colorChar =  hair_color[0];
      sexChar = sex[0];

      aliveChar = alive[0];

      if(aliveChar == 'L')
        aliveBool = true;
      else
        aliveBool = false;

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

      if(hashTable1.insert(s) == false)
        coll1++;

       if(hashTable2.insert(s) == false)
         coll2++;

       if(hashTable3.insert(s) == false)
         coll3++;

  }

  std::ofstream output("RESULTS.md");

  output << "Hashing function 1 collisions: " << coll1 << std::endl;
  output << "Hashing function 2 collisions: " << coll2 << std::endl;
  output << "Hashing function 3 collisions: " << coll3 << std::endl;

  output.close();

  std::cout << coll1 << std::endl;


  return 0;
}
