#include<iostream>
using namespace std;
int sequence(int i){
    if(i==1)
    return 1;
    else if(i==2)
    return 1;//已知首项和第二项
    else
    return sequence(i-1)+sequence(i-2);//每项等于前两项的和
}
int main(){
    int i;
    cin>>i;
    while(i>0)
    {int n;
    cin>>n;
    cout<<sequence(n)<<endl;
    i--;}
return 0;
}