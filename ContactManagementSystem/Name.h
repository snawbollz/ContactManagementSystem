#pragma once
#include <string>
using namespace std;

#ifndef NAME_H
#define NAME_H
class Name {
private:
	string f_name;
	string l_name;
public:
	Name();
	Name(string last, string first);
	void setLName(string last);
	string getLName()const;
	void setFName(string first);
	string getFName()const;
	string getFullName()const;
	friend ostream& operator<< (ostream& o, const Name& rhs);
	friend istream& operator>> (istream& in, Name& rhs);
};
#endif