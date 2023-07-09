#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> ticket;
    int n, a;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a == 0)
        {
            cin >> s;
            ticket.push(s);
        }
        else if (a == 1)
        {
            if (ticket.empty())
                cout << "Invalid" << endl;
            else
            {
                cout << ticket.front() << endl;
                ticket.pop();
            }
        }
    }
    return 0;
}