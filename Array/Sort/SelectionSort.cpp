// Selection sort in C++

#include <bits/stdc++.h>//on behalf of all header file
using namespace std;


void selectionSort(vector<int> &arr, int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      if (arr[i] < arr[min_idx])
        min_idx = i;
    }

    swap(arr[min_idx], arr[step]);
  }
}


int main() {
 vector<int> arr ={5,2,9,1,6,4,11,3};
     cout << "Unsorted Array: \n";
    for(int val :arr){
        cout<< val <<" ";
    }
    cout <<endl;

  selectionSort(arr, arr.size());

  cout << "sorted Array: \n";
    for(int val :arr){
        cout<< val <<" ";
    }
    cout<<" ";
 
}