#include<iostream>
using namespace std;
//输出移动盘子方式的函数
void move1(int n,char src,char dest){
    cout<<n<<":"<<src<<"->"<<dest<<endl;
}
void moven(int n,char src,char medium,char dest){
    if(n==1)
    {move1(1,src,dest);}
    else{
        moven(n-1,src,dest,medium);//将n-1个盘子从a移到b
        move1(n,src,dest);//将剩下一个盘子移到c
        moven(n-1,medium,src,dest);//将n-1个盘子从b移到c
        }
    
}
int main(){
    int m;
    char a,b,c;
    cout<<"Enter the number of disks and their names:"<<endl;
    cin>>m>>a>>b>>c;
    moven(m,a,b,c);
return 0;
}