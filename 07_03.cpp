#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{
    // 加载并显示一张图像
    Mat image = imread("image.jpg");
    // 边缘
    Mat edges;
    Canny(image, edges, 100, 200);
    // 膨胀
    Mat dilatedImage;
    dilate(edges, dilatedImage, Mat());
    // 侵蚀
    Mat erodedImage;
    erode(dilatedImage, erodedImage, Mat());
    // 改变图片大小
    Mat resizedImage;
    resize(image, resizedImage, Size(), 0.5, 0.5);

    while (true)
    {
        // 显示图片
        imshow("original image", image);
        imshow("dilated image", dilatedImage);
        imshow("eroded image", erodedImage);
        imshow("resized image", resizedImage);
        if (waitKey(1) == 27) // 按Esc退出
        {
            destroyAllWindows();
            break;
        }
    }
    return 0;
}