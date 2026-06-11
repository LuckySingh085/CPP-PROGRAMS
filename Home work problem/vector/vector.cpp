#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int maxSum = arr[0], currentSum = 0;
    int start = 0, end = 0, s = 0;

    for(int i=0; i<arr.size(); i++) {
        currentSum += arr[i];

        if(currentSum > maxSum) {
            maxSum = currentSum;
            start = s;
            end = i;
        }

        if(currentSum < 0) {
            currentSum = 0;
            s = i+1;
        }
    }

    cout << "Maximum Sum = " << maxSum << endl;
    cout << "Subarray: ";
    for(int i=start; i<=end; i++) cout << arr[i] << " ";
}
