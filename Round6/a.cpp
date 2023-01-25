#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void method() {
    int t;
    cin >> t;
    vector<int> v(t);
    for (int i = 0;i < t; i++) cin >> v[i];

    for (int i = 0;i < t; i++) {
        for (int j = i+1;j < t; j++) {
            for (int k = j+1;k < t; k++) {
                if ((v[i]+v[j]+v[k])%2) {
                    cout << "YES" << endl;
                    cout << i+1 << " " << j+1 << " " << k+1 << " " << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
}
int main () {
    int n;
    cin >> n;
    while (n--) {
        // TODO
        method();
    }
    return 0;
}