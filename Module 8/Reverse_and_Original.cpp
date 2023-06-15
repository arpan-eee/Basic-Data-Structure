#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_linked_list(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->val << ' ';
    print_linked_list(head->next);
}
void print_linked_list_reversely(Node *h)
{
    if (h == NULL)
    {
        return;
    }
    print_linked_list_reversely(h->next);
    cout << h->val << ' ';
}
void tail_insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{
    Node *head = NULL, *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        tail_insert(head, tail, val);
    }
    print_linked_list_reversely(head);
    cout<<endl;
    print_linked_list(head);
    return 0;
}