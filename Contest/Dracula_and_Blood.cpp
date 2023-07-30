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

        getline(cin, s);

        for (char c : s)
        {
            if (c == '1'&& p == '0')
            {
                if (!aa && !bb)
                {
                    a++;
                    aa = true;
                }
                if (aa)
                {
                    b++;
                    bb = true;
                    aa = false;
                }
                if (bb)
                {
                    a++;
                    aa = true;
                    bb = false;
                }
            }
            else if (c == '1' && p == '1')
            {
                if (aa)
                {
                    a++;
                }
                if (bb)
                {
                    b++;
                }
            }
            p = c;
        }
        cout << b << " " << a << endl;
    }
    return 0;
}