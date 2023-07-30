#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> s;
        vector<int> v;
        int n;
        cin >> n;
        while (n--)
        {
            int a;
            cin >> a;
            s.insert(a);
            v.push_back(a);
        }
        cout << v.size() - s.size() << endl;
    }
    return 0;
}