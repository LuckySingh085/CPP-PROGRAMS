#include <iostream>
using namespace std;

// Function to reverse array using swap (pass  by refrence)
void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        // swap arr[i] and arr[n-i-1]
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function call (original array change hoga)
    reverseArray(arr, n);

    // Print reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

