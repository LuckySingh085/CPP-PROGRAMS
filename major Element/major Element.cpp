#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int el = 0, freq = 0;
    for (int val : nums) {
        if (freq == 0) el = val;
        freq += (val == el) ? 1 : -1;
    }
    return el;
}

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums);
    return 0;
}
