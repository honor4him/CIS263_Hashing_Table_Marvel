#include <string>
#include <vector>
#include "csv.h"
#include "my_hash.h"

int main(int argc, char const *argv[]) {

  unsigned  const colCount = 13;

  io::CSVReader<colCount> in("src/marvelData.csv");

  int page_id;
  std::string name;
  std::string urlslug;
  std::string id;
  std::string alignment;
  char eye_color;
  char hair_color;
  char sex;
  std::string gsm;
  //bool alive;
  char alive;
  int appearances;
  std::string first_appearance;
  int year;

  in.read_header(io::ignore_extra_column, "page_id", "name", "urlslug", "ID",
  "ALIGN", "EYE", "HAIR", "SEX", "GSM", "ALIVE", "APPEARANCES",
  "FIRST APPEARANCE", "Year");

  while(in.read_row(page_id, name, urlslug, id, alignment, eye_color,
    hair_color, sex, gsm, alive, appearances, first_appearance, year)){
    // do stuff with the data
  }
  return 0;
}
