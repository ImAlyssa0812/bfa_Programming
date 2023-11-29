#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Student{
private:
    string name;
    string Class;
    int num;
    float grade;
    static int count;
public:
    Student(string n,string c,int N,float g){
        name=n;
        Class=c;
        num=N;
        grade=g;
        count++;}
    void show(){
        cout<<"姓名："<<name<<","<<"班级："<<Class<<","<<"学号："<<num<<","<<"成绩："<<grade<<endl;
        if(grade>=90)
        cout<<'A'<<endl;
        else if(grade>=80)
        cout<<'B'<<endl;
        else if(grade>=70)
        cout<<'C'<<endl;
        else
        cout<<'D'<<endl;}
    
    static void showcount(){cout<<"学生个数是："<<count<<endl;}
};

int Student::count=0;

int main(){
vector<Student> list;
string name,Class;
int num;
float grade;
char choice;
do{
    cout<<"请依次输入学生姓名、班级、学号、成绩："<<endl;
    cin>>name>>Class>>num>>grade;
    Student s(name,Class,num,grade);
    list.push_back(s);
    
    cout<<"是否继续(Y/N):"<<endl;
    cin>>choice;
}while(choice=='Y'||choice=='y');
   
for(int i=0;i<list.size();i++){
    list[i].show();
}
Student::showcount();
return 0;
}
//测试数据
//Tom Class1 10 78
//Jack Class2 20 96
//Andy Class1 12 80
//Mark Class2 21 65