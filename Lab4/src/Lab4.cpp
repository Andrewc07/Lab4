//============================================================================
// Name        : Lab4.cpp
// Author      : Nico Arezza, Andrew Christie, Daniel Gottfried
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

class Patient{
	string givenname;
	string surname;
	int age;
	char bloodtype[3];
	char gender;
public:
	Patient(string, string, int, char[], char);
	void show();
};


Patient::Patient(string firstname, string lastname, int age1, char btype[], char gender1)
{
		givenname= firstname;
		surname= lastname;
		age= age1;
		strcpy(bloodtype,btype);
		gender= gender1;
}

void Patient:: show(){
	cout<<"First Name: "<<givenname<<endl;
	cout<<"Last Name: "<<surname<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"Blood Type: "<<bloodtype<<endl;
	cout<<"Gender: "<<gender<<endl;
}

int main(void)
{
	Patient x("Andrew", "Christie", 79, "UNKnOWN", 'F');
	x.show();
	return(0);

}

