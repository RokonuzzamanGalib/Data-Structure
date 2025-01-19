#include<iostream>
using namespace std;

int main()
{
   int arr[100],num,n;
   cout<<"How many element has in the Array  :" <<endl;

   cin>>n;

   cout<<"Enter the given Array :" <<endl;

    for(int i=0; i< n ;i++){
         cin >> arr[i];
      }

   cout<<"The Given Array :" <<endl;

   for(int i=0; i< n ;i++){
    cout<< arr[i]<<" ";
   }

   cout<<" \n";

   cout <<"How many elements do you want to insert at the first at the array  "<<endl;

   cin >> num;
   int element[num];

   cout << "Enter the elements" << endl;

   for(int i=0;i<num;i++){
    cin>>element[i];
   }

   for(int i=n-1;i>=0;i--){
    arr[i+num]= arr[i];
   }

   for(int i=0;i<num;i++){
    arr[i]= element[i];
   }

   cout << "\n After Insertion, the array : " << endl;

   n=n+num;
   int array[n];

   for(int j = 0; j< n ;j++) {
      
     array[j]=arr[j];
   }
   
    for(int i = 0; i< n ;i++){
   cout<< array[i]<<" ";
   }
   return 0;
}