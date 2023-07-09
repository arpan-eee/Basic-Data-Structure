#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    char c;
    stack<char> st1,st2;

    cin >> n;
    while (n--)
    {
        cin >> s;
        for (char c : s)
        {
            if (c=='A')
            {
                st1.push(c);
            }
            else if (c=='B')
            {
                st2.push(c);
            }
        }
        if (st1.size()==st2.size())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        while(!st1.empty())
        {
            st1.pop();
        }
        while(!st2.empty())
        {
            st2.pop();
        }
    }

    return 0;
}
