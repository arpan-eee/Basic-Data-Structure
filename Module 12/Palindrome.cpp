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
void addTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
    return;
}
void reverse_function(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse_function(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << ' ';
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        addTail(head, tail, val);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    Node *tmp = head;
    while(tmp!=NULL)
    {
        addTail(head2,tail2,tmp->val);
        tmp=tmp->next;
    }
    reverse_function(head2,head2);
    Node *tmp1 = head;
    Node *tmp2 = head2;
    int flag =0;
    while(tmp1!=NULL&&tmp2!=NULL)
    {
        if(tmp1->val!=tmp2->val)
        {
            flag++;
            break;
        }
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    // if(tmp1!=tmp2)
    // flag++;
    if(flag==0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}