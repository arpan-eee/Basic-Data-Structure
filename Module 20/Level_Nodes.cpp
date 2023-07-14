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
vector<int> print_level(treeNode *root, int l)
{
    int flag = 0;
    vector<int> v;
    if (!root)
        return v;

    queue<pair<treeNode *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        pair<treeNode *, int> pr = q.front();
        treeNode *node = pr.first;
        int level = pr.second;
        q.pop();

        if (l == level)
        {
            v.push_back(node->val);
            flag++;
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    if (flag == 0)
        cout << "Invalid";
    return v;
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
    int level;
    cin >> level;
    int *t;
    vector<int> v = print_level(root, level);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }

    return 0;
}