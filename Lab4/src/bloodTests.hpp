#ifndef BLOODTESTS_HPP_INCLUDED
#define BLOODTESTS_HPP_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class bloodTest{
protected:
    string user; //person accessing the information
    string comment; //comment made by user
    bool normal; //1 if normal test results, 0 if abnormal test results
    bool testPerformed; //0 if no test has been performed, 1 if test has been performed
public:
    bloodTest();
    string commentBloodTest();
};

class hormoneLevels : protected bloodTest{
    bool gender;
    double testosterone; //6.6-26.5 pg/mL men (15-26.5), 0-2.2 pg/mL women (1.4-2.2)
    double cortisol; //83-441 mol/L
    double dhea; //280-640 ug/dL men (400-500), 65-380 ug/dL women (350-430)
public:
    void storeResults();
    void analysis();
};

class bloodSugar: protected bloodTest{
    double glucose; //70-100 mg/dL
    double insulin; //57-79 pmol/L
public:
    void storeResults();
    void analysis();
};

class sti: protected bloodTest{
    bool hiv;
    bool hepatitisB;
    bool hsv2;
public:
    void storeResults();
    void analysis();
};

#endif // BLOODTESTS_H_INCLUDED

//http://en.wikipedia.org/wiki/Blood_sugar#High_blood_sugar
//http://www.webmd.com/a-to-z-guides/cortisol-14668?page=2
//http://www.lef.org/magazine/mag2006/may2006_report_blood_01.htm
