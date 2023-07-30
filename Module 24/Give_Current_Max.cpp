#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->marks = marks;
        this->roll = roll;
        this->name = name;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
            return true;
        else if (a.marks > b.marks)
            return false;
        else
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    int m;
    cin >> m;
    while (m--)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
        else if (a == 1)
        {
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
        else if (a == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                else
                    cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }
    // while (!pq.empty())
    // {
    //     cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    //     pq.pop();
    // }
    return 0;
}