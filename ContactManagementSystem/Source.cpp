//Brian Macias
//In cColaboration with Ethan Bourley, Lorenzo Menor

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Contact.h"
#include "Name.h"
#include "Address.h"
using namespace std;

void loadContacts(istream& in, vector<Contact>& lst);
void saveContacts(ostream& out, const vector<Contact>& lst);
void addContact(vector<Contact>& lst);

int main() {
	Address a;
	Name n;
	Contact c;

	ifstream fs;
	ofstream os;
	fs.open("contact.txt");
	vector<Contact>ContactList;

	loadContacts(fs, ContactList);
	addContact(ContactList);
	saveContacts(os, ContactList);
	return 0;
}

void loadContacts(istream& in, vector<Contact>& lst)
{
	string fname;
	string lname;
	string street;
	string state;
	string zip;
	string phone;

	int line = 1;
	while (!in.eof()) {
		switch (line) {
		case 1:
			getline(in, fname);
			break;
		case 2:
			getline(in, lname);
			break;
		case 3:
			getline(in, street);
			break;
		case 4:
			getline(in, state);
			break;
		case 5:
			getline(in, zip);
			break;
		case 0:
			getline(in, phone);
			break;
		}

		line++;
		line %= 6;

	}
	Contact contact(lname, fname, street, state, zip, phone);
	lst.push_back(contact);
}

void saveContacts(ostream& out, const vector<Contact>& lst)
{
	ifstream instream;
	instream.open("contact.txt");
	Contact::getName;
	Contact::getAddress;
	Contact::getPhone;
	Contact::getIdentifier;
}

void addContact(vector<Contact>& lst)
{
	Contact::setAddress;
	Contact::setName;
}