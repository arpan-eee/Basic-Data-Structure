#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_index(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    if (pos == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }
    else
    {
        Node *tmp = head;
        for (int i = 1; i < pos; i++)
        {
            tmp = tmp->next;
        }
        if (tmp->next == NULL)
        {
            tmp->next = newNode;
            newNode->prev = tmp;
            tail = newNode;
            return;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
        newNode->next->prev = newNode;
        newNode->prev = tmp;
    }
}
void size_f(Node *tmp, int &size)
{
    size = 0;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
}
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
    int n, pos, val;
    cin>>n;
    int size;
    Node *head = NULL;
    Node *tail = NULL;
    while (n--)
    {
        cin >> pos >> val;
        size_f(head, size);
        if (pos > size)
            cout << "Invalid" << endl;
        else
        {
            insert_index(head, tail, pos, val);
            cout<<"L -> ";
            print_normal(head);
            cout<<"R -> ";
            print_reverse(tail);
        }
    }
    return 0;
}