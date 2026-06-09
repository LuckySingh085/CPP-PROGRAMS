#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find index of min and max
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Swap min and max
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    // Print updated array
    cout << "Array after swapping min and max ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
