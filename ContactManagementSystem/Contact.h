#pragma once
#include <string>
#include <iostream>
#include "Name.h"
#include "Address.h"
using namespace std;

#ifndef CONTACT_H
#define CONTACT_H
class Contact {
private:
	Name name;
	Address address;
	string phone;
	int identifier;
	void setIdentifier();
public:
	Contact();
	Contact(string last, string first, string street, string state, string zip, string phone);
	Contact(const Contact&);
	string getName();
	string getAddress();
	string getPhone();
	int getIdentifier();
	void setName(string last, string first);
	void setAddress(string street, string state, string zip);
	friend ostream& operator<<(ostream& out, const Contact& rhs);
	friend istream& operator>>(istream& in, Contact& rhs);
};
#endif // !CONTACT_H

