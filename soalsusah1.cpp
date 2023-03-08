#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool can_convert_strings(string s, string t) {
    int m = s.length();
    int n = t.length();
    if (abs(m - n) > 1) {
        return false;
    }
    int i = 0, j = 0, edits = 0;
    while (i < m && j < n) {
        if (s[i] != t[j]) {
            if (edits == 1) {
                return false;
            }
            if (m > n) {
                i++;
            }
            else if (n > m) {
                j++;
            }
            else {
                i++;
                j++;
            }
            edits++;
        }
        else {
            i++;
            j++;
        }
    }
    if (i < m || j < n) {
        edits++;
    }
    return edits == 1;
}

int main() {
    string s = "abc";
    string t = "bcd";
    bool result = can_convert_strings(s, t);
    cout << "Can convert strings: " << boolalpha << result << endl;
    return 0;
}
