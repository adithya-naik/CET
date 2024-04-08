// counting max. no.of 1's in binary std::array 
#include <stdio.h>

int main (){
    int c=1,n=16,r=0;
    int a[16] = {0,1,1,1,1,0,0,1,1,1,1,1,0,0,1,1};
    for (int i = 0; i < n; i++){
       if(a[i]==0){
           c=0;
       }
       else{
           c++;
           r=r>c?r:c;
       }
	}
	printf("%d  ",r);
  return 0;
}
