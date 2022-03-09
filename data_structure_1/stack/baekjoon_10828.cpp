#include <iostream>
#include <string>
using namespace std;

struct Stack
{
    int data[10000];
    int size;
    Stack()
    {
        size = 0;
    }
    bool empty()
    {
        if (size==0)
            return true;
        else
            return false;
    }
    void push (int a)
    {
        data[size++] = a;
    }
    int pop()
    {
        if (empty())
            return -1;
        else{
            size--;
            return data[size];
        }
    }
    int top()
    {
        if (empty())
            return -1;
        else
            return data[size-1];
    }
};

int main()
{
    Stack s;
    int n;
    string str;
    cin >> n;
    cin.ignore();
    
    while(n--)
    {
        getline(cin,str);
        if (str=="pop")
        {
            cout << s.pop() << '\n';
        }
        else if (str=="size")
        {
            cout << s.size << '\n';
        }
        else if (str=="empty")
        {
            if (s.empty())
                cout << 1 << '\n' ;
            else
                cout << 0 << '\n';
        }
        else if (str=="top")
        {
            cout << s.top() << '\n';
        }
        else
        {
            str.erase(0,5);
            int a = stoi(str);
            s.push(a);
        }
    }
    return 0;
}