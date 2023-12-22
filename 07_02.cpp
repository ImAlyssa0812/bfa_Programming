#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;

int main()
{
    // 加载并显示一张图像
    Mat image = imread("image.jpg");
    // 转化为灰度图
    Mat grayImage;
    cvtColor(image, grayImage, COLOR_BGR2GRAY);

    // 将灰度图二值化
    Mat binaryImage;
    threshold(grayImage, binaryImage, 128, 255, THRESH_BINARY);

    // 将灰度图高斯模糊处理
    Mat blurredImage;
    GaussianBlur(grayImage, blurredImage, Size(5, 5), 0);

    while (true)
    {
        // 显示图片
        imshow("original image", image);
        imshow("binary image", binaryImage);
        imshow("blurred image", blurredImage);
        if (waitKey(1) == 27) // 按Esc退出
        {
            destroyAllWindows();
            break;
        }
    }
    return 0;
}