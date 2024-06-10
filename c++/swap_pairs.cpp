#include <iostream>
#include <utility>
using namespace std;


int main(){
    pair<char,int>pair1 = make_pair('P',1);
    pair<char,int>pair2 = make_pair('Q',1);
    cout<<"Contents before swapping : ";
    cout<<"\nContent of pair1 : "<<pair1.first<<" "<<pair1.second;
    cout<<"\nContent of pair2  : "<<pair2.first<<" "<<pair2.second;
    
    pair1.swap(pair2);
    
    cout<<"\nContents after swapping : ";
    cout<<"\nContent of pair1 : "<<pair1.first<<" "<<pair1.second;
    cout<<"\nContent of pair2  : "<<pair2.first<<" "<<pair2.second;
    
    return 0;
}
