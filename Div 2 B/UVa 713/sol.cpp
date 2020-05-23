#include<bits/stdc++.h>
using namespace std;
struct Big_Integer {
    string a, b, ans;
    int szA, szB;
    Big_Integer() {}
    Big_Integer(string x, string y) : a(x), b(y), szA((int) a.size()), szB((int) b.size()) {       
        if (szB > szA) {
            swap(a, b);
            swap(szA, szB);
        }
        ans = "";
    }
    void add() {        
        int i = szA - 1, j = szB - 1, rem = 0, ad = 0, u, v, sum;
        while (i >= 0 and j >= 0) {
            u = a[i] - '0';
            v = b[j] - '0';
            sum = u + v + rem;
            rem = sum / 10;
            ad = sum % 10;
            ans += ad + '0';
            --i, --j;            
        }
        while (i >= 0) {
            u = a[i] - '0';
            sum = rem + u;
            rem = sum / 10;
            ad = sum % 10;
            ans += ad + '0';
            --i;
        }
        while (j >= 0) {
            v = b[j] - '0';
            sum = rem + v;
            rem = sum / 10;
            ad = sum % 10;
            ans += ad + '0';
            --j;          
        }
        if (rem > 0) ans += rem + '0';        
    }
};
void solve(int T) {
    string x, y;
    cin >> x >> y;
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    Big_Integer obj(x, y);    
    obj.add();
    // reverse(obj.ans.begin(), obj.ans.end());
    // cout << obj.a << " " << obj.b <<" " << obj.ans << endl;
    int sz = (int) obj.ans.size(), i = 0;   
    if (sz == 1) {
        cout << obj.ans << '\n';
        return;
    } 
    while (obj.ans[i] == '0') i++;
    for (; i < sz; ++i) cout << obj.ans[i];
    cout << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        solve(T);    
    } 
    return 0;    
}
