#include<stdio.h>
int main(){
     int arr[]={1,3,2,5,-2,-5},ist,UB,K;
     UB=sizeof(arr)/sizeof(arr[0]);
     printf("which index do you want to delete");
     scanf("%d",&K);
     if(K<=UB)
     {
          int i;
          for(i=0;i<K;i++){
               printf("%d ",arr[i]);
          }
          for(i=K;i<UB;i++){
               arr[i]=arr[i+1];
          }
          for(i=K;i<UB-1;i++){
               printf("%d ",arr[i]);
          }
     }
     else{
         printf("this index is doesn't exists");
     
     }
     return 0;
}