#include <iostream>
#include <unordered_set>
using namespace std;

bool containsDuplicate(int nums[], int size) {
    unordered_set<int> hashSet;  // HashSet to store unique elements

    for (int i = 0; i < size; i++) {
        if (hashSet.count(nums[i])) {  // If element exists in HashSet, duplicate found
            return true;
        }
        hashSet.insert(nums[i]);  // Insert number into HashSet
    }

    return false;  // No duplicates found
}

int main() {
    int nums[] = {1, 2, 3, 1};  // Test case
    int size = sizeof(nums) / sizeof(nums[0]);

    if (containsDuplicate(nums, size))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
