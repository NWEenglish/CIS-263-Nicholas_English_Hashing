/**********************************************************************
* This file includes all of the hashmap code and is used by the
* main.cpp file (located in the src folder).
*********************************************************************/

#ifndef __H_myHash__
#define __H_myHash__

#include <string>
#include <iostream>
#include <vector>
#include "superhero.h"

class my_Hash {

    public:

	/* Default constructor */
	my_Hash() {
	    hashMap.reserve(SIZE);
	}

	/*************************************************************
 	* Used to insert the Superhero object onto the hashmap.
 	*
 	* @param The superhero object.
 	* @return A boolean that returns true if there was a 
 	*     collision.
 	*************************************************************/ 
	bool insert(const Superhero & s) {
	    int location = 0;
	    bool ableToInsert = false;

	    /* Gets the location of where to place the object */	    
	    if(functionSelection == 1)
		location = hashFunction1(superhero.getName());
	    else if(functionSelection == 2)
		location = hashFunction2(superhero.getName());
	    else if(functionSelection == 3)
		location = hashFunction3(superhero.getName());

	    /* Determine if an object is already here */
	    // (1) http://www.cplusplus.com/reference/vector/vector/push_back/
	    if(hashMap[location].size() == 0) {
		ableToInsert = true;
		hashTable[location].push_back(superhero);
	    }

	    else {
		ableToInsert = false;
		hashMap[location].push_back(superhero);
	    }

	    return ableToInsert;
	}

	/*************************************************************
 	* This function has used similiar code to the insert function
 	* but instead returns the location of where the superhero is
 	* placed in the hash map.
 	*
 	* @param name The superhero's name.
 	* @return The superhero object.
 	*************************************************************/ 
	Superhero & get(const std::string name) {

	    /* Gets name through the hash function */

	}

	/*************************************************************
	 * First hash function. This function works by taking the
	 * ASCII value of each character in the superhero's name and
	 * then adds it together.
	 *
	 * @param name Holds the superhero's name.
	 * @return location Holds the location where the superhero was
	 * 	placed in the hash map.
	 ************************************************************/
	int hashFunction1(std::string name) {
	    int asciiValue = 0;

	    /* Loops through the entire string */
	    for(int i = 0; i < name.size(); i++) {
		asciiValue =+ name[i];
	    }
	    
	    return asciiValue % SIZE;
	}

	/*************************************************************
	 * Second hash function. This function works by taking the
	 * total number of letter in the name and sorting it based on
	 * that alone.
	 *
	 * @param name Holds the superhero's name.
	 * @return location Holds the location where the superhero was
	 * 	placed in the hash map.
	 ************************************************************/  
	int hashFunction2(std::string name) {
	    return name.size() % SIZE;
	}

	/*************************************************************
	 * Third hash function. This function works by placing taking
	 * the first two letters and sorting it based on those added
	 * together and then multiplied by three.
	 *
	 * @param name Holds the superhero's name.
	 * @return location Holds the location where the superhero was
	 * 	placed in the hash map.
	 ************************************************************/ 
	int hashFunction3(std::string name) {
	    int value = 0;

	    value = 3 * ( name[0] + name[1] );

	    return value % SIZE;
	}

	/*************************************************************
	 * Sets the hash function that is being process in this
	 * process.
	 *
	 * @param choice Holds the function choice.
	 ************************************************************/
	void setHashFunction(int choice) {
	     functionSelection = choice;
	}


    private:

	/* Variables */
	// Holds the table size
	const int SIZE = 17011;

	// Holds the Superhero object in a double vector.
	std::vector< std::vector<Superhero> > hashMap;

	// Holds the function that is being called.
	int functionSelection = 0;

};

/* Ideas for handleing collisions:
 * (1) Go to the next available spot.
 * (2) Chaining.
 * (3) Quadratic Probing.
 */

#endif // __H_myHash__
