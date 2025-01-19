#include<iostream>
using namespace std;

int main(){
    int LA[100],N,K,ITEM;
    cout<<"Enter how many element has in the array"<<endl;
    cin>>N;
    cout<<"The Given Array"<<endl;
    for (int i = 0; i < N; i++)
    {
        cin>>LA[i];
    }
    cout <<"In which index do you want to inserting an element "<<endl;
    cin>>K;

    cout<<"The element that you want to insert is ";
    cin>>ITEM;

    for (int i = N; i >= K; i--)
    {
        LA[i+1]=LA[i];
    }
    LA[K]=ITEM;
    N=N+1;
    
    cout<<"After insertion the array "<<endl;

    for (int i = 0; i < N; i++)
    {
        cout<<LA[i]<<" ";
    }
    
    return 0;

    

}