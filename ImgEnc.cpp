#include "ImgEnc.h"

CImgEnc::CImgEnc()
{
}

CImgEnc::~CImgEnc() 
{
}

cv::Mat CImgEnc::Encoding(cv::Mat image)
{
	cv::Mat yuv420 ;

	if( !image.empty() )
	{
		cv::cvtColor(image, yuv420, cv::COLOR_BGR2YUV_I420 ) ;
	}

	return yuv420 ;
}


