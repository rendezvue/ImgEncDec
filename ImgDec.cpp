#include "ImgDec.h"

CImgDec::CImgDec()
{
}

CImgDec::~CImgDec() 
{
}

cv::Mat CImgDec::Decoding(cv::Mat image, const bool display)
{
	cv::Mat rgb888 ;

	if( !image.empty() )
	{
        cv::cvtColor(image, rgb888, cv::COLOR_YUV2RGB_I420  ) ;
	}

	if( display && !rgb888.empty() )
	{
		cv::imshow("decoding", rgb888) ;
		cv::waitKey(0) ;
	}

	return rgb888 ;
}

