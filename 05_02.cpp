#include<iostream>
using namespace std;

class Triangle{
public:
    Triangle(float A,float B,float C);
    Triangle();
    void f();
private:
    float a;
    float b;
    float c;
};

Triangle::Triangle(float A,float B,float C){
    a=A;
    b=B;
    c=C;
}

void Triangle::f(){
    if (a==b&&b==c)
    cout<<"等边三角形"<<endl;
    if ((a==b&&b!=c)||(a==c&&c!=b)||b==c&&c!=a)
    cout<<"等腰三角形"<<endl;
    else     
    cout<<"不等边三角形"<<endl;
}

int main(){
    float a;float b;float c;
    cout<<"请输入三角形边长:"<<endl;
    cin>>a>>b>>c;
    while(a+b<=c||a+c<=b||b+c<=a)//判断输入数据能否构成三角形
    {cout<<"请输入有效组合"<<endl;
    cin>>a>>b>>c;}
    Triangle T(a,b,c);
    T.f();
return 0;
}