/*********************************************************************
* This file provides the implementation of the superhero.h file
* (located in the include folder).
*
* @author Nicholas English
* @date 3/21/201
* @version 1.0
*********************************************************************/

#include "superhero.h"
#include <string>

/** Implementation of superhero.h */
// (1) https://stackoverflow.com/questions/14517546/how-can-a-c-header-file-include-implementation
// (2) https://msdn.microsoft.com/en-us/library/07x6b05d.aspx

/* Calls the constructor for a Superhero object */
Superhero::Superhero(){}

/* Getters Implementation */
std::string Superhero::getName() const {return name;}

int Superhero::getPgID() const {return page_id;}

/* Setters Implementation */
void Superhero::setPgID(int p) {page_id = p;}

void Superhero::setName(std::string n) {name = n;}

void Superhero::setUrl(std::string u) {urlslug = u;}

void Superhero::setID(std::string i) {id = i;}

void Superhero::setAlign(std::string a) {alignment = a;}

void Superhero::setEye(char e) {eye_color = e;}

void Superhero::setHair(char h) {hair_color = h;}

void Superhero::setSex(char s) {sex = s;}

void Superhero::setGSM(std::string g) {gsm = g;}

void Superhero::setAlive(bool a) {alive = a;}

void Superhero::setAppear(int a) {appearances = a;}

void Superhero::setFirst(std::string f) {first_appearance = f;}

void Superhero::setYear(int y) {year = y;}
