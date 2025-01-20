// CPP program to illustrate 
// Implementation of swap() function 
#include <stack> 
#include <iostream> 
using namespace std; 

int main() 
{ 

    stack<int> stack1; 
    stack<int> stack2; 
    cout<<"In Stack First in Last out\n";
 
    stack1.push(11); 
    stack1.push(22); 
    stack1.push(33); 
    stack1.push(44); 
 
    stack2.push(34); 
    stack2.push(54); 
    stack2.push(74); 
    stack2.push(94); 

    stack1.swap(stack2); 

    cout<<"stack1 = "; 
    while (!stack1.empty()) { 
        cout<<stack1.top()<<" "; 
        stack1.pop(); 
    } 

    cout<<endl<<"stack2 = "; 
    while (!stack2.empty()) { 
        cout<<stack2.top()<<" "; 
        stack2.pop(); 
    } 
    return 0; 
}