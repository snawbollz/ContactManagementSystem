#include "Name.h"
#include <iostream>
#include <string>
using namespace std;

Name::Name()
{
	f_name = " ";
	l_name = " ";
}

Name::Name(string L, string F)
{
	this->l_name = L;
	this->f_name = F;
}

void Name::setLName(string l_name)
{
	string LName = l_name;
}

string Name::getLName() const
{
	return this->l_name;
}

void Name::setFName(string f_name)
{
	string FName = f_name;
}

string Name::getFName() const
{
	return this->f_name;
}

string Name::getFullName() const
{
	string lastName = getLName();
	string firstName = getFName();

	string fullName = lastName + ", " + firstName;
	return fullName;
}

ostream& operator<<(ostream& o, Name& rhs)
{
	o << rhs.getFullName();
	return o;
}

istream& operator>>(istream &in, Name &rhs)
{
	in >> rhs.f_name;
	in >> rhs.l_name;

	return in;
}