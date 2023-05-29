#include <iostream>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    while (n--) {
        int t;
        cin >> t;
        string s;
        cin >> s;
        int count = 1;
        int res = 1;
        for (int i = 1;i < t; i++) {
            if (s[i] == s[i-1]) count ++;
            else {
                res = max(res,count);
                count = 1;
            }
        }
        res = max(res,count);
        cout << res + 1 << endl;
    }
    return 0;
}