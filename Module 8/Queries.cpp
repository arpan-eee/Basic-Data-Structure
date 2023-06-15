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
void head_insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
int main()
{
    Node *head = NULL, *tail = NULL;
    int n,s,val;
    cin>>n;
    while (n--)
    {
        cin >>s>> val;
        if (s==0)
        {
            head_insert(head,tail,val);
        }
        else if (s==1)
        {
            tail_insert(head,tail,val);
        }
        cout<<head->val<<' '<<tail->val<<endl;
    }
    return 0;
}