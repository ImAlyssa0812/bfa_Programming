#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    while(1){
    cin>>n>>m;
    if (n==0&&m==0){//输入0 0时结束运行，否则可以一直输入
        break;
    }
    vector<int> group;
    for(int i=1;i<=n;++i){
        group.push_back(i);//建立1~n的数据列表
    }
    int j=0;
    for(int i=1;group.size()>1;i++)
        {
        j=(j+m-1)%group.size();//“指针”移动次数为m-1
        group.erase(group.begin()+j);
        }
    cout<<group[0]<<endl;
    }
return 0;
}
