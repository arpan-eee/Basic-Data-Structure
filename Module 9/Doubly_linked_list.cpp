#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
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
void insert_at_pos(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    if(head==NULL && pos==0)
    {
        head=newNode;
        tail=newNode;
    }
    if (pos == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    if (tmp->next == NULL)//inserting at tail(complexity increases O(N):Normal Insert Tail Function Complexity O(1))
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
void size_measure(Node *&head, int &size)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        cnt++;
    }
    size = cnt;
}
int main()
{
    int size = 0;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    print_normal(head);
    print_reverse(tail);
    insert_at_pos(head, tail, 0, 100);
    print_normal(head);
    print_reverse(tail);
    size_measure(head, size);
    cout << size;

    return 0;
}