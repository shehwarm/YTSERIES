#include <iostream>
using namespace std;

int main() {
    int size = 4;
    int marks[size] = {15, 34, 44, 64};
    int index = -1;
    int largest = INT_MIN;
     
     for(int i=0; i < size; i++){
        if(marks[i] > largest) {
            largest = marks[i];
            index = i;
        }
    }
     cout << "Largest value:" << largest << endl;
     cout << "Index: " << index << endl;

   return 0;
} 