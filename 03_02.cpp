#include <iostream>
using namespace std;
int main(){
    int a=0,b=0,n=0;
    cout<<"请输入一个整数："<<endl;
    cin>>a;
    do {
        b=a%10;//提取a的个位数（小数部分舍弃）
        cout<<b;//先输出个位数，不换行
        a=a/10;//a的十位变为个位
        n++;//计位数
    }
    while (a!=0);
    cout<<endl<<"位数是："<<n<<endl;
return 0;

}

