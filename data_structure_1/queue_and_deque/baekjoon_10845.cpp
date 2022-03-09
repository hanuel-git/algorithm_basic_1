#include <iostream>
#include <string>
using namespace std;

struct Queue {
    int data[10000];
    int begin, end;
    Queue(){
        begin = 0;
        end = 0;
    }
    void push(int a){
        data[end]=a;
        end++;
    }
    int size(){
        return (end-begin);
    }
    bool empty(){
        if (begin==end)
            return true;
        else
            return false;
    }
    int pop (){
        if (empty())
            return -1;
        else{
            int temp = data[begin];
            data[begin]=0;
            begin++;
            return temp;
        }
    }
    int front(){
         return data[begin];
    }
    int back(){
         return data[end-1];
    }
};

int main()
{
    int num;
    cin >> num;
    cin.ignore();
    
    Queue q;
    
    while(num--)
    {
        string str;
        getline(cin, str);
        if (str=="front"){
            if (q.empty())
                cout << -1 << endl;
            else
                cout << q.front() << endl;
        }
        else if (str=="back"){
            if (q.empty())
                cout << -1 << endl;
            else
                cout << q.back() << endl;
        }
        else if (str=="size")
            cout << q.size() << endl;
        else if (str=="empty")
            cout << q.empty() << endl;
        else if (str=="pop"){
            if (q.empty())
                cout << -1 << endl;
            else{
                cout << q.front() << endl;
                q.pop();
            }
        }
        else{
            string p = str.substr(5);
            int n = stoi(p);
            q.push(n);
        }      
    }
    return 0;
}