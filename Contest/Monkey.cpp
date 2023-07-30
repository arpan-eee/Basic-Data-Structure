#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> v;
    char c;
    string s;
    while (getline(cin, s))
    {
        for (char c : s)
        {
            if (c != ' ')
                v.push_back(c);
        }
        sort(v.begin(), v.end());
        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it;
        }
        cout << endl;
        v.clear();
    }
    
    return 0;
}