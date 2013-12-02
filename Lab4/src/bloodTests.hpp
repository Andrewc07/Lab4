#ifndef BLOODTESTS_HPP_
#define BLOODTESTS_HPP_

#include <iostream>
#include <string>

using namespace std;

class bloodTest{
protected:
	string comment; //comment made by user
	bool normal; //1 if normal test results, 0 if abnormal test results
	bool testPerformed; //1 if test has been performed, 0 if no test has been performed
public:
	bloodTest();
	string commentBloodTest(); //appends user comment
	bool istesttaken(); //checks if blood test has been performed
};

class hormoneLevels : public bloodTest{
	bool gender; //1 if male, 0 if female
	double testosterone; //testosterone levels in pg/mL
	double cortisol; //cortisol levels in mol/L
	double dhea; //DHEA levels in ug/dL
public:
	void storeResults(); //prompts user to enter results for test
	void analysis(); //determines whether results for test are normal or abnormal
	void addComment(); //user may append a comment to the object
	void show(); //displays test results
};

class bloodSugar: public bloodTest{
	double glucose; //blood glucose levels in mg/dL
	double insulin; //insulin levels in pmol/L
public:
	void storeResults();
	void analysis();
	void addComment();
	void show();
};

class sti: public bloodTest{
	bool hiv; //1 if patient tests positive for HIV antibodies, else 0
	bool hepatitisB; //1 if patient tests positive for Hepatits B antibodies, else 0
	bool hsv2; //1 if patient tests positive for Herpes Simplex 2 antibodies, else 0
public:
	void storeResults();
	void analysis();
	void addComment();
	void show();
};

#endif // BLOODTESTS_H_INCLUDED
