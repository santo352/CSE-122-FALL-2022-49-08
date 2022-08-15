//problem  name:Team

// problem  no:231A

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int m,x,y,z,count=0;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>x>>y>>z;
        if( x+y+z >=2 )
        {
            count++;
        }
    }
    cout<<count<<endl;
  getch();
}
