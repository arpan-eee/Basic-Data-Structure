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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
}
void delete_a_position(Node *&head, int p)
{
    if (p == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }
    int i = 1;
    Node *tmp = head;
    while (i < p)
    {
        tmp = tmp->next;
        i++;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void insert_at_pos(Node *&head, int v, int p)
{
    Node *newNode = new Node(v);
    if (p == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    int i = 1;
    Node *tmp = head;
    while (i < p)
    {
        tmp = tmp->next;
        i++;
    }
    // tmp ekhon pos node e
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void print_linked_list(Node *head)
{
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at Position" << endl;
        cout << "Option 4: Delete at Position" << endl;
        cout << "Option 5: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
            cout << "Inserted at tail" << endl;
        }
        else if (op == 2)
        {
            print_linked_list(head);
            cout << "Link List Printed" << endl;
        }
        else if (op == 3)
        {
            cout << "Please enter position and then value: ";
            int v, p;
            cin >> p >> v;
            insert_at_pos(head, v, p);
            cout << "Inserted at required Position" << endl;
        }
        else if (op == 4)
        {
            cout << "Please enter position that you want to delete: ";
            int p;
            cin >> p;
            delete_a_position(head, p);
            cout << "Deleted at required Position" << endl;
        }
        else if (op == 5)
        {
            break;
        }
    }
    return 0;
}