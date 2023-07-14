#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;

    cin >> n;
    for(int i=0;i<n;i++)
    {
        stack<char> st1, st2;
        cin >> s;
        for (char c : s)
        {
            if (c == 'A')
            {
                st1.push(c);
            }
            else if (c == 'B')
            {
                st2.push(c);
            }
        }
        if (st1.size() != st2.size())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
