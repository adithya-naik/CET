// second largest number
#include <stdio.h>

int main()
{
    int a[5] = {2,1,3,4,5};
    int f= a[0],s;
    for(int i=0;i<5;i++){
        if(a[i]>f){
            s=f;
            f=a[i];
        }
    }
    printf("%d",s);
    return 0;
}
