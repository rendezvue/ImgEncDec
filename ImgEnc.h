#pragma once

#include "opencv2/opencv.hpp"

class CImgEnc
{
	CImgEnc() ;
	~CImgEnc() ;

public:
	cv::Mat Encoding(cv::Mat image) ;	
} ;


