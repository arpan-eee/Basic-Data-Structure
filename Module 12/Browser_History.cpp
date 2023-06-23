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
void insertTail(Node *&head, Node *&tail,string val)
{
    node
    if(head==NULL)
    {

    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string s;
    while (true)
    {
        cin >> s;
        if (s == "end")
            break;
        insertTail(head,tail,s);
        cout << s << ' ';
    }

    return 0;
}