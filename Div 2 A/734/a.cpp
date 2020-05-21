#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string str;
    cin >> n;
    cin >> str;
    int a = count(str.begin(), str.end(), 'A');
    int d = n - a;
    if (a == d) {cout << "Friendship\n"; return 0;}
    a < d ? cout << "Danik\n" : cout << "Anton\n";
    return 0;
}
