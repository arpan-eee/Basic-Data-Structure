#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};
void insertTail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void visitNode(Node *&head, Node *&tail, Node *&visit, string v)
{
    Node *tmp = head;
    while (true)
    {
        if (tmp == NULL)
        {
            cout << "Not Available" << endl;
            return;
        }
        if (tmp->val == v)
        {
            visit = tmp;
            cout << visit->val << endl;
            return;
        }
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *visit = NULL;
    string s, v;
    while (true)
    {
        cin >> s;
        if (s == "end")
            break;
        insertTail(head, tail, s);
    }
    int n;
    cin >> n;
    while (n--)
    {
        cin >> v;
        if (v == "visit")
        {
            cin >> v;
            visitNode(head, tail, visit, v);
        }
        else if (v == "prev")
        {
            if (visit->prev == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << visit->prev->val << endl;
                visit = visit->prev;
            }
        }
        else if (v == "next")
        {
            if (visit->next == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << visit->next->val << endl;
                visit = visit->next;
            }
        }
    }

    return 0;
}