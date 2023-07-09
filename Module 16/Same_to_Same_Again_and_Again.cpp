#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st1;
    queue<int> qu1;
    list<int> li1, li2;
    int n, m, val;
    int flag = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        st1.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> val;
        qu1.push(val);
    }
    for (int i = 0; i < n; i++)
    {
        li1.push_back(st1.top());
        st1.pop();
    }
    for (int i = 0; i < m; i++)
    {
        li2.push_back(qu1.front());
        qu1.pop();
    }

    if (li1 == li2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}