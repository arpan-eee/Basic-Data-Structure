#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    string s;
    stack<char> clr, abc;
    cin >> n;
    while (n--)
    {

        cin >> m;
        cin >> s;
        for (char c : s)
        {
            if (clr.empty())
            {
                clr.push(c);
            }
            else if ((clr.top() == 'R' && c == 'B') || (clr.top() == 'B' && c == 'R'))
            {
                clr.pop();
                if (!clr.empty() && clr.top() == 'P')
                {
                    clr.pop();
                }
                else
                {
                    clr.push('P');
                }
            }
            else if ((clr.top() == 'R' && c == 'G') || (clr.top() == 'G' && c == 'R'))
            {
                clr.pop();
                if (!clr.empty() && clr.top() == 'Y')
                {
                    clr.pop();
                }
                else
                {
                    clr.push('Y');
                }
            }
            else if ((clr.top() == 'B' && c == 'G') || (clr.top() == 'G' && c == 'B'))
            {
                clr.pop();
                if (!clr.empty() && clr.top() == 'C')
                {
                    clr.pop();
                }
                else
                {
                    clr.push('C');
                }
            }
            else if (clr.top() == c)
            {
                clr.pop();
            }
            else
            {
                clr.push(c);
            }
        }
        while (!clr.empty())
        {
            abc.push(clr.top());
            clr.pop();
        }
        while (!abc.empty())
        {
            cout << abc.top();
            abc.pop();
        }
        cout << endl;
    }

    return 0;
}