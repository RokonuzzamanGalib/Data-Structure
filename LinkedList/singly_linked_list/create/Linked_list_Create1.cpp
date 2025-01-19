#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

void print();

node* head=NULL;

int main(){
    int x,n;
    int i;
    cout<<"how many data want to input : ";
    cin>>n;
    cout<<"input your data ";
    cin>>x;

   node* temp=head;
      node* newnode=new node();
    newnode->data=x;
    newnode->next=NULL;

    head=newnode;
    for ( i = 0; i < n-1; i++)
    {
        cin>>x;
        node*newnode=new node();
        newnode->data=x;
        newnode->next=NULL;
        temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next= newnode;
        

    }
    print();
    
}
void print(){
        node* temp=head;
        cout <<"The data list is \n";
        int c=0;
        while(temp!=NULL){
            c++;

            cout<<"Node "<<c<<" address >"<<temp<<" data ="<<temp->data<<" "<<"next node address = "<<temp->next<<endl;
            temp=temp->next;
            

        }
    }
