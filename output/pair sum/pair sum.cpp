#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 4, 6, 8, 10};
    int n = 5;
    int target = 14;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << arr[i] << " + " << arr[j] << " = " << target << endl;
            }
        }
    }

    return 0;
}
