#include <iostream>
using namespace std;

class Point{
public:
    void setPoint(float x=0,float y=0){
      this->x=x;
      this->y=y;
    }
    float getX() const{return x;}
    float getY() const{return y;}
    void setXY(float newX,float newY){
        x=newX;
        y=newY;
    }

private:
    float x;
    float y;
};

class Rectangle:public Point{
public:
    void setRectangle(float x,float y,float width,float length){
        setPoint(x,y);
        this ->width=width;
        this ->length=length;
    }
    float getW() const{return width;}
    float getL() const{return length;}
    float perimeter() const{return (width+length)*2;}
    float area() const{return width*length;}
private:
    float length;
    float width;
};

int main(){
    Rectangle rect;
    float a,b,c,d;
    cout<<"请依次输入x,y,宽,长值："<<endl;
    cin>>a>>b>>c>>d;
    rect.setRectangle(a,b,c,d);
    cout<<"(x,y,width,length):"<<rect.getX()<<","<<rect.getY()<<","<<rect.getW()<<","<<rect.getL()<<endl;
    cout<<"请更改x,y值:"<<endl;
    cin>>a>>b;
    rect.setXY(a,b);
    cout<<"(x,y,width,length):"<<rect.getX()<<","<<rect.getY()<<","<<rect.getW()<<","<<rect.getL()<<endl;
    cout<<"矩形周长："<<rect.perimeter()<<endl;
    cout<<"矩形面积："<<rect.area()<<endl;
return 0;
}