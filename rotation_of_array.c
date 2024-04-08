// rotation of array
#include <stdio.h>
int main()
{
    int d=3,t=0,j;
    int a[5] = {1,2,3,4,5};
    for(int i=0;i<d;i++){
        t=a[0];
        for(j=0;j<5-1;j++){
            a[j]=a[j+1];
        }
        a[j]=t;
    }
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    
    
    return 0;
}
