#include <iostream>
using namespace std;

const int MAX = 1000000;
int prime[MAX]; // 소수 저장
int pn; // 소수 개수 
bool check[MAX + 1];

void goldbach(int n)
{
    int ans = 0;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (n <= prime[i])
        {
            x = i - 1;
            break;
        }
    }
    for (int k = 0; k <= x && prime[k] <= (n / 2); k++)
    {
        if (check[n - prime[k]] == false)
            ans++;
    }
    cout << ans << '\n';
}

int main()
{
    int n;
    cin >> n;

    // 에라토스테네스의 체
    check[0] = check[1] = true;
    for (int i = 2; i <= MAX; i++)
    {   // i*i<=MAX가 틀린 이유 : prime에 모든 소수를 저장하기 때문.
        // 만약 prime없이 check만 사용했다면 i*i으로 해도 되는데,
        // prime에 소수를 하나하나 저장해줘야 하기 때문에 i가 끝까지 돌아야 한다.
        if (check[i] == false)
        {
            prime[pn++] = i;
            for (int j = i + i; j <= MAX; j += i)
                check[j] = true;
        }
    }

    // 골드바흐 파티션의 수 구하기
    while (n--)
    {
        int x;
        cin >> x;
        goldbach(x);
    }
    return 0;
}