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
void largest_f(Node *&head, Node *&largest)
{
    Node *tmp = head;
    largest = head;
    while (tmp != NULL)
    {
        if (tmp->val > largest->val)
        {
            largest = tmp;
        }
        tmp = tmp->next;
    }
}
void smallest_f(Node *&head, Node *&smallest)
{
    Node *tmp = head;
    smallest = head;
    while (tmp != NULL)
    {
        if (tmp->val < smallest->val)
        {
            smallest = tmp;
        }
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL, *tail = NULL, *largest, *smallest;
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
    largest_f(head, largest);
    smallest_f(head, smallest);
    cout << largest->val << " " << smallest->val;
    return 0;
}