#include <bits/stdc++.h>
using namespace std;
void print(stack<char> clr)
{
    if (!clr.empty())
    {
        int x = clr.top();
        clr.pop();
        print(clr);
        cout << x;
    }
}
int main()
{
    int n, m;
    char c;
    stack<char> clr, abc;

    cin >> n;
    while (n--)
    {
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> c;
            if (clr.empty())
            {
                clr.push(c);
            }
            else if ((clr.top() == 'R' && c == 'B') || (clr.top() == 'B' && c == 'R'))
            {
                clr.pop();
                clr.push('P');
            }
            else if ((clr.top() == 'R' && c == 'G') || (clr.top() == 'G' && c == 'R'))
            {
                clr.pop();
                clr.push('Y');
            }
            else if ((clr.top() == 'B' && c == 'G') || (clr.top() == 'G' && c == 'B'))
            {
                clr.pop();
                clr.push('C');
            }
            else if ((clr.top() == 'R' && c == 'R') || (clr.top() == 'G' && c == 'G') || (clr.top() == 'B' && c == 'B'))
            {
                clr.pop();
            }
            else
            {
                clr.push(c);
            }
        }
        // while (!clr.empty())
        // {
        //     cout << clr.top();
        //     clr.pop();
        // }
        print(clr);
        cout << endl;
    }

    return 0;
}