#include<iostream>

using namespace std;

class que
{
private:
    int a[10000];
    int front, back;
public:
    que() :front(0), back(1) {}
    void push(int n)
    {
        if (back != front)
        {
            a[back] = n;
            back = (back + 1) % 10000;
        }
    }
    void pop()
    {
        if (front + 1 != back)
        {
            front = (front + 1) % 10000;
        }
        else
        {
            cout << "ERR_CANNOT_POP" << endl;
        }

    }
    void query()
    {
        if (front + 1 != back)
        {
            cout << a[front + 1] << endl;
        }
        else
        {
            cout << "ERR_CANNOT_QUERY" << endl;
        }
    }
    void size()
    {
        cout << (back + 10000 - front - 1) % 10000 << endl;
    }
};

int queue1()
{
    int a, b, num;
    que qu;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> a;
        switch (a)
        {
        case 1:cin >> b; qu.push(b); break;
        case 2:qu.pop(); break;
        case 3:qu.query(); break;
        case 4:qu.size(); break;
        }
    }

    return 0;
}