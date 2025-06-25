#include <iostream>
using namespace std;

int main() {
    int nums [] = {5,15,22,1,-15,24};

    int size = 6;
    int smallest = INT16_MAX;
    int largest = INT16_MIN;
    
    for(int i=0; i<size; i++) {
        if(nums[i]<smallest){
            smallest = nums[i];
        }
    };
    cout << "The smallest number is :" << smallest << endl;

    for(int i=0; i<size; i++) {
        if(nums[i]> largest){
            largest = nums[i];
        }
    }
    cout << "The largest number is :" << largest << endl;
}