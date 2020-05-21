#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[4];
	for(int i = 0; i < 4; ++i) cin >> a[i];
	string str;
	cin >> str;
	int cnt = 0;
	for (int i = 0; i < (int) str.length(); ++i) cnt += a[str[i] - '0' - 1];
	cout << cnt << '\n';
	return 0;
}

