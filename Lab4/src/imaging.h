#ifndef IMAGING_HPP_
#define IMAGING_HPP_

#include <ctime>
#include <cstring>
#include <string>

using namespace std;

class imaging {

protected:
	string user;
	string comment;
	bool testtaken;

public:

	imaging();
	string writecomment();
	void showImage(char*);
};

class MRI : public imaging {

	string MRIimage;	//store for MRI file name
	string Acquisition_Type;  //method of scanning
	string Scan_Option;  //types of scans
	int SPP; //Samples per Pixel
	float Echo_Time;
	float Repetition_Time;
	float Inversion_Time;
	float Image_Frequency;
	

public:
	//MRI(a,b,...,z) might be used to gather patient scan data info based on the design of hospital data base
	void taketest();
	void addcomment();
	void show();
};

class CT : public imaging {

	string CTimage;	//store for CT file name
	int Pixel_Representation; //number of pixels
	int Acquisition_number; //identifying the number for single gathering of data over period of resulted in this image
	float Rescale_Slope; //in the equation specified in Rescale Intercept
	float KVP; //Peak kilo voltage output of the x-ray generator used
	float Data_Collection_Diameter; //diameter in mm of the region over which data were collected
	float Exposure_Time;

public:
	//CT(a,b,...,z) might be used to gather patient scan data info based on the design of hospital data base
	void taketest();
	void addcomment();
	void show();
};

class XRAY : public imaging {

	string XRAYimage;	//store for XRAY file name
	string Image_Type;	//basic type/format of the image according to standards
	string ARMS; //Anatomic Region Modifier Sequence
	string Photometric_Interpretation; //Specifies the intended interpretation of the pixel data
	bool Lossy_Image_Compression;	//if compression was performed
	float Reference_Image_Sequence; //gives a co-ordinate of reference
	float Calibration_Image; //Indicates whether a reference object (phantom) of known size is present in the image and was used for calibration

public:
	//XRAY(a,b,...,z) might be used to gather patient scan data info based on the design of hospital data base
	void taketest();
	void addcomment();
	void show(); 
};

#endif /* IMAGING_HPP_ */
