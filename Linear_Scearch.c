#include<stdio.h>
int main(){
     int arr[]={9,2,5,4,10,7,8,1},n,item;
     n=sizeof(arr)/sizeof(arr[0]);
     printf("Enter the number -->");
     scanf("%d",&item);
     int found=0;
     for(int i=0; i<n; i++)
     {
          if (arr[i]==item)
          {
               printf("Number found at index %d",i);
               found =1;
               
               break;
          }     
     }
     if (found==0){
         printf("The array doesn't have the Number ");

     } 
     return 0;
     
}