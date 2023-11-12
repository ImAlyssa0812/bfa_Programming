#include<iostream>
#include<string>
using namespace std;

int main(){
string s;
int i=0;
cout<<"请输入一段字符："<<endl;
getline(cin,s);//包含空格输入
for(int i=0;i<s.size();i++){//遍历string中的字符
    if(s[i]>='a'&&s[i]<='z')//使用ASCII码的编号转换大小写
    s[i]-=32;
    else if(s[i]>='A'&&s[i]<='Z')
    s[i]+=32;
}
cout<<s;
return 0;
}

