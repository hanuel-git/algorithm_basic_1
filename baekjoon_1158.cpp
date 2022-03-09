#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    queue<int> q;
    for (int i = 1; i < n + 1; i++)
        q.push(i);
    cout << '<';
    while (q.size() > 1)
    {
        for (int j = 0; j < k-1; j++)
        {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        int x = q.front();
        q.pop();
        cout << x << ", ";
    }
    cout << q.front() << '>';

    return 0;
}