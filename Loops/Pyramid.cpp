#include <iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i =0; i<4; i++){
        
        //Loop for spaces 
        for(int j = 0; j <n-i-1; j++){
            cout << " ";
        }

        // Loop for num1
        for(int j = 1;j<=i+1; j++){
            cout << j;
        } 

        //Loop for num2
        for(int j=i; j>0; j--){
            cout << j;
        }
        cout << endl;

    }
    return 0;
}