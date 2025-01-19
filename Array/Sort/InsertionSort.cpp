#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node* InsertinList(node *head, int n)
{

    node *newnode = new node;
    node *temp = new node;
    newnode->data = n;
    newnode->next = NULL;
    
    if(head == NULL)
    {
        head = newnode;
        return head;
    }
    else
    {
        temp = head;

        if(newnode->data < head->data)
        {
            newnode->next = head;
            head = newnode;
            return head;
        }
     
        while(temp->next != NULL)
        {
            if(newnode->data < (temp->next)->data)
                break;
                temp=temp->next;
        }
        
        newnode->next = temp->next;
        temp->next = newnode;
        return head;
    }	
}	
 
int main()
{
    int n, i, num;
    node *head = new node;
    head = NULL;
    cout<<"\nEnter the number of data element to be sorted: ";
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>num;
      
        head = InsertinList(head, num);
    }
 
   
    cout<<"\nSorted Data ";
    while(head != NULL)
    {
        cout<<" "<<head->data<<" ";
        head = head->next;
    }
    return 0;
}