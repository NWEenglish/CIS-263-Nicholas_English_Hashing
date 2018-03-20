/**********************************************************************
 * This program is used by the main.cpp file (loacted in the src
 * folder).
 *
 * @author Nicholas English
 * @version 1.0
 * @date 3/21/2018
 *********************************************************************/

#ifndef __H_superhero__
#define __H_superhero__


#include <string>
#include <iostream>

boolean insert(const Superhero & s);
Superhero & get(const std::string name);

class superhero {

    public:
	superhero(int page_id, std::string name, std::string urlslug,
	    std::string id, sttd::string alignment, char eye_color,
	    char hair_color, char sex, std::string gsm, bool alive,
	    int appearences, std::string first_appearance, int year);

    private:
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
	int appearances;
	std::string first_appearance;
	int year;

};

#endif // __H_superhero__
