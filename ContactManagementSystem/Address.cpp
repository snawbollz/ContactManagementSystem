#include "Address.h"
#include <iostream>
#include <string>
using namespace std;

Address::Address()
{
	street = " ";
	state = " ";
	zip = " ";
}

Address::Address(string str, string sta, string z)
{
	setStreet(str);
	setState(sta);
	setZip(z);
}

void Address::setStreet(string str)
{
	str = street;
}

void Address::setState(string sta)
{
	sta = state;
}

void Address::setZip(string z)
{
	z = zip;
}

string Address::getStreet() const
{
	return this->street;
}

string Address::getState() const
{
	return this->state;
}

string Address::getZip() const
{
	return this->zip;
}

ostream& operator<<(ostream& o, const Address& a)
{
	o << a.street;
	o << a.state;
	o << a.zip;

	return o;
}

istream& operator>>(istream &in, Address &a)
{
	getline(in, a.street);
	getline(in, a.state);
	getline(in, a.zip);
	return in;
}