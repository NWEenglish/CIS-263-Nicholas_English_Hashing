/**********************************************************************
 * This program creates a hashmap that hashes based on name. The
 * purpose of this program is to see how different hashing functions
 * might affect collisions.
 *
 * The program will read in the superhero.csv database file. It will
 * then split each line and create a Superhero object wih it and then
 * store it. The program will also simultaneously keep track of the
 * amount of collisions that occure. At the end, the program will send
 * a copy of the hash function text as well as the number of collisions
 * that occurred during the course of inserting all the superheroes
 * into the hashmap.
 *
 * @author Nicholas English
 * @version 1.0
 * @date 3/21/2018
 *********************************************************************/

/* Include statement(s) */
#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>

#include "csv.h"
#include "my_hash.h"

/* Size of parameters being read in for the Superhero object */
//#define SIZE 13

/* Main */
int main(int argc, char** argv) {

    /* Creates an object */
    Superhero superhero;

    /** Variable(s) */
    /* Fixed variable */
    // (1) https://stackoverflow.com/questions/12641091/limit-scope-of-define-labels
    const int SIZE = 13; // For 13 parameters (see variables below)

    /* All info that will be read in and placed into the Superhero object */
    int page_id;
    std::string name;
    std::string urlslug;
    std::string id;
    std::string alignment;
    char eye_color;
    char hair_color;
    char sex;
    std::string gsm;
    bool alive;
    int appearance;
    std::string first_appearance;
    int year;
    
    /* Variables to be converted */
    std::string eye_colorStr;
    std::string hair_colorStr;
    std::string sexStr;
    std::string aliveStr;

    /* Collision counter */
    totalCollisions = 0;
    
    /* Used to read in the file */
    // (1) https://github.com/irawoodring/343/blob/master/operator_overloading/code_samples/vector.cpp
    io::CSVReader < SIZE, io::trim_chars < ' ' >, io::double_quote_escape < ',', '\"' > > in("src/superhero_data.csv")
    in.read_header(io::ignore_extra_column, "page_id", "name", "urlslug",
	"ID", "ALIGN", "EYE", "HAIR", "SEX", "GSM", "ALIVE", "APPEARANCES",
	"FIRST APPEARANCE", "Year");

    /* Reads in the file */
    while(in.read_row(page_id, name, urlslug, id, alignment, eye_colorStr, 
	hair_colorStr, sexStr, gsm, aliveStr, appearance, 
	first_appearance, year)) {

	/* Parsing strings into it's needed data type */
	eye_color = eye_colorStr[0];
	hair_color = hair_colorStr[0];
	sex = sexStr[0];

	// L = Living, D = Deceased
	if(aliveStr[0] == 'L')
	    alive = true;

	else // (aliveStr[0] == 'D')
	    alive = false;

	/* Inserts parameters into the object */
	superhero.setPgID(page_ID);
	superhero.setName(name);
	superhero.setUrl(urlslug);
	superhero.setID(id);
	superhero.setAlign(alignment);
	superhero.setEye(eye_color);
	superhero.setHair(hair_color);
	superhero.setSex(sex);
	superhero.setGSM(gsm);
	superhero.setAlive(alive);
	superhero.setAppear(appearance);
	superhero.setFirst(first_appearance);
	superhero.setYeat(year);

	/* Inserts object into the hash table */


    }

    /* Writes to the new file. */
    // (1) http://www.cplusplus.com/reference/fstream/ofstream/
    std::ofstream output("RESULTS.md");

    // Outputs the total number of collisions that occured.
    output << "The total number of collisions that occured is: " << totalCollisions << std::endl;

    /* End of program reached */
    output.close();
    std::cout << "\n\n\n" < std::endl;
    return 0;

}
