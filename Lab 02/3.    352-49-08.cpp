//problem  name:Next Round 

// problem  no:158A
#include <iostream>
#include<conio.h>
using namespace std;

int n, k, x, y = 0, mas[10000];
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        mas[i] = x;
    }
    for (int j = 1; j <= n; j++) {
      
    if (mas[j] >= mas[k] && mas[j] > 0)
        {
            y++;
        }
    }
    cout << y;
  
  getch ();
}
