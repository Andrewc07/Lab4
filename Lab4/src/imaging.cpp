#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include "imaging.h"


using namespace std;


/***********************IMAGING FUNCTIONS***************************/

imaging :: imaging(){
	testtaken=0;
}

string imaging :: writecomment(){

	string line;
	string word;

	cout<<"Type in the desire comments and when finished enter a return then type 'done'\n";

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



void imaging :: commentPrint(){
	int i;
	fstream myfile;
	string temp;

	myfile.open("imaging_comments.txt");

	for(i=0;i<4;i++){
	getline (myfile, temp);
	cout<< temp;
	}

	myfile.close();
}


void MRI::addcomment(){
	string temp;
	temp= writecomment();
	comment.append(temp);
	time_t timer;
	struct tm * timeinfo;
	time(&timer);
	timeinfo= localtime(&timer);
	comment.append(asctime(timeinfo));
}

