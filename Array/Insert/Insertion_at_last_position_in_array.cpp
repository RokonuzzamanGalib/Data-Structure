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
   
   cout <<"\nHow many elements do you want to insert at the last of array  "<<endl;
   cin >> num;
   int element[num];
   cout << "\nEnter the elements" << endl;
   for(int i=0;i<num;i++){
   cin>>element[i];
   }
   for(int i=0;i<num;i++){
    arr[n+i]= element[i];
   }
   cout << "After Insertion, the array : " << endl;
   for(int i=0; i< n+num ;i++){
   cout<< arr[i]<<" ";
   }
 return 0;
}
