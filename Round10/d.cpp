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
        string s;
        cin >> t >> s;
        unordered_map<char,long long> m1;
        unordered_map<char,long long> m2;
        vector<long long> pre(t,0);
        vector<long long> tail(t,0);
        pre[0] = 1;
        m1[s[0]]++;
        for (long long i = 1;i < t; i++) {
            if (m1.find(s[i]) != m1.end()) {
                pre[i] = pre[i-1];
            } else {
                pre[i] = pre[i-1] + 1;
            }
            m1[s[i]]++;
        }
        tail[t-1] = 1;
        m2[s[t-1]]++;
        for (long long i = t-2; i >= 0; i--) {
            if (m2.find(s[i]) != m2.end()) {
                tail[i] = tail[i+1];
            } else {
                tail[i] = tail[i+1]+1;
            }
            m2[s[i]]++;
        }
        long long res = 0;
        for (long long i = 0;i < t; i++) {
            res = max(res,pre[i]+tail[i]);
        }
        if (res > t) res = t;
        cout  <<res << endl;
    }
    return 0;
}