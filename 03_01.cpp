#include <iostream>
using namespace std;
int main()
{
    cout<<"请输入两个整数："<<endl;
    int a,b;
    cin>>a>>b;//获取用户输入值
    if (a==b)//判断大小
    cout<<"a=b"<<endl;
    else if (a<b)
    cout<<"a<b"<<endl;
    else 
    cout<<"a>b"<<endl;
return 0;
}
