#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;

template<class T>//输出指定的整型顺序容器的元素
void printContainer(const char* msg,const T&s){
    cout<<msg<<":";
    copy(s.begin(),s.end(),ostream_iterator<int>(cout," "));
    cout<<endl;
}

void uniqueSort(vector<int>&v){
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
}
int main(){
    vector<int>v;
    int a;
    cout<<"容器大小为：";
    cin>>a;
//从标准输入读入a个整数，从容器尾部加入
    for (int i=0;i<a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    uniqueSort(v);
    printContainer("vector at last",v);
return 0;
}

