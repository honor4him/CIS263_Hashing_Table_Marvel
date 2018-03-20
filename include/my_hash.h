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
    hashTable.resize(TABLESIZE);
		for(int i = 0; i < TABLESIZE; i++){
			hashTable[i].reserve(sizeof(Superhero));
		}
  }

  bool insert(const Superhero & s){
    bool inserted = false;
    int key = s.getPageId();
    std::string name = s.getName();
    //4219480
    int index = (name[0] * 3 + name[1]) % TABLESIZE;

    std::cout << index << std::endl;

    int superHere = hashTable[index].size();

    if(superHere < 0){
      inserted = true;
      hashTable[index].push_back(s);
    } else {
      hashTable[index].push_back(s);
    }
    return inserted;
  }

  Superhero & get(const std::string name){


  }

private:
  std::vector<std::vector<Superhero>> hashTable;

  const int TABLESIZE = 17011;

};
#endif
