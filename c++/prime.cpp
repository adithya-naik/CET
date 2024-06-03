#include <iostream>
using namespace std;
int main(){
    int num,c=1;
    std::cout<<"Enter the Number : ";
    std::cin>>num;
    for(int i=1;i<num;i++){
        if(num%i == 0){
            c++;
        }
    }
    if(c==2){
        std::cout<<"its a Prime Number";
    }
    else{
        std::cout<<"its a Composite Number";
    }
}
