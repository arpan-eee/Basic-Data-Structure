#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        vector<string> v;
        string s, w;
        getline(cin, s);
        stringstream ss(s);
        map<string, int> mp;
        int lg = 0;
        string large = "";
        while (ss >> w)
        {
            mp[w]++;
            if (mp[w] > lg)
            {
                large = w;
                lg = mp[w];
            }
        }
        cout << large << " " << lg << endl;
    }
    return 0;
}