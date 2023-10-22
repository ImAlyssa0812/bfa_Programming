#include <iostream>
using namespace std;
int main(){
    const int N=8;//行数为8
    for(int i=1;i<=N;i++){
        for(int j=1;j<=8-i;j++)
            cout<<' ';//输出空格，空格数与行数成反比
        for(int j=1;j<=2*i-1;j++)
            cout<<'*';//输出*，*数与行数成正比
        cout<<endl;//换行
    }
return 0;
}