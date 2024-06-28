#include<stdio.h>
int main(){
     int arr[]={1,3,2,5,-2,-5},ist,UB,K;
     UB=sizeof(arr)/sizeof(arr[0]);
     printf("What number do you want to insert");
     scanf("%d",&ist);
     printf("In which index do you want to insert");
     scanf("%d",&K);
     if(K<=UB)
     {
          int j=K;
     int i;
     printf("After Insertion the array = ");
     for(i=0;i<K;i++){
          printf("%d ",arr[i]);
     }
     for(i=UB;i>=K;i--){
          arr[i+1]=arr[i];
     }
     arr[K]=ist;
     for(i=K;i<=UB;i++){
          printf("%d ",arr[i]);
     }

     }
     else{
         printf("In which index do you want to insert");
         scanf("%d",&K);
     }
     return 0;
}