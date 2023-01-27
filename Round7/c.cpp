#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main () {
    int n;
    cin >> n;
    while (n--) {
        // TODO
        int t = 0;
        cin >> t;
        vector<vector<int> > p(t, vector<int>(t-1));
        for (int i = 0;i < t; i++) {
            for (int j = 0;j < t-1; j++) {
                cin >> p[i][j];
            }
        }
        int begin = 0;
        int last = 0;
        int tmp = 0;
        for (int i = 0;i < t; i++) {
            for (int j = 0;j < t; j++) {
                if (p[i][1] == p[j][0]) {
                    begin = i;
                    last = j;
                    tmp = 1;
                    break;
                }
            }
            if (tmp == 1) {
                tmp = 0;
                break;
            }
        }
        cout <<p[begin][0] << " ";
        for (int i = 0;i < t-1; i++) {
            cout << p[last][i] << " ";
        }
        cout << endl;
    }
    return 0;
}