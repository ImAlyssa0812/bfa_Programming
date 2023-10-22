#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int i=1;
    while(i==1)//至少玩一局
    {srand(time(0));
    int a=rand()%3;//生成0/1/2的随机数
    int b=0;
    cout<<"玩家出手（石头：0/剪刀:1/布:2）："<<endl;
    cin>>b;
    while(b!=0&&b!=1&&b!=2)
    {cout<<"玩家出手（石头：0/剪刀:1/布:2）："<<endl;
    cin>>b;}//要求玩家正确输入0/1/2
    if(b==0||b==1||b==2)
    cout<<"电脑出手："<<a<<endl;
    int c=a-b;
    switch(c){
        case 0:cout<<"平手"<<endl;
        break;
        case 1: case -2:cout<<"你输了"<<endl;
        break;
        case -1: case 2:cout<<"你赢了"<<endl;
        break;
        default:0;
        }
    cout<<"是否继续玩(是:1/不是:其他):"<<endl;
    cin>>i;}//改变i，控制是否继续循环
return 0; 
}