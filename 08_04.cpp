#include<iostream>
#include<list>
#include<iterator>
using namespace std;

template<class T>
void filterList(list<T>&list,const T& threshold){
    list.remove_if([&threshold](const T& element){return element<threshold;});
}

template<class T>//输出指定的整型顺序容器的元素
void printContainer(const char* msg,const T&s){
    cout<<msg<<":";
    copy(s.begin(),s.end(),ostream_iterator<int>(cout," "));
    cout<<endl;
}

int main(){
    list<int>l;
    int a;
    cout<<"列表大小为：";
    cin>>a;
//从标准输入读入a个整数，从列表尾部加入
    for (int i=0;i<a;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    printContainer("list at first",l);
    int threshold;
    cout<<"请输入阈值:";
    cin>>threshold;
    filterList(l,threshold);
    printContainer("list at last:",l);
return 0;  
}