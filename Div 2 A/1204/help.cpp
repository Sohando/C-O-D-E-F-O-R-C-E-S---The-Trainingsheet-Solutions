#include<bits/stdc++.h>
using namespace std;

int main() {
    auto bin = [&](int n) {
        string ans = "";
        while (n) {
            ans += n % 2 + '0';
            n /= 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    };
    auto fur = [&](int n) {
        string ans = "";
        while (n) {
            ans += n % 4 + '0';
            n /= 4;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    };
    for (int i = 1; i <= 1025; ++i) {
        cout << i << ": " << bin(i) << " " << fur(i) << endl;
    }
}
