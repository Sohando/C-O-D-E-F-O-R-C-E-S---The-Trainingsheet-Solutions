#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;    		
	int plc = 0, crm = 0, cnt = 0;
	cin >> n;
	for (int i = 0, x; i < n; ++i) {
		cin >> x;
		x < 0 ? crm++ : plc += x;		
		if (!plc and crm) cnt++, crm--;
		if (plc and crm) {
			plc--;
			crm--;
		}
	}
	cout << cnt << '\n';
	return 0;
}
