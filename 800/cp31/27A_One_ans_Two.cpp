#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];

        long long ans = -1;
        for (int i = 0; i < n; i++)
        {
            long long Twos_till_k = 0;
            long long Twos_after_k = 0;

            for (int j = 0; j <= i; j++)
                if (a[j] == 2)
                    Twos_till_k++;
            for (int j = i + 1; j < n; j++)
                if (a[j] == 2)
                    Twos_after_k++;
                
            if (Twos_till_k == Twos_after_k)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}