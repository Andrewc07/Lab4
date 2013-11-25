#ifndef BLOODTESTS_H_INCLUDED
#define BLOODTESTS_H_INCLUDED

#include <iostream>
#include <string>

class bloodTest{
protected:
    string testDate;
    string userComment;
    bool patientGender;
public:
    bloodTest();
    void showDate();
};

class hormoneLevels : public bloodTest{
    double testosterone; //6.6-26.5 pg/mL men (15-26.5), 0-2.2 pg/mL women (1.4-2.2)
    double cortisol; //83-441 mol/L
    double dhea; //280-640 microgram/dL men (400-500), 65-380 microgram/dL women (350-430)
public:
    hormoneLevels();
    void storeResults();
    void testosteroneAnalysis();
    void cortisolAnalysis();
    void dheaAnalysis();
};

class bloodSugar: public bloodTest{
    double glucose; //70-100 mg/dL
    double insulin; //57-79 pmol/L
public:
    bloodSugar();
    void storeResults();
    void glucoseAnalysis();
    void insulinAnalysis();
};

class sti: public bloodTest{
    bool hiv;
    bool hepatitisB;
    bool hsv2;
public:
    sti();
    void storeResults();
    void hivAnalysis();
    void hepatitisBAnalysis();
    void hsv2Analysis();
};

#endif // BLOODTESTS_H_INCLUDED

//http://en.wikipedia.org/wiki/Blood_sugar#High_blood_sugar
//http://www.webmd.com/a-to-z-guides/cortisol-14668?page=2
//http://www.lef.org/magazine/mag2006/may2006_report_blood_01.htm
