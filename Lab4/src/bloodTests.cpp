#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "bloodTests.hpp"

using namespace std;

bloodTest::bloodTest(){

    testPerformed = 0;

}

string bloodTest::commentBloodTest(){

        string line;
        string word;

        cout<<"Type in the desired comments and when finished enter a return then type 'done'" << endl;

        while (word!="done"){
            getline(cin, word);
            if(word=="done")break;
            line.append(word);
            line.append("\n");
        }

        return line;
}

void hormoneLevels::storeResults(){

    testPerformed = 1;

    cout << "Is the patient a male or female? Press 1 for male or 0 for female." << endl;
    cin >> gender;
    cout << "Enter the patient's testosterone levels in pg/mL" << endl;
    cin >> testosterone;
    cout << "Enter the patient's cortisol levels in mol/L" << endl;
    cin >> cortisol;
    cout << "Enter the patient's DHEA levels in ug/dL" << endl;
    cin >> dhea;

}

void hormoneLevels::analysis(){

if (testPerformed==1){
    if (gender==1){ //male

        if (testosterone>26.5) {cout << "The patient's testosterone levels exceed the optimal range." << endl; normal = 0;}
        else if (testosterone<15) {cout << "The patient's testosterone levels fall below the optimal range." << endl; normal = 0;}
        else if (testosterone>=15&&testosterone<=26.5)
            {cout << "The patient's testosterone levels are in the optimal range." << endl; normal = 1;}

        if (dhea>500) {cout << "The patient's DHEA levels exceed the optimal range." << endl; normal = 0;}
        else if (dhea<400) {cout << "The patient's DHEA levels fall below the optimal range." << endl; normal = 0;}
        else if (dhea>=400&&dhea<=500)
            {cout << "The patient's DHEA levels are in the optimal range." << endl; normal = 1;}

    }else if (gender==0){ //female

        if (testosterone>2.2) {cout << "The patient's testosterone levels exceed the optimal range." << endl; normal = 0;}
        else if (testosterone<1.4) {cout << "The patient's testosterone levels fall below the optimal range." << endl; normal = 0;}
        else if (testosterone>=1.4&&testosterone<=2.2)
            {cout << "The patient's testosterone levels are in the optimal range." << endl; normal = 1;}

        if (dhea>430) {cout << "The patient's DHEA levels exceed the optimal range." << endl; normal = 0;}
        else if (dhea<350) {cout << "The patient's DHEA levels fall below the optimal range." << endl; normal = 0;}
        else if (dhea>=350&&dhea<=430) {cout << "The patient's DHEA levels are in the optimal range." << endl; normal = 1;}
    }

    if (cortisol>441) {cout << "The patient's cortisol levels exceed the optimal range." << endl; normal = 0;}
    else if (cortisol<83) {cout << "The patient's cortisol levels fall below the optimal range." << endl; normal = 0;}
    else if (cortisol<=441&&cortisol>=83)
        {cout << "The patient's cortisol levels are in the optimal range." << endl; normal = 1;}
    }else if (testPerformed==0){cout << "The patient has not had their hormone levels tested." << endl;}
}

void hormoneLevels::addComment(){
	string temp;
	temp= commentBloodTest();
	comment.append(temp);
	time_t timer;
	struct tm * timeinfo;
	time(&timer);
	timeinfo= localtime(&timer);
	comment.append(asctime(timeinfo));
}

void bloodSugar::storeResults(){

    testPerformed = 1;

    cout << "Enter the patient's blood glucose levels in mg/dL" << endl;
    cin >> glucose;
    cout << "Enter the patient's insulin levels in pmol/L" << endl;
    cin >> insulin;
}

void bloodSugar::analysis(){

if (testPerformed==1){

    if (glucose>100) {cout << "The patient's blood glucose levels exceed the optimal range." << endl; normal = 0;}
    else if (glucose<70) {cout << "The patient's blood glucose levels fall below the optimal range." << endl; normal = 0;}
    else if (glucose>=70&&glucose<=100)
        {cout << "The patient's glucose levels are in the optimal range" << endl; normal = 1;}

    if (insulin>79) {cout << "The patient's insulin levels exceed the optimal range." << endl; normal = 0;}
    else if (insulin<57) {cout << "The patient's insulin levels fall below the optimal range." << endl; normal = 0;}
    else if (insulin>=57&&insulin<=79)
        {cout << "The patient's insulin are in the optimal range" << endl; normal = 1;}
    }else if (testPerformed==0){cout << "The patient has not had their blood sugar levels tested." << endl;}
}

void bloodSugar::addComment(){
	string temp;
	temp= commentBloodTest();
	comment.append(temp);
	time_t timer;
	struct tm * timeinfo;
	time(&timer);
	timeinfo= localtime(&timer);
	comment.append(asctime(timeinfo));
}

void sti::storeResults(){
    char temp;

    testPerformed = 1;

    cout << "Does the patient's blood test positive for HIV antibodies? Press y or n." << endl;
    cin >> temp;
    switch(temp){
        case 'y':
        case 'Y':
            hiv = 1;
        case 'n':
        case 'N':
            hiv = 0;
    }
    cout << "Does the patient's blood test positive for Hepatitis B antibodies? Press y or n." << endl;
    cin >> temp;
    switch(temp){
        case 'y':
        case 'Y':
            hepatitisB = 1;
        case 'n':
        case 'N':
            hepatitisB = 0;
    }
    cout << "Does the patient's blood test positive for Herpes Simplex Virus 2 antibodies? Press y or n." << endl;
    cin >> temp;
    switch(temp){
        case 'y':
        case 'Y':
            hsv2 = 1;
        case 'n':
        case 'N':
            hsv2 = 0;
    }

}

void sti::analysis(){

if (testPerformed==1){

    if (hiv==1) {cout << "The patient's blood tested positive for HIV." << endl; normal = 0;}
    else if (hiv==0) {cout << "The patient's blood tested negative for HIV." << endl; normal = 1;}

    if (hepatitisB==1) {cout << "The patient's blood tested positive for Hepatitis B" << endl; normal = 0;}
    else if (hepatitisB==0) {cout << "The patient's blood tested negative for Hepatitis B" << endl; normal = 1;}

    if (hsv2==1) {cout << "The patient's blood tested positive for Herpes Simplex Virus 2." << endl; normal = 0;}
    else if (hsv2==0) {cout << "The patient's blood tested negative for Herpes Simplex Virus 2." << endl; normal = 1;}
    }else if (testPerformed==0){cout << "The patient has not been tested for sexually transmitted infections." << endl;}
}

void sti::addComment(){
	string temp;
	temp= commentBloodTest();
	comment.append(temp);
	time_t timer;
	struct tm * timeinfo;
	time(&timer);
	timeinfo= localtime(&timer);
	comment.append(asctime(timeinfo));
}
