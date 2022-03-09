#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int size = s.size();
    if (s=="0")
    {
        cout << 0;
        return 0;
    }
    for (int i=0; i<size; i++)
    {
        string ans = "";
        int x = s[i]-'0';
        if (i==0)
        {
            while(x!=0)
            {
              ans += (x%2 +'0');
              x = x/2;                
            }

        }
        else
        {
            for (int j=0; j<3; j++)
            {
                ans +=(x%2+'0');
                x = x/2;
            }
        }
        reverse(ans.begin(),ans.end());
        cout << ans;
    }
    return 0;
}