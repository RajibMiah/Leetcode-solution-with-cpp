#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int digitSum(int &n) {
    int sum = 0;
    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main() {
    int a = 1234;
    int b = 1234;
    cout << digitSum(a) + digitSum(b);
}