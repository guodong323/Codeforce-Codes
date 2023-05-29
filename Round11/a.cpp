#include <iostream>
using namespace std;

#define ll long long

int main() {   
    ll n;
    cin >> n;
    while(n--) {
        ll t , k;
        cin >> t >> k;
        if(t % k == 0) {
            cout << 2 << endl << t - 1 << ' ' << 1 << endl;
        }
        else {
            cout << 1 << endl << t << endl;
        }
    }
    return 0;
}