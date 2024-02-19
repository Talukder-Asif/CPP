#include <iostream>
using namespace std;
int main()
{
    long int i, j, n, a, b, c, forPrint;
    cin >> n;
    for (i = 0; i < n; i++)
    {
            cin >> a >> b;
            c = b;
        for(int x = 2; x != 0; x++){
            if(a <= b){
                forPrint = b - a;
                cout << forPrint;
                if(i != n-1){
                    cout << endl;
                }
                break;
            }else{
                b = c * x;
            }
        }
    }
}