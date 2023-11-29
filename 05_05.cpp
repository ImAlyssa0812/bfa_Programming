#include<iostream>
#include<cmath>
using namespace std;
const float PI=3.14159;
class Shape{
public:
    Shape(float a){
        this->a=a;
    }
    virtual float area(){return 0;}
    virtual float perimeter(){return 0;}
protected:
    float a;
};

class Rectangle:public Shape{
public:
    Rectangle(float a,float b):Shape(a){this->b=b;}
    virtual float area(){return a*b;}
    virtual float perimeter(){return 2*(a+b);}
private:
    float b;
};

class Triangle:public Shape{
public:
    Triangle(float a,float b,float c):Shape(a){this->b=b;this->c=c;}
    virtual float area(){ 
        float p=0.5*(a+b+c);
        return sqrt(p*(p-a)*(p-b)*(p-c));}
    virtual float perimeter(){return a+b+c;}
private:
    float b,c;
};

class Circle:public Shape{
public:
    Circle(float a):Shape(a){}
    virtual float area(){return PI*a*a;}
    virtual float perimeter(){return 2*PI*a;}
};

int main(){
int i=1;
while(i==1){
cout<<"矩形（1）/三角形（2）/圆形（3）："<<endl;
int choice;
cin>>choice;
if(choice==1){
    cout<<"请输入矩形长和宽："<<endl;
    float a,b;
    cin>>a>>b;
    Rectangle rect(a,b);
    cout<<"周长:"<<rect.perimeter()<<","<<"面积："<<rect.area()<<endl;
}
else if(choice==2){
    cout<<"请输入三角形三边长度："<<endl;
    float a,b,c;
    cin>>a>>b>>c;
    Triangle ti(a,b,c);
    cout<<"周长:"<<ti.perimeter()<<","<<"面积："<<ti.area()<<endl;
}
else if(choice==3){
    cout<<"请输入圆形半径："<<endl;
    float a;
    cin>>a;
    Circle c(a);
    cout<<"周长:"<<c.perimeter()<<","<<"面积："<<c.area()<<endl;
}
else
cout<<"请输入有效数字"<<endl;
cout<<"是否继续（是——1/否——0）；"<<endl;
cin>>i;
}
return 0;
}