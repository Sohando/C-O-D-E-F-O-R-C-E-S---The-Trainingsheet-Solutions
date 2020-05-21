#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    pair<int, int> arr[n + 1];
    int faces[] = {-1, 2, 1, 4, 3, 6, 5};
    vector<pair<int, int>> possible(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i].first >> arr[i].second;        
    }
    possible[1] = make_pair(x, faces[x]);
    for (int i = 2; i <= n; ++i) {
        vector<int> current(7, 0);
        current[arr[i].first] = 1;
        current[arr[i].second] = 1;
        current[faces[arr[i].first]] = 1;
        current[faces[arr[i].second]] = 1;
        int not1 = 0, not2 = 0;
        for (int d = 1; d <= 6; ++d) {
            if (!current[d]) {
                not1 = not1 == 0? d : not1;
                not2 = not1 ? d : not2;
            }
        }
        possible[i] = make_pair(not1, not2);
    }
    for (int i = 1; i <= n; ++i) {
        cout << possible[i].first << " " << possible[i].second << endl;
    }
    return 0;
}
