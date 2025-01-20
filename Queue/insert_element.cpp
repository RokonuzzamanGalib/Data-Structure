#include <iostream>
#include <queue>

using namespace std;

int main() {

  queue<string> foods;

  foods.push("Egg");
  foods.push("Meat");
  foods.push("Vegetables");
  
  cout << "Queue: ";

  while(!foods.empty()) {

    cout << foods.front() << "   ";

    foods.pop();
  }

  cout << endl;
 
  return 0;
}