#pragma once

#include "opencv2/opencv.hpp"

class CImgDec
{
public:
	CImgDec() ;
	~CImgDec() ;

	cv::Mat Decoding(cv::Mat image, const bool display=false) ;
} ;

