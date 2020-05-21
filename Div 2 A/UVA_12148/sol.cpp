#include<bits/stdc++.h>
using namespace std;
struct date {
    int d, m, y, c;
};
int month[] = {-1, 1, -1, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1};
void solve(int T) {
    auto leapyear = [&](int year) {
        return (year % 400 == 0) or (year % 4 == 0 and year % 100);
    };
    date in[T];
    for (int i = 0; i < T; ++i) {
        cin >> in[i].d >> in[i].m >> in[i].y >> in[i].c;
    }
    int cnsm = 0, day = 0;
    for (int i = 1; i < T; ++i) {
        if (in[i - 1].d == 30 or in[i - 1].d == 31 or in[i - 1].d == 28) {
            if (in[i - 1].d == 28) {
                if (in[i].d == 1 and in[i].m == 3 and in[i].y == in[i - 1].y) {
                    day++;
                    cnsm += (in[i].c - in[i - 1].c);
                } else if (in[i].d == 29 and in[i].m == 2 and in[i].y == in[i - 1].y) {
                    day++;
                    cnsm += (in[i].c - in[i - 1].c);
                } else {
                    if (in[i].d == 29 and in[i - 1].m  == in[i].m and in[i - 1].y == in[i].y) {
                        day++;
                        cnsm += (in[i].c - in[i - 1].c);
                    }                        
                }
            } else if (in[i - 1].m == 12 and in[i - 1].d == 31) {
                 if (in[i].d == 1 and in[i].m == 1 and in[i - 1].y + 1 == in[i].y) {
                    day++;
                    cnsm += (in[i].c - in[i - 1].c);
                 }
            } else {
                if (in[i - 1].d == 31) {
                    if (in[i].d == 1 and in[i - 1].m + 1 == in[i].m and in[i - 1].y == in[i].y) {
                        day++;
                        cnsm += (in[i].c - in[i - 1].c);
                    }
                } else if (in[i - 1].d == 30) {
                    if (!month[in[i - 1].m]) {
                        if (in[i].d == 1 and in[i - 1].m + 1 == in[i].m and in[i].y == in[i - 1].y) {
                            day++;
                            cnsm += (in[i].c - in[i - 1].c);
                        }
                    } else if (in[i].d == 31 and in[i].m == in[i - 1].m and in[i].y == in[i - 1].y) {
                        day++;
                        cnsm += (in[i].c - in[i - 1].c);
                    }
                }
            }
        } else if (leapyear(in[i - 1].y)) {
            if (in[i - 1].m == 2 and in[i - 1].d == 29) {
                if (in[i].d == 1 and in[i].m == 3 and in[i].y == in[i - 1].y) {
                    day++;
                    cnsm += (in[i].c - in[i - 1].c);
                } 
            } else {
                if (in[i - 1].d + 1  == in[i].d) {
                    if (in[i].m == in[i - 1].m and in[i].y == in[i - 1].y) {
                        day++;
                        cnsm += (in[i].c - in[i - 1].c);
                    }
                }
            }
        } else {
            if (in[i - 1].d + 1  == in[i].d) {
                if (in[i].m == in[i - 1].m and in[i].y == in[i - 1].y) {
                    day++;
                    cnsm += (in[i].c - in[i - 1].c);
                }
            }
        }
    }
    cout << day << " " << cnsm << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    while (cin >> T, T) {
        solve(T);
    }
    return 0;
}
