#ifndef CV2QT_H
#define CV2QT_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core_c.h>
#include <opencv2/core/mat.hpp>
#include <opencv2/core/types_c.h>
#include <opencv2/highgui/highgui_c.h>
#include <opencv2/imgproc/imgproc_c.h>
#include <opencv2/opencv.hpp>
#include <opencv2/opencv_modules.hpp>
#include <QImage>


    QImage Mat2QImage(const cv::Mat3b &src);
    QImage Mat2QImage(const cv::Mat_<double> &src);

#endif // CV2QT_H
