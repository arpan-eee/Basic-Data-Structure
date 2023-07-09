#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    char c;

    cin >> n;
    while (n--)
    {
        stack<char> vstr;
        cin >> s;
        for (char c : s)
        {
            if (vstr.empty())
            {
                vstr.push(c);
            }
            else if ((c == 'A' && vstr.top() == 'B') || (c == 'B' && vstr.top() == 'A'))
            {
                vstr.pop();
            }
            else
            {
                vstr.push(c);
            }
        }
        if (vstr.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    
    }

    return 0;
}