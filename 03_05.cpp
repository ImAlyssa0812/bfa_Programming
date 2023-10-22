#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)//判断2~根号n的数是否是n的因数
    {
        if(n%i==0)
        return false;//有因数非质数
    }
    return true;//是质数
}

int main(){
    for(int n=200;n<=300;n++)//判断200~300的数
    {
        if (isPrime(n))
        cout<<n<<endl;
    }
return 0;
}
