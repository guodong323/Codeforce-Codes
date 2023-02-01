#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
const int N = 1e6+10;
const int mod = 998244353;
int main () {
    int n;
    cin >> n;
    long long p[N];
    for (int i = 0;i < N; i++) {
        if (i == 0 || i == 1) {
            p[i] = 1;
        } else {
            p[i] = mod-mod/i * p[mod%i]%mod;
        }
    }
    while (n--) {
        // TODO
        int t;
        string str1;
        string str2;
        cin >> t >> str1 >> str2;
        long long sum = 0;
        long long tmp1 = 1;
        long long tmp2 = 1;
        for (long long i = 0;i < t; i++) {
            sum += (str1[i] !=  str2[i]);
        }
        for (long long i = t; i >= 2; i--) {
            tmp1 = ((t*p[i]%mod+(t*p[i]%mod-1)*tmp1%mod)%mod+mod)%mod;
            tmp2 = (tmp2+(i<=sum)*tmp1)%mod;
        }
        if (sum == 0) {
            cout << "0" << endl;
        } else {
            cout << ((tmp1*t+t+tmp2-tmp1)%mod+mod)%mod-1 << endl;
        }
    }
    return 0;
}