#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
}*head,*newnode,*temp;

//head=NULL;

void linkedList(int n){
head=new node();
cout<<" Enter first element of linked list ";
cin>>head->data;
head->next=NULL;

temp=head;

for (int i = 2; i < n+1; i++)
{
    newnode=new node();
    cout<<"enter the data of node "<<i<<" ";
    cin>>newnode->data;
    newnode->next=NULL;
    temp->next=newnode;
    temp=newnode;  //  temp=temp->next;

}



}
void display(int n){
    temp=head;
    cout<<"The list is ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int main(){
    int n;
    cout <<"Enter the number of node in linked list =";
    cin>>n;
    linkedList(n);
    display(n);
    return 0;
}
