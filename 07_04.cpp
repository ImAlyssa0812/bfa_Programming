#include <opencv2/opencv.hpp>
using namespace cv;

Mat image;
int brightness = 50;
int contrast = 50;

void updateImage()
{
    // 计算亮度和对比度的调整参数
    double alpha = contrast / 50.0;
    int beta = brightness - 50;

    // 应用亮度和对比度的调整
    Mat adjustedImage = Mat::zeros(image.size(), image.type());
    image.convertTo(adjustedImage, -1, alpha, beta);

    // 显示调整后的图像
    imshow("Adjust Image", adjustedImage);
}

void onBrightnessTrackbar(int value, void *userdata)
{
    brightness = value;
    updateImage();
}

void onContrastTrackbar(int value, void *userdata)
{
    contrast = value;
    updateImage();
}

int main()
{
    image = imread("image.jpg");

    // 创建窗口
    namedWindow("Adjust Image");

    // 创建亮度和对比度的滑动条
    createTrackbar("Brightness", "Adjust Image", &brightness, 100, onBrightnessTrackbar);
    createTrackbar("Contrast", "Adjust Image", &contrast, 100, onContrastTrackbar);
    updateImage();

    // 按Esc退出
    waitKey(0);
    return 0;
}
