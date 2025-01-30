#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &s) {
    string new_str = "";
    int n = s.size();
    while (n--) {
        new_str.push_back(s[n]);
    }

    return (s == new_str);
}

int main() {
    if (isPalindrome("aabaa")) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}