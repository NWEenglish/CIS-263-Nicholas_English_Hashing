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


class superhero {

    public:

	/* Default Constructor */
	superhero();

	/* Actual Constructor */
	superhero(int page_id, std::string name, std::string urlslug,
	    std::string id, sttd::string alignment, char eye_color,
	    char hair_color, char sex, std::string gsm, bool alive,
	    int appearences, std::string first_appearance, int year);

	/** Setters */
	// (1) http://www.zeuscmd.com/tutorials/cplusplus/50-GettersAndSetters.php
	// Set name
	void setName(std::string n) { name = n; }

	// Set id
	void setID(std::string i) { id = i; }

	// Set urlslug
	void setUrl(std::string u) { urlslug = u; }

	// Set page_id
	void setPgID(int i) {page_id = i;}

	// Set alignment
	void setAlign(int a) {alignment = a;}

	// Set eye_color
	void setEye(char e) {eye_color = e;}

	// Set hair_color
	void setHair(char h) {hair_color = h;}

	// Set sex
	void setSex(char s) {sex = s;}

	// Set gsm
	void setGSM(std::string g) {gsm = g;}

	// Set alive
	void setAlive(bool a) {alive = a;}

	// Set appearances
	void setAppear(int a) {appearance = a;}

	// Set first_appearance
	void setFirst(std::string f) {first_appearance = f;}

	// Set year
	void setYear(int y) {year = y;}

	/** Getters */
	// Only need to get two items later, so only writing two.
	
	// Gets name
	std::string getName() const {return name;}

	// Gets page_id
	int getPgID() const {return page_id;}

    /*****************************************************************/

    private:

	/** These variables hold data brought in by the constructor */
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
