#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;
typedef long long ll;


int main () {
    int n;
    cin >> n;
    while (n--) {
        // TODO
        int t,k;
        cin >> t >> k;
        vector<int> v(t);
        map<int,int> mp;
        ll res = 0;
        for (int i = 0;i < t; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }

        vector<int> big(k);
        for (int i = 0;i < k; i++) cin >> big[i];
        sort(big.begin(),big.end());

        priority_queue<vector<int> > q;
        for (int i = 0;i < mp.size(); i++) {
            q.push(vector<int>{mp[i]->first,mp[i]->second});
        }

        for (int i = 0;i < k; i++) {
            if (q.empty()) break;
            vector<int> tmp = q.top();
            q.pop();

            if (tmp[0] > big[i]) {
                res += big[i];
                q.push(vector<int> {tmp[0]-big[i],tmp[1]});
            } else {
                res += tmp[0];
            }
        }
        cout << res << endl;
    }
    return 0;
}