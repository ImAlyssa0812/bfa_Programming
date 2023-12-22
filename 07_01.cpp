#include <opencv2/highgui/highgui.hpp>
using namespace cv;

int main()
{
    // 加载并显示一张图像
    Mat image = imread("image.jpg");
    while (true)
    {
        imshow("Image", image);
        if (waitKey(1) == 27)
        {
            destroyAllWindows();
            break;
        }
    }
    // 加载一个视频
    VideoCapture video("video.mp4");
    Mat frame;
    while (true)
    {
        video >> frame;
        if (frame.empty())
        {
            video.set(CAP_PROP_POS_FRAMES, 0);
            continue;
        }
        imshow("Video", frame);
        if (waitKey(1) == 27)
        {
            destroyAllWindows();
            break;
        }
    }

    // 开启计算机摄像头捕获视频
    VideoCapture camera(0);
    while (true)
    {
        camera >> frame;
        imshow("Camera", frame);
        if (waitKey(1) == 27)
        {
            break;
        }
    }
    return 0;
}
