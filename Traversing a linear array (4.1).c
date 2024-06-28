#include<stdio.h>
int main(){
     int LA[]={2,4,3,-1,0,-4},n,UB;
     UB = sizeof(LA)/sizeof(LA[0]);
     int i;
     printf("LA = ");
     for(i=0;i<UB;i++){
          printf("%d ",LA[i]);

     }
     
}