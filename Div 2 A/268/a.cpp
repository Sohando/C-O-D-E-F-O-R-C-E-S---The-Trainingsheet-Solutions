#include<bits/stdc++.h>
using namespace std;
struct P {
	int a, b;
} arr[100];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i].a >> arr[i].b;
	}
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (arr[i].a == arr[j].b) cnt++;
			if (arr[i].b == arr[j].a) cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}


