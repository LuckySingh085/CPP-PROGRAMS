#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " element";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallestIndex = 0, largestIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[smallestIndex]) {
            smallestIndex = i;
        }
        if (arr[i] > arr[largestIndex]) {
            largestIndex = i;
        }
    }

    cout << "Smallest element is " << arr[smallestIndex] 
         << " at index " << smallestIndex << endl;
    cout << "Largest element is " << arr[largestIndex] 
         << " at index " << largestIndex << endl;

    return 0;
}
