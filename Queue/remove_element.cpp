#include <iostream>
#include <queue>
using namespace std;

void display_queue(queue<string> q);

int main() {

  queue<string> foods;

  foods.push("Egg");
  foods.push("Meat");
  foods.push("Vegetables");
  
  cout << "Initial Queue: ";
  display_queue(foods);
  
  foods.pop();
  
  cout << "Final Queue: ";
  display_queue(foods);
  
  return 0;
}

void display_queue(queue<string> q) {
  while(!q.empty()) {
    cout << q.front() << "  ";
    q.pop();
  }

  cout << endl;
}