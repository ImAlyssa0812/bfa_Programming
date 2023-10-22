#include <iostream>
using namespace std;
int main(){
    cout<<"请输入一个正整数："<<endl;
    int a=0;
    cin>>a;
    switch((int)(a%7))//将用户输入的数对7取余
    {
        case 0:cout<<"星期日"<<endl;
        break;
        case 1:cout<<"星期一"<<endl;
        break;
        case 2:cout<<"星期二"<<endl;
        break;
        case 3:cout<<"星期三"<<endl;
        break;
        case 4:cout<<"星期四"<<endl;
        break;
        case 5:cout<<"星期五"<<endl;
        break;
        case 6:cout<<"星期六"<<endl;
        break;
        default:cout<<"请输入符合规则的数"<<endl;
    }
return 0;
}