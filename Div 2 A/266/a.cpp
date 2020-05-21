#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	int cnt = 0;
	for(int i = 0; i < n; ) {
		int j = i;
		while (str[j] == str[++i]) cnt++;
	}
	cout << cnt << '\n';
	return 0;
}

