#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        set<int> s, s2;
        cin >> m;
        map<int, int> mp;
        while (m--)
        {
            int w;
            cin >> w;
            mp[w]++;
            s.insert(w);
        }

        int a = -1000000000, b = 0;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            if (b < mp[*it])
            {
                b = mp[*it];
                a = *it;
            }
        }

        for (auto it = s.begin(); it != s.end(); it++)
        {
            if (b == mp[*it])
                s2.insert(*it);
        }
        for (auto it = s2.begin(); it != s2.end(); it++)
        {
            if (*it > a)
                a = *it;
        }
        cout << a << " " << mp[a] << endl;
    }
    return 0;
}