#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i) cin >> arr[i];
	int m;
	cin >> m;
	for (int k = 0; k < m; ++k) {
		int x, y;
		cin >> x >> y;
		x--;		
		if (!x) {			
			arr[x + 1] += arr[x] - y;
			arr[x] = 0;
		} else if (x == n - 1) {
			arr[x - 1] += y - 1;
			arr[x] = 0;
		} else {
			arr[x - 1] += y - 1;
			arr[x + 1] += arr[x] - y;
			arr[x] = 0;
		}				
	}
	for (int i = 0; i < n; ++i) cout << arr[i] << '\n';
	return 0;
}


