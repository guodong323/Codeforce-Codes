#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main () {
    int n;
    cin >> n;
    while (n--) {
        // TODO
        int t;
        cin >> t;
        vector<int> v(t);
        int sum = 0;
        for (int i = 0;i < t; i++) {
            cin >> v[i];
            sum += v[i];
        }
        bool flag1 = false;
        bool flag2 = false;
        bool flag3 = false;
        for (int i = 0;i < t-1; i++) {
            if (v[i] == -1 && v[i+1] == -1) {
                flag1 = true;
            } else if ((v[i] == 1 && v[i+1] == -1) || (v[i] == -1 && v[i+1] == 1)) {
                flag2 = true;
            } else if (v[i] == 1 && v[i+1] == 1) {
                flag3 = true;
            }
        }
        if (flag1) {
            cout << sum + 4 << endl;
            continue;
        }
        if (flag2) {
            cout << sum << endl;
            continue;
        }
        if (flag3) {
            cout << sum - 4 << endl;
            continue;
        }
    }
    return 0;
}