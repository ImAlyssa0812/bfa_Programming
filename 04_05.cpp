#include<iostream>
#include<string>
using namespace std;

//5个分别判断是否获得每项奖学金的函数
int f1(int a,int e){
    int val=0;
    if (a>80&&e>0)
    val+=8000;
return val;
}
int f2(int a,int b){
    int val=0;
    if(a>85&&b>80)
    val+=4000;
return val;
}
int f3(int a){
    int val=0;
    if(a>90)
    val+=2000;
return val;
}
int f4(int a,char d){
    int val=0;
    if(a>85&&d=='Y')
    val+=1000;
return val;
}
int f5(int b,char c){
    int val=0;
    if(b>80&&c=='Y')
    val+=850;
return val;
}
int main(){
    int n;
    cout<<"请输入学生数量："<<endl;
    cin>>n;
    cout<<"请输入学生数据："<<endl;
    int total;
    int s[n];
    string w[n]; //两个数组分别存储学生姓名和获得奖学金金额
    for(int i=0;i<n;i++)
    {string name;
    cin>>name;
    w[i]=name;
    int a,b,e;
    char c,d;
    cin>>a>>b>>c>>d>>e;
    int m=f1(a,e)+f2(a,b)+f3(a)+f4(a,d)+f5(b,c);//个人获得的奖学金金额
    s[i]=m;
    total+=m;
    }
int max=s[0];//先默认数组第一个元素最大
string winner;
for(int i=0;i<n-1;i++){//遍历数组中的元素
    if(s[i]>max)//与max比较，较大的为新的max值
    {max=s[i];
    winner=w[i];}
}
cout<<winner<<endl;
cout<<max<<endl;
cout<<total;
return 0;
}