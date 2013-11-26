#ifndef IMAGING_HPP_
#define IMAGING_HPP_

#include <cstring>
#include <string>

using namespace std;

class imaging {
protected:
	string user;
	string comment;

public:

void commentImaging();
void commentPrint();
void showImage(char*);
};

class MRI : protected imaging {

string MRIimage;
string Acquisition_Type;  //method of scanning
string Scan_Option;  //types of scans
float Echo_Time;
float Repetition_Time;
float Inversion_Time;
float Image_Frequency;
int SPP; //Samples per Pixel

public:
void taketest();
void addcomment();
void show();

};

class CT : protected imaging {

string CTimage;
int Pixel_Representation; //number of pixels
float Rescale_Slope; //in the equation specified in Rescale Intercept
float KVP; //Peak kilo voltage output of the x-ray generator used
int Acquisition_number; //identifying the number for single gathering of data over period of resulted in this image
float Data_Collection_Diameter; //diameter in mm of the region over which data were collected
float Exposure_Time;
};

class XRAY : protected imaging {

string XRAYimage;
string Image_Type;
string ARMS; //Anatomic Region Modifier Sequence
bool Lossy_Image_Compression;
string Photometric_Interpretation; //Specifies the intended interpretation of the pixel data
float Reference_Image_Sequence; //gives a co-ordinate of reference
float Calibration_Image; //Indicates whether a reference object (phantom) of known size is present in the image and was used for calibration
};

#endif /* IMAGING_HPP_ */
