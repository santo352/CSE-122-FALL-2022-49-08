//problem name:Bit++

//problem no.282A

#include <iostream>
#include<conio.h>
#include <string>
 
using namespace std;
 
int main()
{
    int n, x(0);
    cin >> n;
 
    string s;
    while (n--)
    {
        cin >> s;
        if (s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }
 
    cout << x << endl;
    getch ();
}
