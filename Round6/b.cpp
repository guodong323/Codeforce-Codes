#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
	ll temp = b;
	while (a % b) {	
		temp = a % b;
		a = b;
		b = temp;
	}
	return temp;
}

int main () {
    int n;
    cin >> n;
    while (n--) {
        // TODO
        int t;
        cin >> t;
        ll sum = 0;
        vector<ll> v(t);
        for (int i = 0;i < t; i++) {
            cin >> v[i];
            sum += v[i];
        }
        vector<ll> p(t);
        p[0] = v[0];
        for (int i = 1; i < t; i++) {
            p[i] = p[i-1] + v[i];
        }
        ll res = 0;
        for (int i = 0;i < t-1; i++) {
            sum -= v[i];
            res = max(res,gcd(sum,p[i]));
        }
        cout << res << endl;
    }
    return 0;
}