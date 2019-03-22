#pragma once

#include "opencv2/opencv.hpp"

class CImgDec
{
	CImgDec() ;
	~CImgDec() ;

public:
	cv::Mat Decoding(cv::Mat image, const bool display=false) ;
} ;

