#include <iostream> 
#include <stack>
using namespace std;
int main() {
    stack<int> stack1;
    
     cout<<"In Stack First in Last out\n";

    stack1.push(11);
    stack1.push(22);
    stack1.push(33);
    stack1.push(44);
    stack1.push(55);
    

    int num=66;
    stack1.push(num);

    stack1.pop();
    stack1.pop();
    stack1.pop();
  
    while (!stack1.empty()) {
        cout << stack1.top() <<" ";
        stack1.pop();
    }
}