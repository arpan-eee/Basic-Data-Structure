#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s1 = 0, s2 = n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s1; j++)
        {

            cout << " ";
        }
        if (i < n / 2)
        {
            cout << "\\";
            s1++;
        }
        else if (i == n / 2)
        {
            cout << "X";
            s1--;
        }

        else
        {
            s1--;
            cout << "/";
        }

        for (int j = 0; j < s2; j++)
        {

            cout << " ";
        }
        if (i < n / 2)
        {
            cout << "/";
            s2-=2;
        }
        else if (i == n / 2)
        {
            s2=1;
        }

        else
        {
            s2=s2+2;
            cout << "\\";
        }


        cout << endl;
    }
    cin >> n;

    return 0;
}