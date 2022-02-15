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
	fs.open("contact.txt");
	vector<Contact>ContactList;

	loadContacts(fs, ContactList);
	//addContact();
	//saveContact();
	return 0;
}

void loadContacts(istream& in, vector<Contact>& lst)
{
	
	while (in) {

	}
	
}

void saveContacts(ostream& out, const vector<Contact>& lst)
{
	ifstream instream;
	instream.open("contact.txt");
}

void addContact(vector<Contact>& lst)
{
}