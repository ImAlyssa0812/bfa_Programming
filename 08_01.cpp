#include <iostream>
#include <iterator>
#include <list>
using namespace std;

template<class T>//输出指定的整型顺序容器的元素
void printContainer(const char* msg,const T&s){
    cout<<msg<<":";
    copy(s.begin(),s.end(),ostream_iterator<int>(cout," "));
    cout<<endl;
}
int main(){
    int a;
    cout<<"列表大小为：";
    cin>>a;
    list<int>l;
//从标准输入读入a个整数，从容器尾部加入
    for (int i=0;i<a;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    
  
    printContainer("list at first",l);
    l.pop_back();
    l.pop_front();
    printContainer("list at last",l);
return 0;
}