#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a=0,b=0,c=0;
    double x1,x2;
    cout<<"请输入三个系数"<<endl;
    cin>>a>>b>>c;
    if (a==0)
    cout<<"a不能为0"<<endl;
    else{
        double delta=b*b-4*a*c;
        if (delta>0)
        {x1=(-b+sqrt(delta))/2*a;
        x2=(-b-sqrt(delta))/2*a;}
        else if(delta<0)
        cout<<"方程无根"<<endl;
        else if(delta==0)
        x1=x2=-b/2*a;
    cout<<"方程的根是"<<x1<<" "<<x2<<endl;
    }
    
return 0;
}