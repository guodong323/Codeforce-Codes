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
        if (t & 1) {
            cout << "-1" << endl;
        } else {
            cout << 1 << " " << (t>>1) << endl;
        }
    }
    return 0;
}