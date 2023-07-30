#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        map<int, int> mp;
        int m;
        cin >> m;
        while (m--)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second % 2 != 0)
                cout << it->first;
        }
        cout << endl;
    }
    return 0;
}