#include <iostream>
#include <string>
#include "bloodTests.hpp"

using namespace std;

hormoneLevels::hormoneLevels(){

    testosterone = NULL;
    cortisol = NULL;
    dhea = NULL;

}

void hormoneLevels::analysis(bool gender){

    if (gender==1){ //male

        if (testosterone==NULL) cout << "The patient has not had their testosterone levels tested." << endl;
        else if (testosterone>26.5) cout << "The patient's testosterone levels exceed the optimal range." << endl;
        else if (testosterone<15) cout << "The patient's testosterone levels fall below the optimal range." << endl;
        else if (testosterone!=NULL&&testosterone>=15&&testosterone<=26.5) cout << "The patient's testosterone levels are in the optimal range." << endl;

        if (dhea==NULL) cout << "The patient has not had their DHEA levels tested." << endl;
        else if (dhea>500) cout << "The patient's DHEA levels exceed the optimal range." << endl;
        else if (dhea<400) cout << "The patient's DHEA levels fall below the optimal range." << endl;
        else if (dhea!=NULL&&dhea>=400&&dhea<=500) cout << "The patient's DHEA levels are in the optimal range." << endl;

    }else if (gender==0){ //female

        if (testosterone==NULL) cout << "The patient has not had their testosterone levels tested." << endl;
        else if (testosterone>2.2) cout << "The patient's testosterone levels exceed the optimal range." << endl;
        else if (testosterone<1.4) cout << "The patient's testosterone levels fall below the optimal range." << endl;
        else if (testosterone!=NULL&&testosterone>=1.4&&testosterone<=2.2) cout << "The patient's testosterone levels are in the optimal range." << endl;

        if (dhea==NULL) cout << "The patient has not had their DHEA levels tested." << endl;
        else if (dhea>430) cout << "The patient's DHEA levels exceed the optimal range." << endl;
        else if (dhea<350) cout << "The patient's DHEA levels fall below the optimal range." << endl;
        else if (dhea!=NULL&&dhea>=350&&dhea<=430) cout << "The patient's DHEA levels are in the optimal range." << endl;
    }

    if (cortisol==NULL) cout << "The patient has not had their cortisol levels tested." << endl;
    else if (cortisol>441) cout << "The patient's cortisol levels exceed the optimal range." << endl;
    else if (cortisol<83) cout << "The patient's cortisol levels fall below the optimal range." << endl;
    else if (cortisol!=NULL&&cortisol<=441&&cortisol>=83) cout << "The patient's cortisol levels are in the optimal range." << endl;

}

bloodSugar::bloodSugar(){

    glucose = NULL;
    insulin = NULL;

}

void bloodSugar::analysis(){

    if (glucose==NULL) cout << "The patient has not had their blood glucose levels tested." << endl;
    else if (glucose>100) cout << "The patient's blood glucose levels exceed the optimal range." << endl;
    else if (glucose<70) cout << "The patient's blood glucose levels fall below the optimal range." << endl;
    else if (glucose!=NULL&&glucose>=70&&glucose<=100) cout << "The patient's glucose levels are in the optimal range" << endl;

    if (insulin==NULL) cout << "The patient has not had their insulin levels tested." << endl;
    else if (insulin>79) cout << "The patient's insulin levels exceed the optimal range." << endl;
    else if (insulin<57) cout << "The patient's insulin levels fall below the optimal range." << endl;
    else if (insulin!=NULL&&insulin>=57&&insulin<=79) cout << "The patient's insulin are in the optimal range" << endl;

}

sti::sti(){

    hiv = NULL;
    hepatitisB = NULL;
    hsv2 = NULL;

}

void sti::analysis(){

    if (hiv=NULL) cout << "The patient hasn't been tested for HIV antibodies." << endl;
    else if (hiv==1) cout << "The patient's blood tested positive for HIV." << endl;
    else if (hiv==0) cout << "The patient's blood tested negative for HIV." << endl;

    if (hepatitisB=NULL) cout << "The patient hasn't been tested for Hepatitis B antibodies." << endl;
    else if (hepatitisB==1) cout << "The patient's blood tested positive for Hepatitis B" << endl;
    else if (hepatitisB==0) cout << "The patient's blood tested negative for Hepatitis B" << endl;

    if (hsv2=NULL) cout << "The patient hasn't been tested for Herpes Simplex Virus 2 antibodies." << endl;
    else if (hsv2==1) cout << "The patient's blood tested positive for Herpes Simplex Virus 2." << endl;
    else if (hsv2==0) cout << "The patient's blood tested negative for Herpes Simplex Virus 2." << endl;

}
