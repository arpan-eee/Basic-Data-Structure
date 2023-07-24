#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m;
    while (m--)
    {
        set<int> s;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        auto it = s.end();
        while (it != s.begin())
        {
            it--;
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}