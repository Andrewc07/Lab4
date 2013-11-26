#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include "imaging.h"


using namespace std;

void imaging :: commentImaging(){


	string word;
	fstream writer;

	writer.open ("imaging_comments.txt",ios::app);

	cout<<"Type in the desire comments and when finished enter a return then type 'done'\n";

	while(word!="done"){

		getline (cin, word);
//		cout<< word<<endl; //test to ensure comment is completely taken
		comment.append(word);
	}
	writer << comment;

	writer.close();
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


