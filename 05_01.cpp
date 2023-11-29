#include<iostream>
using namespace std;
const double PI=3.141593;
class Circle{
public:
    Circle(double R);
    Circle();
    double perimeter();
    double area();

private:
    double radius;
};
Circle::Circle(double r){
    radius=r;
}
double Circle::perimeter(){
    return 2*PI*radius;
}
double Circle::area(){
    return PI*radius*radius;
}

int main(){
    double radius;
    cout<<"请输入半径："<<endl;
    cin>>radius;

    Circle c(radius);
    cout<<"周长："<<c.perimeter()<<endl;
    cout<<"面积："<<c.area()<<endl;

return 0;
} 