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
    tail = newNode;
    return;
}
void sort_list(Node *&head, Node *&tail)
{
    Node*tmp1,*tmp2;
    for(tmp1=head;tmp1!=NULL;tmp1=tmp1->next)
    {
        for(tmp2=tmp1->next;tmp2!=NULL;tmp2=tmp2->next)
        {
            if(tmp1->val>tmp2->val)
            {
                swap(tmp1->val,tmp2->val);
            }
        }
    }

}
void delete_duplicate(Node *&head, Node *&tail)
{
    Node*deleteNode,*tmp;
    tmp=head;
    while(tmp->next!=NULL)
    {
        if(tmp->val==tmp->next->val)
        {
            deleteNode=tmp->next;
            tmp->next=tmp->next->next;
            delete deleteNode;
        }
        if(tmp->next==NULL)
        {
            break;
        }
        else if(tmp->val!=tmp->next->val)
        {
            tmp=tmp->next;
        }
    }
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
    sort_list(head,tail);
    delete_duplicate(head,tail);
    {
        Node*tmp=head;
        while(tmp!=NULL)
        {
            cout<<tmp->val<<" ";
            tmp=tmp->next;
        }
    }
    return 0;
}