#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;

        int a = 0, b = 0;
        bool aa = false, bb = false;
        char p = '0';
        vector<char> v;

        getline(cin, s);

        for (char c : s)
        {
            v.push_back(c);
        }
        for (int i = v.size() - 1; i >= 0; i--)
        {
            char c = v[i];
            if (c == '0' && p == '0')
            {
            }
            else if (c == '1' && p == '0')
            {
                if (!aa && !bb)
                {
                    a++;
                    aa = true;
                }
                else if (aa)
                {
                    b++;
                    bb = true;
                    aa = false;
                }
                else if (bb)
                {
                    a++;
                    aa = true;
                    bb = false;
                }
            }
            else if (c == '1' && p == '1')
            {
                if (aa && !bb)
                {
                    a++;
                }
                else if (bb && !aa)
                {
                    b++;
                }
            }
            p = c;
        }
        cout << a << endl;
    }
    return 0;
}