#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

int solve(vector<int> &a) {
    int n = a.size();
    
    // Check if already strictly increasing
    bool strictlyIncreasing = true;
    for(int i = 0; i < n - 1; i++) {
        if(a[i] >= a[i + 1]) {
            strictlyIncreasing = false;
            break;
        }
    }
    if(strictlyIncreasing) return 0;

    int operation = 0;

    // Process from right to left
    for(int i = n - 1; i > 0; i--) {
        while(a[i - 1] >= a[i]) {
            if(a[i - 1] == 0) return -1; // impossible to reduce further
            a[i - 1] /= 2;
            operation++;
        }
    }

    // Final check
    for(int i = 0; i < n - 1; i++) {
        if(a[i] >= a[i + 1]) return -1;
    }

    return operation;
}

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << solve(a) << "\n";
    }

    return 0;
}
