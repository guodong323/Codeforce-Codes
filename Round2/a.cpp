#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
 
long long fac(long long n) {
	if (n == 0) return 1;
	long long res = 0;
	for (long long i = 1;i <= n; i++) {
		res *= i;
	}
	return res;
}
 
int main() {
	int n;
	cin >> n;
	int maxv = INT_MIN;
	while (n--) {
		long long a = 0;
		cin >> a;
		for (long long i = a-1;i >= 0; i--) {
			if (((i+1)*fac(i-1))%a == 0) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}