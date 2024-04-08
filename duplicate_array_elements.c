// printing non duplicate elements of a array
#include <stdio.h>

int main()
{
    int a[5]={1,1,1,4,5};
    for(int i=0;i<5;i++){
        if(a[i]!=a[i+1]){
            printf("%d ",a[i]);
        }
    }
    return 0;
}
