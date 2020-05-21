#include<bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	int n, cnt = 1;
	cin >> n;
	cin >> a;
	for(int i = 1; i < n; ++i) {
		cin >> b;		
		if (a.back() == b[0]) cnt++;
		a += b;
	}
	cout << cnt << endl;
	return 0;
}
