#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b,c;
    char s,q;
    cin >> a >> s >> b >> q >> c;
    int res;
    switch (s) 
    {
        case '+':
        res = a+b;
        break;
        case '-':
        res = a-b;
        break;
        case '*':
        res = a*b;
        break;
    }

    if (res == c)
    {
        cout << "Yes";
    }
        
    else
    {
        cout << res;
    }   
    return 0;
}
