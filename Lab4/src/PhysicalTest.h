#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>


using namespace std;



class PhysicalTest
{
protected:
	string comment;
	bool normalvalues; // 0 not normal.... 1 normal
	bool testtaken; // 0 if it hasn't been and a 1 if it has
public:
	PhysicalTest();
	string writecomment();
};

string PhysicalTest::writecomment(){

        string line;
        string word;

        cout<<"Type in the desire comments and when finished enter a return then type 'done'\n";

        while(word!="done")
		{
                getline (cin, word);
				if(word=="done")break;
                line.append(word);
				line.append("\n");
        }
        return line;
}

PhysicalTest::PhysicalTest(){
	testtaken=0;
}

class Urinalysis: public PhysicalTest
{
protected:
	double UrinaryCalcium;
	double Sodium;
public:
	void taketest();
	void show();
	void checkhealthy(); 
	void addcomment();
};

void Urinalysis::addcomment(){
	string temp;
	temp= writecomment();
	comment.append(temp);
	time_t timer;
	struct tm * timeinfo;
	time(&timer);
	timeinfo= localtime(&timer);
	comment.append(asctime(timeinfo));
}

void Urinalysis::taketest()
{
	
}

void Urinalysis::checkhealthy()
{
	if(Sodium>300){
		cout<<"Sodium levels are high"<<endl;
		normalvalues=0;
	}
	else if(Sodium<150){
		cout<<"Sodium levels are low"<<endl;
		normalvalues=0;
	}
	else if(Sodium<300 && Sodium>150){
		cout<<"Sodium levels are normal"<<endl;
		normalvalues=1;
	}

	if(UrinaryCalcium>20){
		cout<<"Urinary Calcium levels are high"<<endl;
		normalvalues=0;
	}
	else if(UrinaryCalcium<15){
		cout<<"Urinary Calcium levels are low"<<endl;
		normalvalues=0;
	}
	else if(UrinaryCalcium<20 && UrinaryCalcium>15){
		cout<<"Urinary Calcium levels are normal"<<endl;
		normalvalues=1;
	}
}



void Urinalysis::show()
{
	if(testtaken==0){
		cout<<"Test not yet taken"<<endl;
		cout<<comment<<endl;
	}
	else if(testtaken==1){
	cout<<UrinaryCalcium<<" mmol/24hours"<<endl<<Sodium<<" mmol/24hours"<<endl<<comment<<endl;
	}
}

class Vitals: public PhysicalTest
{
protected:
	int pulse;
	int respiratory;
public:
	void taketest();
	void show();
	void checkhealthy();
	void addcomment();
};

void Vitals::addcomment(){
	string temp;
	temp= writecomment();
	comment.append(temp);
	time_t timer;
	struct tm * timeinfo;
	time(&timer);
	timeinfo= localtime(&timer);
	comment.append(asctime(timeinfo));
}
void Vitals::taketest()
{
	
}

void Vitals::checkhealthy()
{
	if(pulse<60){
		cout<<"Lower than normal heart rate"<<endl;
		normalvalues=0;
	}
	else if(pulse>120){
		cout<<"Higher than normal heart rate"<<endl;
		normalvalues=0;
	}
	else if(pulse<120 && pulse>60){
		cout<<"Normal heart rate"<<endl;
		normalvalues=1;
	}

	if(respiratory<12){
		cout<<"Lower than normal respirations per minute"<<endl;
		normalvalues=0;
	}
	else if(respiratory>20){
		cout<<"Higher than normal respirations per minute"<<endl;
		normalvalues=0;
	}
	else if(respiratory<20 && pulse>12){
		cout<<"Normal respirations per minute"<<endl;
		normalvalues=1;
	}
}

void Vitals::show()
{
	if(testtaken==0){
		cout<<"Test not yet taken"<<endl;
	}
	else if(testtaken==1){
	cout<<pulse<<" beats per minute"<<endl<<respiratory<<" breaths per minute"<<endl<<endl;
	}
}

class BloodPressure: public PhysicalTest
{
protected:
	int SystolicPressure;
	int DiastolicPressure;
public:
	void taketest();
	void show();
	void checkhealthy();
	void addcomment();
};	

void BloodPressure::show(){
	if(testtaken==0){
		cout<<"Test not yet taken"<<endl;
	}
	else if(testtaken==1){
	cout<<SystolicPressure<<"/"<<DiastolicPressure<<endl;
	}
}

void BloodPressure::taketest()
{

}

void BloodPressure::checkhealthy(){
	if(SystolicPressure<90 && DiastolicPressure<60){
		cout<<"Hypotension"<<endl;
		normalvalues=0;
	}
	if(90<SystolicPressure<119 && 60<DiastolicPressure<79){
		cout<<"Desired"<<endl;
		normalvalues=1;
	}
	if(120 <SystolicPressure<139 && 80<DiastolicPressure<89){
		cout<<"Prehypertension"<<endl;
		normalvalues=0;
	}
	if(140<SystolicPressure<159 && 90<DiastolicPressure<99){
		cout<<"Stage 1 Hypertension"<<endl;
		normalvalues=0;
	}
	if(160<SystolicPressure<179 && 100<DiastolicPressure<109){
		cout<<"Stage 2 Hypertension"<<endl;
		normalvalues=0;
	}
	if(SystolicPressure>180 && DiastolicPressure>110){
		cout<<"Hypertensive Emergency"<<endl;
		normalvalues=0;
	}
}


void BloodPressure::addcomment(){
	string temp;
	temp= writecomment();
	comment.append(temp);
	time_t timer;
	struct tm * timeinfo;
	time(&timer);
	timeinfo= localtime(&timer);
	comment.append(asctime(timeinfo));
}

