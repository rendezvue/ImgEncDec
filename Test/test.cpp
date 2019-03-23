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
	cv::Mat rgb888 = cls_image_decoder.Decoding(yuv420) ;
	
	cv::imshow("rgb", rgb) ;
	cv::imshow("yuv420", yuv420) ;
	cv::imshow("rgb888", rgb888) ;

	printf("rgb mem size = %d\n", (unsigned int)(rgb.total() * rgb.elemSize())) ;
	printf("yuv420 mem size = %d\n", (unsigned int)(yuv420.total() * yuv420.elemSize())) ;
	printf("rgb888 mem size = %d\n", (unsigned int)(rgb888.total() * rgb888.elemSize())) ;
	
	cv::waitKey(0) ;
	
	return 0 ;
}
