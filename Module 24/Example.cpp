#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for (int k = 1; k <= t; k++)
    {
        string s;
        getline(cin, s);
        string word;
        stringstream ss(s);
        map<string, int> mp;
        string wrd;
        int count = 0;
        while (ss >> word)
        {
            mp[word]++;

            if (mp[word] > count)`
            {
                count = mp[word];
                wrd = word;
            }
        }

        cout << word << " " << mp[word];
        cout << endl;
    }
}