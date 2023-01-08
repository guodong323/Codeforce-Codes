#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int n = 0;
    cin >> n;
    int t = 0;
    while (n--) {
        cin >> t;
        if (t == 3) {
            cout << "NO" << endl;
        } else if (t % 2 == 0) {
            cout << "YES" << endl;
            for (int i = 1;i <= t; i++) {
                cout << 2*pow(-1,i) << " ";
            }
            cout << endl;
        } else {
            int a = (t-3)/2;
            int b = (t-1)/2;
            cout << "YES" <<  endl;
            for (int i = 0;i < t; i++) {
                if (i % 2 == 0) {
                    cout << a << " ";
                } else {
                    cout << -1*b << " ";
                }
            }
            cout << endl;
        }
    }
}