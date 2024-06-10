#include <iostream>
#include <algorithm>
using namespace std;

void show(int a[],int array_size){
    for(int i=0;i<array_size;i++){
        cout << a[i] << " " ;
    }
}


int main()
{
    int a[10];
    cout<<"Enter array values: ";
    for(int i=0;i<10;++i){
        cin>>a[i];
    }
    
    int asize = sizeof(a)/sizeof(a[0]);
    cout<<sizeof(a)<<endl;
    cout<<"The array before Sorting is : \n";
    show(a,asize);
    sort(a,a+asize);
    cout<<"\nThe array after Sorting is : \n";
    show(a,asize);
    return 0;
}
