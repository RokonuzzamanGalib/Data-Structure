/*if we add #include <bits/stdc++.h> in a C++
 program then there is no need to include 
 any other header files*/
#include <bits/stdc++.h>
//#include <iostream>
//#include<vector>
using namespace std;

void heapify(vector<int>& arr, int n, int x){

    int largest = x;

    int l_idx = 2 * x + 1;
    int r_idx = 2 * x + 2;

    if (l_idx < n && arr[l_idx] > arr[largest])
        largest = l_idx;

    if (r_idx < n && arr[r_idx] > arr[largest])
        largest = r_idx;

    if (largest != x) {
        swap(arr[x], arr[largest]);

        heapify(arr, n, largest);
    }
}


void heapSort(vector<int>& arr){
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}


int main(){
    vector<int> arr ={5,2,9,1,6,4,11,3};
     cout << "Unsorted Array: \n";
    for(int val :arr){
        cout<< val <<" ";
    }
    cout<<"\n";

    heapSort(arr);
cout << "sorted Array: \n";
    for(int val :arr){
        cout<< val <<" ";
    }
    cout<<" ";


}