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
void size_measure(Node *&head, int &size)
{
    size = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
}
void print_middle(Node *&head, int &size)
{
    if (size == 1)
    {
        cout << head->val;
        return;
    }
    Node *tmp = head;
    for (int i = 1; i < size / 2; i++)
    {
        tmp = tmp->next;
    }
    if (size % 2 != 0)
        cout << tmp->next->val;
    else
    {
        cout << tmp->val << ' ' << tmp->next->val;
    }
}
int main()
{
    Node *head = NULL, *tail = NULL;
    int val, size = 0;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        tail_insert(head, tail, val);
    }
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
                swap(i->val, j->val);
        }
    }
    size_measure(head, size);
    print_middle(head, size);

    return 0;
}