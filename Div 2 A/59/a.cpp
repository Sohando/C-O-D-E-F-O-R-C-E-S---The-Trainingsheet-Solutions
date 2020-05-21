#include<bits/stdc++.h>
using namespace std;
int main() {
	string a;
	cin >> a;
	int x = 0, y = 0;
	for (int i = 0; i < (int) a.length(); ++i) {
		if (isupper(a[i])) x++;
		else y++;
	}
	if (x > y) for (int i = 0; i < (int) a.length(); ++i) cout << char(toupper(a[i]));
	else for (int i = 0; i < (int) a.length(); ++i) cout << char(tolower(a[i]));
	return 0;
}
