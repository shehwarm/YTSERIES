#include <iostream>
using namespace std;

int main() {
    int num[] = {5, 15, 22, 1, -15, 24};
   int size = 6;
   int largest = INT_MIN;

   for(int i=0; i < size; i++){
    if (num[i] > largest) {
        largest = num[i];
    }
   }
  cout << "largest: " << largest << endl;
 
   return 0;
}