#include<bits/stdc++.h>
using namespace std;
void solve() {
	int n, m, c;
	while (cin >> n >> m >> c, (n + m + c)) {
	   int cl = m & 1 ? c : 1 - c;
	   int rl = n & 1 ? cl : 1 - cl;
	   
	   int cnt = 0;
	   int x = 8, y = 8;
	   while (x <= n and y <= m) {		
			int can_move_d = n - x;
			int can_move_r = m - y;
            if (rl and can_move_d >= 0 and can_move_r >= 0) cnt++;
			// cout << x << " " << y << endl;
			cout << can_move_d << " " << can_move_r << " " << cnt << endl;
			x++, y++;
			if (can_move_d > 0 and (can_move_d & 1)) {
				if (rl) {
					cnt += can_move_d / 2;
				} else {
					cnt += (can_move_d + 2 - 1) / 2;
				}
			} else if (can_move_d > 0) {
				cnt += can_move_d / 2;
			}
			if (can_move_r > 0 and (can_move_r & 1)) {
				if (rl) {
					cnt += can_move_r / 2;
				} else {
					cnt += (can_move_r + 2 - 1) / 2;
				}
			} else if (can_move_r > 0){
				cnt += can_move_r / 2;
			}
		}
		cout << cnt << '\n'; 
	}  
	return;        
}
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
solve();    
}
