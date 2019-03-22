#include <stdio.h>

#include "ImgEnc.h"
#include "ImgDec.h"

#include "opencv2/opencv.hpp"

int main(void)
{
	CImgDec cls_image_decoder ;
	CImgEnc cls_image_encoder ;
	
	printf("Image Enc <-> Dec Test\n");

	cv::Mat rgb = cv::imread("test.bmp") ;

	cv::Mat yuv420 = cls_image_encoder.Encoding(rgb);
	
	cv::imshow("rgb", rgb) ;
	cv::imshow("yuv420", yuv420) ;
	cv::waitKey(0) ;
	
	return 0 ;
}
