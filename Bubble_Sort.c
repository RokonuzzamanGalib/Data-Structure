#include<stdio.h>
 
int main(){
     int arr[]={7,4,8,9,3,2,1,10,5,0},UB;
     UB=sizeof(arr)/sizeof(arr[0]);
     int i;
     printf("The given array = ");
     for(i=0;i<UB;i++){
          printf("%d ",arr[i]);
     }

     for(int j=0;j<UB-1;j++){
          for (int i = 0; i < UB-j-1; i++)
          {
               if(arr[i]>arr[i+1]){
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
               }
          }
          
     }

     
     printf("\nThe array after bubble sort = ");
     for (i=0;i<UB;i++){
           printf("%d ",arr[i]);
     }
}