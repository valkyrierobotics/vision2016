#include "filters/gaussianBlur.hpp"

void gaussianBlur(cv::Mat &img, int blur_ksize, int sigmaX, int sigmaY)
{
	if (((blur_ksize % 2) == 0) && (blur_ksize > 0)) // Kernel size must be positive and odd
		blur_ksize++;

	cv::GaussianBlur(img, img, cv::Size(blur_ksize, blur_ksize), sigmaX, sigmaY, cv::BORDER_DEFAULT);
}
