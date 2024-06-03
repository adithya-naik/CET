#include <iostream>
using namespace std;
int main()
{
    int num,sum=0;
    std::cout<<"Enter the number upto which you want fibonacci Series : ";
    std::cin>>num;
    int a=0,b=1;
    std::cout<<a<<" "<<b<<" ";
    for(int i=2;i<num;i++){
        sum=a+b;
        std::cout<<sum<<" ";
        a=b;
        b=sum;
    };
    return 0;
}
