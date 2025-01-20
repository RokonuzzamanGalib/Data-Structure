#include <iostream>
#include <queue>
using namespace std;

int main() {

  queue<string> foods;


  foods.push("Egg");
  foods.push("Meat");
  foods.push("Vegetables");
  

  int size = foods.size();
  cout << "Size of the queue: " << size;

  return 0;
}