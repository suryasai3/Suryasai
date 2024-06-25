#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 1e6 + 10;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> wk;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            wk.push_back({i, a});
        }

        sort(wk.begin(), wk.end(), cmp);

        long long idx = 1;
        long long lz = wk[0].second;
        long long b[N];
        
        for (int i = 0; i < n;) {
            while (idx < n && lz >= wk[idx].second) {
                lz += wk[idx].second;
                idx++;
            }
            for (int t = i; t < idx; t++) {
                b[wk[t].first] = idx;
            }
            i = idx;
            if (idx < n) {
                lz += wk[idx].second;
                idx++;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << b[i] - 1 << ' ';
        }
        cout << endl;
    }

    return 0;
}

