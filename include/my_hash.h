/**********************************************************************
* This file includes all of the hashmap code and is used by the
* main.cpp file (located in the src folder).
*********************************************************************/

#ifndef __H_myHash__
#define __H_myHash__

#include <string>
#include <iostream>

class my_Hash {

    public:
	bool insert(const Superhero & s);
	Superhero & get(const std::string name);

    private:

};

/* Ideas for handleing collisions:
 * (1) Go to the next available spot.
 * (2) Chaining
 * (3) Quadratic Probing
 */

#endif // __H_myHash__
