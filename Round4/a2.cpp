#include<iostream>
using namespace std;

// b >= a, b >= c or b <= a, b <= c
int main(){
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s[0] != s[s.size()-1]) {
            for (int i = 1;i < s.size()-1; i++) {
                if (s[i] == 'a') {
                    cout << s.substr(0,i) << " " << s.substr(i,1) << " " << s.substr(i+1,s.size()-i-1) <<endl;
                    break;
                } else if (s[i] == 'b') {
                    cout << s.substr(0,1) << " " << s.substr(i,s.size()-i-1) << " " << s.substr(s.size()-1,1) <<endl;
                    break;
                }
            }
        } else {
            cout << s.substr(0,1) << " " << s.substr(1,s.size()-2) << " " << s.substr(s.size()-1,1) << endl;
        }
    }
    return 0;
}