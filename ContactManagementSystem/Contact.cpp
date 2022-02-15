#include "Contact.h"
#include <iostream>
#include <string>
using namespace std;
//Brian Macias
//This is my own work.

int totalCt = 0;

void Contact::setIdentifier()
{
	totalCt++;
	identifier = totalCt;
}

Contact::Contact()
{
	this->name = Name();
	this->address = Address();
	this->phone = "xxx-xxx-xxxx";
}

Contact::Contact(string first, string last, string street, string state, string zip, string phone)
{
	this->name.setFName(first);
	this->name.setLName(last);
	this->address.setStreet(street);
	this->address.setState(state);
	this->address.setZip(zip);
	this->phone;
}

Contact::Contact(const Contact& con)
{
	name.setLName(con.name.getLName());
	name.setFName(con.name.getFName());
	address.setStreet(con.address.getStreet());
	address.setState(con.address.getState());
	address.setZip(con.address.getZip());
	phone = getPhone();
}

string Contact::getName()
{
	return string();
}

string Contact::getAddress()
{
	return string();
}

string Contact::getPhone()
{
	return this->phone;
}

int Contact::getIdentifier()
{
	return this->identifier;
}

void Contact::setName(string L, string F)
{
	Name::setFName);
	Name::setLName;
}

void Contact::setAddress(string, string, string)
{
	Address::setStreet;
	Address::setState;
	Address::setZip;
}

ostream& operator<<(ostream& out, const Contact& rhs)
{
	out << rhs.name.getFName() << "\n" << rhs.name.getLName() << "\n";
	out << rhs.address.getStreet() << "\n" << rhs.address.getState() << "\n" << rhs.address.getZip() << "\n";
	out << rhs.phone;

	return out;
}

istream& operator>>(istream &in, Contact &rhs)
{
	in >> rhs.name;
	in >> rhs.address;
	getline(in, rhs.phone);
	rhs.getIdentifier();

	return in;
}