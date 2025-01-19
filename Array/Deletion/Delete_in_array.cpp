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
cout<<"Which index element do you want to delete ";
cin>>K;

ITEM=LA[K];

for (int i = K; i < N-1; i++)
{
    LA[i]=LA[i+1];
}

    N=N-1;
    
    cout<<"After Deletetion, the array "<<endl;

    for (int i = 0; i < N; i++)
    {
        cout<<LA[i]<<" ";
    }
    
    
    return 0;

    

}