#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length())  
        return false;  // Different lengths → Not an anagram

    unordered_map<char, int> freq;  // Hash table to store character counts

    // Step 1: Count characters in 's' and decrement in 't'
    for (int i = 0; i < s.length(); i++) {
        freq[s[i]]++;  // Increment for 's'
        freq[t[i]]--;  // Decrement for 't'
    }

    // Step 2: Check if all frequencies are zero
    for (auto pair : freq) {
        if (pair.second != 0)
            return false;
    }

    return true;  // All counts are zero → Anagram
}

int main() {
    string s = "racecar";
    string t = "carrace";

    if (isAnagram(s, t))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
