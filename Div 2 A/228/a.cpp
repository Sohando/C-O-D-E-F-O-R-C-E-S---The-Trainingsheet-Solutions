#include<bits/stdc++.h>
using namespace std;
int main() {
	set<int> st;
	int x;
	for (int i = 0; i < 4; ++i) {
		cin >> x;
		st.insert(x);
	}
	cout << 4 - (int)st.size() << endl;
	return 0;
}



