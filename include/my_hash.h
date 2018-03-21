#ifndef __MY_HASH_
#define __MY_HASH_

#include <string>
#include <vector>
#include <iostream>
#include "superhero.h"

// Table size 17011

//template<typename superH>

class My_hash{

public:

  My_hash(){
    hashTable.reserve(TABLESIZE);
  }

  bool insert(const Superhero & s){
    int index;
    bool inserted = false;
    std::string name = s.getName();

    if(hashFunction == 1){
      index = hash1(name);
    } else if (hashFunction == 2){
      index = hash2(name);
    } else if (hashFunction == 3){
      index = hash3(name);
    }

    int superHere = hashTable[index].size();

    if(superHere == 0){
      inserted = true;
      hashTable[index].push_back(s);
    } else {
      hashTable[index].push_back(s);
    }
    return inserted;
  }

  /***************************************************
  *
  // 12051 collisions. Made to take first four letters
  of the superhero name and times each letter by an odd
  number. Hashing function idea from hashing_functions.h
  under class notes.


  */
  int hash1(std::string name){
    return (name[0] * 99 + name[1] * 199 + name[3] * 5 +
    name[4] * 7) % TABLESIZE;
  }
/*
  Hashing function from hashing_functions.h
  under class notes.
*/
  int hash2(std::string name){
    int hashVal = 0;

    for(char ch:name){
      hashVal += ch;

    return hashVal % TABLESIZE;
  }
}


  /*
    Hashing function from hashing_functions.h
    under class notes.
  */
  unsigned int hash3(std::string name){
    unsigned int hashVal = 99;
    for( char ch:name ){
      hashVal = 37 * hashVal + ch;
    }

    return hashVal % TABLESIZE;

  }

  // help from
  Superhero & get(const std::string name){
    int index;
    if(hashFunction == 1){
      index = hash1(name);
    } else if (hashFunction == 2){
      index = hash2(name);
    } else if (hashFunction == 3){
      index = hash3(name);
    }

    // Return first index of vectors
    return hashTable[index][0];
  }

  void setHashFunction(int a){
    hashFunction = a;
  }

private:
  std::vector<std::vector<Superhero> > hashTable;

  int hashFunction = 0;

  const int TABLESIZE = 17011;

};
#endif
