#include<bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	cin >> a >> b;
	int x = 0;
	for (int i = 0; i < (int) b.length(); ++i) {
		if (a[x] == b[i]) x++;
	}
	cout << x + 1 << '\n';
	return 0;
}

