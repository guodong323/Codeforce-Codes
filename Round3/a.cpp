#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>
 
using namespace std;
 
int main() {
	int t= 0;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		unordered_map<int,int> m;
		for (int i = 0;i < n; i++) {
			cin >> a[i];
			m[a[i]]++;
		}
		if (m.size() == 1) {
			cout << "NO" << endl;
		} else if (n == 1) {
			cout << "YES" << endl;
			cout << a[0] << endl;
		} else if (n == 2 && a[0] == a[1]) {
			cout << "NO" << endl;
		} else {
			sort(a.begin(),a.end());
			reverse(a.begin(),a.end());
			cout << "YES" << endl;
			if (a[0] == a[1]) {
				swap(a[1],a[n-1]);
			}
			for (int i = 0;i < a.size(); i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}