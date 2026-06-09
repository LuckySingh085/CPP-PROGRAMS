#include<iostream>
using namespace std;

int main(){
    int nums[] = {5,15,22,1,-15,-24};  // Array of numbers
    int size = 6;                      // Array size
    int sum = 0;                       // Sum start from 0
    int product = 1;                   // Product start from 1

    for(int i=0; i<size; i++){         // Loop through array
        sum += nums[i];                // Add each element to sum
        product *= nums[i];            // Multiply each element to product
    }

    cout << "sum of the array is =" << sum << endl;
    cout << "product of the array is =" << product << endl;

    return 0;
}
