#include<iostream>
#include <iterator>
#include <deque>
#include <string>
using namespace std;

template<class T>//输出指定的整型顺序容器的元素
void printContainer(const char* msg,const T&s){
    cout<<msg<<":";
    copy(s.begin(),s.end(),ostream_iterator<int>(cout," "));
    cout<<endl;
}

int main(){
    deque<int>d;
    string command;
    while(1){
        cout<<"请输入命令（push/pop/print/exit）:";
        cin>>command;
        if(command=="push"){
            int x;
            cin>>x;
            d.push_back(x);
            printContainer("deque at last",d);
        }
        else if(command=="pop"){
            if(!d.empty()){
                d.pop_front();
                printContainer("deque at last",d);
            }
            else{
                cout<<"队列为空"<<endl;
            }
        }
        else if(command=="print"){
            printContainer("deque at last",d);
        }
        else if(command=="exit"){
            break;
        }
        else{cout<<"命令无效"<<endl;}
    }
return 0;
}