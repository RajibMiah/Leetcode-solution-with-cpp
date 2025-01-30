#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "559787872255687779774156871268776525";

    int last_digit = s[s.size() - 1] - '0';

    cout << last_digit << endl;
}
