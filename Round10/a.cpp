#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main () {
    int n;
    cin >> n;
    unordered_map<char, int> m;
    string str = "codefroces";
    for (int i = 0;i < str.size(); i++) {
        m[str[i]]++;
    }
    while (n--) {
        // TODO
        char c;
        cin >> c;
        if (m[c] != 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}