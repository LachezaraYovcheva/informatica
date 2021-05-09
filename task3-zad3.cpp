#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int m,p=1;
    cout<<"Vavedete chislo mezdy 5 i 15: "; cin>>m;
    while(m<5 || m>15)
    {
        cout<<"Nevalidni danni."<<endl; cout<<"Vavedete chislo mezdy 5 i 15:"; cin>>m;
    }
    while(m>=1)
    {
    for(int i=m; i>=1; i--)
    {
        cout<<"*"<<" ";
    }
    m--;
    cout<<endl<<setw(p=p+2);
    }
return 0;
}
