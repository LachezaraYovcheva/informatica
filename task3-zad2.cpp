#include <iostream>
using namespace std;
void chisla(int m1)
{
   for(int i=m1; i>=1; i--)
    {
        cout<<i<<" ";
    }
    for(int i=2; i<=m1; i++)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int m;
    cout<<"Vavedete chislo mezdy 5 i 15: "; cin>>m;
    while(m<5 || m>15)
    {
        cout<<"Nevalidni danni."<<endl; cout<<"Vavedete chislo mezdy 5 i 15:"; cin>>m;
    }
   while(m>=1)
   {
    chisla(m);
    m--;
    cout<<endl;
   }
return 0;
}
