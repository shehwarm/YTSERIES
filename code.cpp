#include <iostream>
using namespace std;

int main() {
    int size = 4;
    int marks[size] = {15, 34, 44, 64};
    int index = -1;
    int smallest = INT_MAX;
     
     for(int i=0; i < size; i++){
        if(marks[i] < smallest) {
            smallest = marks[i];
            index = i;
        }
    }
     cout << "Smallest value:" << smallest << endl;
     cout << "Index: " << index << endl;

   return 0;
} 