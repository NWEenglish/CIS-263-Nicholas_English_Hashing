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

	/** Setters */
	// (1) http://www.zeuscmd.com/tutorials/cplusplus/50-GettersAndSetters.php
	// (2) https://stackoverflow.com/questions/14517546/how-can-a-c-header-file-include-implementation

	// Set name
	void setName(std::string n);

	// Set id
	void setID(std::string i);

	// Set urlslug
	void setUrl(std::string u);

	// Set page_id
	void setPgID(int p);

	// Set alignment
	void setAlign(int a);

	// Set eye_color
	void setEye(char e);

	// Set hair_color
	void setHair(char h);

	// Set sex
	void setSex(char s);

	// Set gsm
	void setGSM(std::string g);

	// Set alive
	void setAlive(bool a);

	// Set appearances
	void setAppear(int a);

	// Set first_appearance
	void setFirst(std::string f);

	// Set year
	void setYear(int y);

	/** Getters */
	// Only need to get two items later, so only writing two.
	
	// Gets name
	std::string getName() const;

	// Gets page_id
	int getPgID() const;

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
