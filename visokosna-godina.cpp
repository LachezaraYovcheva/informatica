#include <iostream>
using namespace std;
int main()
{
    int god;
    cout<<"Vavedete godina: "; cin>>god;
    if(god%400==0 && god%100==0)
        cout<<"Godinata e visokosna";
    else if(god%100==0 && god%4==0)
        cout<<"Godinata ne e visokosna";
    else if(god%4==0 || god%400==0)
        cout<<"Godinata e visokosna";
    else if(god%4!=0 || god%400!=0)
        cout<<"Godinata ne e visokosna";
    return 0;
}
