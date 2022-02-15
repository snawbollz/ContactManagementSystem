#pragma once
#include <string>
using namespace std;

#ifndef ADDRESS_H
#define ADDRESS_H
class Address {
private:
	string street;
	string state;
	string zip;
public:
	Address();
	Address(string street, string state, string zip);
	void setStreet(string street);
	void setState(string state);
	void setZip(string zip);
	string getStreet()const;
	string getState()const;
	string getZip()const;
	friend ostream& operator<<(ostream& o, const Address& a);
	friend istream& operator>>(istream& in, Address& a);
};
#endif // !ADDRESS_H
