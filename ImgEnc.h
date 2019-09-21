#pragma once

#include "opencv2/opencv.hpp"

class CImgEnc
{
public:
	CImgEnc() ;
	~CImgEnc() ;

	cv::Mat Encoding(cv::Mat image) ;	
} ;


