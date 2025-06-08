#include <iostream>
using namespace std;


int BinaryToDec (int biNum) {
    int ans = 0;
    int pow = 1;
    while(biNum > 0) {
        int rem = biNum % 10;
        ans+= rem * pow;

        biNum = biNum / 10;
        pow = pow * 2;
    }
    return ans;
}


int main() {
int result = BinaryToDec(1001);
cout << result ;
    return 0;
}