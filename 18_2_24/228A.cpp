#include <iostream>
using namespace std;
int main()
{
    int i, arr[4], same = 0, a = 999, b = 999, c = 999;
    for (i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 4; i++)
    {
        if (i != a && i != b && i != c)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (arr[i] == arr[j])
                {
                    same++;
                    if (a == 999)
                    {
                        a = j;
                    }
                    else if (b == 999 && a != 999)
                    {
                        b = j;
                    }
                    else if (c == 999 && b != 999)
                    {
                        c = j;
                    }
                }
            }
        }
    }
    cout << same;
}