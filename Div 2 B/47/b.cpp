#include<bits/stdc++.h>
using namespace std;
void solve() {
    string a, b, c;
    cin >> a >> b >> c;
    map<char, set<char>> mp;
    if (a[1] == '<') {
        mp[a[0]].insert(a[2]);
    } else {
        mp[a[2]].insert(a[0]);
    }
    if (b[1] == '<') {
        mp[b[0]].insert(b[2]);
    } else {
        mp[b[2]].insert(b[0]);
    }
    if (c[1] == '<') {
        mp[c[0]].insert(c[2]);
    } else {
        mp[c[2]].insert(c[0]);
    }
    int flag = 0; 
    string foo = "";
    if (mp['A'].size() == 2) {
        flag++;
        foo += 'A';
    }   
    if (mp['B'].size() == 2) {
        flag++;
        foo += 'B';
    }
    if (mp['C'].size() == 2) {
        flag++;
        foo += 'C';
    }
    if (flag == 1) {
        flag = 0;
        if (mp['A'].size() == 1) {
            foo += 'A';
            flag++;
        }
        if (mp['B'].size() == 1) {
            foo += 'B';
            flag++;
        }
        if (mp['C'].size() == 1) {
            foo += 'C';
            flag++;
        }
        if (flag == 1) {        
            flag = 0;
            if (mp['A'].empty()) {
                flag++;
                foo += 'A';
            }
            if (mp['B'].empty()) {
                flag++;
                foo += 'B';
            }
            if (mp['C'].empty()) {
                flag++;
                foo += 'C';
            }
            if (flag == 1) {    
                cout << foo << endl;
            } else {
                cout << "Impossibel" << endl;
            }
        } else {
            cout << "Impossible" << endl;
        }
    } else {
        cout << "Impossible" << endl;    
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
