#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main () {
    int n;
    cin >> n;
    while (n--) {
        // TODO
        int a,b,c;
        cin >> a >> b >> c;
        vector<int> path;
        int big = b-c;
        path.push_back(big);
        int o = (c % (a-1));
        int t = (c / (a-1));
        for (int i = 1; i < a; i++) {
            if (o > 0) {
                path.push_back(t+1);
                o--;
            } else {
                path.push_back(t);
            }
        }
        for (int i = 0;i < path.size()-1; i++) {
            cout << path[i] << " ";
        }
        cout << path.back() << endl;
    }
    return 0;
}