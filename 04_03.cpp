#include<iostream>
using namespace std;
//计算x的n次方的函数
double f(double x,int n){
    double y=1.0;
    while(n--)
    y*=x;
    return y;
}
int main(){
   double a,b;
   cout<<"请输入两个不超过一百位的数："<<endl;
   cin>>a>>b;
   int x=0;
   int k=x+1;
   while(b>=f(a,x)&&b>=f(a,k))
   {x++;}
   cout<<x-1<<endl;
return 0;
}