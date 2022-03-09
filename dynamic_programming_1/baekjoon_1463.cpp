#include <iostream>
using namespace std;

int arr[1000000];

int go(int n)
{
    if (n==1)
        return 0;
    if (arr[n] > 0)
        return arr[n];
    
    int temp = 0;
    arr[n] = go(n-1) + 1;
    if (n % 3 == 0)
    {
        temp = go(n/3) + 1;
        if (arr[n] > temp)
            arr[n] = temp;
    }
    if (n % 2 == 0)
    {
        temp = go(n/2) + 1;
        if (arr[n] > temp)
            arr[n] = temp;
    }
    return arr[n];
}
int main()
{
    int n;
    cin >> n;
    
    cout << go(n);
}