#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	n %= 10;
	for (int i = 1; i <= 9; ++i) if((n * i) % 10 == m or (n * i) % 10 == 0) {cout << i << '\n'; break;}
	return 0;
}


