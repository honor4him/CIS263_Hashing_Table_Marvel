#ifndef __MY_HASH_
#define __MY_HASH_

#include <string>
#include <vector>
#include <iostream>
#include "superhero.h"

/***************************************************************
 * This header file is the backbone to the program. It contains
 * the hash table with a prime number size of 17011. The hash
 * functions to insert into the table are mainly ideas from
 * class or copied directly from notes.
 *
 * @author Zachary Thomas
 * @version 1.0
 **************************************************************/
class My_hash{

public:

  /***************************************************************
   * Constructor uses table size of 17011
   **************************************************************/
  My_hash(){
    hashTable.reserve(TABLESIZE);
  }

  /***************************************************************
   * Function inserts Superhero object into the hashTable with
   * the chosen hash function.
   * @param s A superhero object to be inserted.
   * @return bool tells the main program if there was a collision.
   **************************************************************/
  bool insert(const Superhero & s){
    int index;
    bool inserted = false;
    std::string name = s.getName();

    // Determine hash function
    if(hashFunction == 1){
      index = hash1(name);
    } else if (hashFunction == 2){
      index = hash2(name);
    } else if (hashFunction == 3){
      index = hash3(name);
    }

    // See if there is a Superhero in the table already
    int superHere = hashTable[index].size();

    // See if there was a collision
    if(superHere == 0){
      inserted = true;
      hashTable[index].push_back(s);
    } else {
      hashTable[index].push_back(s);
    }
    return inserted;
  }

  /***************************************************
  * This function is made to take first four letters
  * of the superhero name and times each letter by an
  * odd number. Hashing function idea from
  * hashing_functions.h under class notes.
  * @param name A string to turn into an index.
  * @return int The index to return.
  ***************************************************/
  int hash1(std::string name){
    return (name[0] * 99 + name[1] * 199 + name[3] * 5 +
    name[4] * 7) % TABLESIZE;
  }
  
  /***************************************************
  * This function simply adds all the characters in
  * the name string. Hashing function idea from
  * hashing_functions.h under class notes.
  * @param name A string to turn into an index.
  * @return int The index to return.
  ***************************************************/
  int hash2(std::string name){
    int hashVal = 0;

    for(char ch:name){
      hashVal += ch;
    }
    return hashVal % TABLESIZE;
}

  /***************************************************
  * This function takes the name of the superhero and
  * returns an unsigned int. Hashing function idea from
  * hashing_functions.h under class notes.
  * @param name A string to turn into an index.
  * @return unsigned int To insert index.
  ***************************************************/
  unsigned int hash3(std::string name){
    unsigned int hashVal = 99;
    for( char ch:name ){
      hashVal = 37 * hashVal + ch;
    }
    return hashVal % TABLESIZE;
  }

  /***************************************************
  * This function gets the index of the Superhero
  * stored in the hash table by passing it's name
  * in the corresponding hash function.
  * @param name A string to turn into an index
  * @return Superhero The object to get
  ***************************************************/
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

  /***************************************************
  * This function determines what hash function to
  * use.
  * @param a An into to determine hash funciton
  ***************************************************/
  void setHashFunction(int a){
    hashFunction = a;
  }

private:

  /** Double vector to hold Superhero objects*/
  std::vector<std::vector<Superhero> > hashTable;

  /** Holds what hash function to use*/
  int hashFunction = 0;

  /** Holds the total size  of the hash table*/
  const int TABLESIZE = 17011;

};
#endif
