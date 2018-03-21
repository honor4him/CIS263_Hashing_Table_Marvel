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
		//for(int i = 0; i < TABLESIZE; i++){
		//	hashTable[i].reserve(sizeof(Superhero));
		//}
  }

  bool insert(const Superhero & s){
    bool inserted = false;
    int key = s.getPageId();
    std::string name = s.getName();
    //16376
    int index = hash1(name, key);

    //std::cout << index << std::endl;

    int superHere = hashTable[index].size();

    std::cout << superHere << std::endl;

    if(superHere == 0){
      inserted = true;
      hashTable[index].push_back(s);
    } else {
      hashTable[index].push_back(s);
    }
    return inserted;
  }

  // 13759 collisions
  int hash1(std::string name, int key){
    return (name[0] * 99 + name[1] * 3 + name[3] * 5 +
    name[4] * 7) % TABLESIZE;
  }

  int hash2(std::string name, int key){
    for(int i = 0; i<4; i++){
      
    }
  }

  int hash3(std::string name, int key){

  }

  Superhero & get(const std::string name){


  }

private:
  std::vector<std::vector<Superhero>> hashTable;

  const int TABLESIZE = 17011;

};
#endif
