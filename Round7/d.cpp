#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

int main () {
    int n;
    cin >> n;
    while (n--) {
        // TODO
        int t;
        cin >> t;
        unordered_map<int,int> m;
        multiset<int> ms;
        vector<int> p(t);
        for (int i = 0;i < t; i++) {
            cin >> p[i];
            ms.insert(p[i]);
        }

        int res = 0;
        while (ms.size()) {
            int begin = *ms.begin();
            for (int i = begin; ;i++) {
                auto itr = ms.find(i);
                if (itr == ms.end()) break;
                else ms.erase(itr);
            }
            res++;
        }
        cout <<res << endl;
    }
    return 0;
}

