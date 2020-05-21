#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int in[n];
	for (int i = 0; i < n; ++i) cin >> in[i];
	sort(in, in + n);
	for (int i = 0; i < n; ++i) cout << in[i] << " ";
	return 0;
}
