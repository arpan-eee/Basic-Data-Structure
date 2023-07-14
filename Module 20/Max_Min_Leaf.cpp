#include <bits/stdc++.h>
using namespace std;
class treeNode
{
public:
    int val;
    treeNode *left;
    treeNode *right;
    treeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int maximum(treeNode *root)
{
    if (!root)
        return 0;

    int m = root->val;

    if (!root->left && !root->right)
    {
        m = max(root->val, m);
        return max(root->val, m);
    }
    int left_max = maximum(root->left);
    int right_max = maximum(root->right);

    m = max(left_max, right_max);
    return m;
}
int minimum(treeNode *root)
{
    if (!root)
        return 10001;

    int m = root->val;

    if (!root->left && !root->right)
    {
        m = min(root->val, m);
        return max(root->val, m);
    }
    int left_max = minimum(root->left);
    int right_max = minimum(root->right);

    m = min(left_max, right_max);
    return m;
}
int sum(treeNode *root)
{
    if (!root)
        return 0;

    int l = sum(root->left);
    int r = sum(root->right);

    return l + r + root->val;
}
treeNode *treeInput()
{
    int n;
    cin >> n;
    treeNode *root;

    if (n == -1)
        root = NULL;
    else

        root = new treeNode(n);
    queue<treeNode *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        treeNode *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        treeNode *myLeft;
        treeNode *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new treeNode(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new treeNode(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int main()
{
    treeNode *root = treeInput();
    int mx = maximum(root);
    int mn = minimum(root);
    cout << mx << ' ' << mn;
    return 0;
}