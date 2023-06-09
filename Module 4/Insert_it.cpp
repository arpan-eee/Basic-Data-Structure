#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m,o;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    cin >> m;
    int arr[m];

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    cin >> o;
    v.insert(v.begin() + o, arr, arr + m);

    for(int i=0;i<n+m;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}