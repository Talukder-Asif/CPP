#include <iostream>
#include <string>

using namespace std;
int main(){
    string str1, str2;
    int n, s;
    cin >> str1 >> str2;
    n = str1.length();
    char str[n+1];
    for(int i = n-1; i >= 0; i--)
    {   
        char temp = str1[i];
        int x = int(temp);
        char temb = str2[i];
        int y = int(temb);
        s = x + y - 96;
        if(s == 0){
            str[i] = '0';
        }else if(s == 1){
            str[i] = '1';
        }else if (s == 2){
            str[i] = '0';
        }
    }
    str[n] = '\0';
    cout << str;
    return 0;
}