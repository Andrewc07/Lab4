#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <ctime>
#include "imaging.h"


using namespace std;


/***********************IMAGING FUNCTIONS***************************/

imaging :: imaging(){testtaken=0;}

string imaging :: writecomment(){

	string line;
	string word;

	cout<<"Type in the desire comments and when finished enter a return then type 'done'\n\n";

	while(word!="done")
	{
		getline (cin, word);
		if(word=="done")break;
		//cout<< word<<endl; //test to ensure comment is completely taken
		line.append(word);
		line.append("\n");
	}
	return line;
}


/***********************MRI FUNCTIONS***************************/

void MRI::addcomment(){
	string temp;
	temp= writecomment();
	comment.append(temp);
	time_t timer;
	struct tm * timeinfo;
	time(&timer);
	timeinfo= localtime(&timer);
	comment.append(asctime(timeinfo));
	comment.append("____________________________________________");
	comment.append("\n\n");
}

void MRI::show()
{
	if(testtaken==0){
		cout<<"Test not yet taken"<<endl;
		cout<<comment<<endl;
	}
	else cout<<comment<<endl;
}

void MRI :: taketest(){
	testtaken=1;

	//additionally add data through scan of user input or FILE Input Output (FILE I/O)
	//decision based on data scanning are based on the user of the classes
}

/***********************CT FUNCTIONS***************************/

void CT::addcomment(){
	string temp;
	temp= writecomment();
	comment.append(temp);
	time_t timer;
	struct tm * timeinfo;
	time(&timer);
	timeinfo= localtime(&timer);
	comment.append(asctime(timeinfo));
	comment.append("____________________________________________");
	comment.append("\n\n");
}

void CT::show()
{
	if(testtaken==0){
		cout<<"\n\nNo image scans or data were inputted not yet taken"<<endl;
		cout<<comment<<endl;
	}
	else cout<<comment<<endl;
	//in addition to comment user can decide what variables to display in table format
}

void CT :: taketest(){
	testtaken=1;

	//additionally add data through scan of user input or FILE Input Output (FILE I/O)
	//decision based on data scanning are based on the user of the classes
}

/***********************XRAY FUNCTIONS***************************/

void XRAY::addcomment(){
	string temp;
	temp= writecomment();
	comment.append(temp);
	time_t timer;
	struct tm * timeinfo;
	time(&timer);
	timeinfo= localtime(&timer);
	comment.append(asctime(timeinfo));
	comment.append("____________________________________________");
	comment.append("\n\n");
}

void XRAY::show()
{
	if(testtaken==0){
		cout<<"Test not yet taken"<<endl;
		cout<<comment<<endl;
	}
	else cout<<comment<<endl;
	//in addition to comment user can decide what variables to display in table format
}

void XRAY :: taketest(){
	testtaken=1;

	//additionally add data through scan of user input or FILE Input Output (FILE I/O)
	//decision based on data scanning are based on the user of the classes
}