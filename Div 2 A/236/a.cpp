#include<bits/stdc++.h>
using namespace std;
int main() {
	int arr[5][5];
	int cnt, posx = 0, posy = 0;
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cin >> arr[i][j];
			if (arr[i][j]) {
				posx = i + 1, posy = j + 1;
			}
		}
	}		
	if (posx == 3) {
		cnt = abs(3 - posy);
	} else if (posy == 3) {
		cnt = abs(posx - 3);
	} else {
		cnt = abs(3 - posx) + abs(3 - posy);
	}
	cout << cnt << '\n';
	return 0;
}

