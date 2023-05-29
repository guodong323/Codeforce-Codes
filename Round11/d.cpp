#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
long long minimumCost(string s) {
      int n = s.size();
        int cnt0 = 0, cnt1 = 0;
        for (char c : s) {
            if (c == '0') cnt0++;
            else cnt1++;
        }

        long long minCost = min(cnt0, cnt1);
        int flips0 = 0, flips1 = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                flips0++;
                cnt0--;
            } else {
                flips1++;
                cnt1--;
            }
            minCost = min(minCost, flips0 + cnt1);
            minCost = min(minCost, flips1 + cnt0);
        }

        return minCost;
    }