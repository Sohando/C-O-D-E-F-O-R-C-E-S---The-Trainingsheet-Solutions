#include<bits/stdc++.h>
#define ios ios::sync_with_stdio(false), cin.tie(0);
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
void solve() {
	string str;
	getline(cin, str);
	
	set<char> st;
	for (int i = 0; i < (int) str.size(); ++i) {		
		if (isalpha(str[i])) {
			st.insert(str[i]);
		}
	}
	cout << (int) st.size() << '\n';
	return;
}
int main() {
	ios;
	solve();
	return 0;
}




