#include <iostream>  
using namespace std;  // 不要忘记加分号
int main()
{
    int n, cnt = 0;
    cin >> n;
    while (n != 1)
    {
        if (n % 2 == 0) 
            n /= 2;
        else 
            n = (3 * n + 1) / 2;
        cnt++;
    }
    cout << cnt;
    return 0; 
}