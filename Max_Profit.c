#include <stdio.h>

int main(){
    int p=0,m=0;
    int a[6] = {7,1,5,3,6,4};
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(a[i]<a[j]){
                p = a[j] - a[i];
                m = m>p ? m : p ;
            }
        }
    }
    printf("%d",m);
    return 0;
}
