#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {5, 12, 7, 9, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;

    int result = linearSearch(arr, n, key);

    if (result != -1) {
        cout << "Element " << key << " found at index " << result << endl;
    } else {
        cout << "Element not found in array" << endl;
    }

    return 0;
}
