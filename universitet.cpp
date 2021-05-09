#include <iostream>
using namespace std;
int main()
{
    double m=10000;
    for(int i=0;i<10;i++)
    {
        m=m*6/100+m;
    }
    for(int i=0;i<4;i++)
    {
        m=m*6/100+m;
    }
     cout<<"Sumata neobshodima za chetirigogishno obuchenie sled 10 goini e "<<m<<" dolara.";
    return 0;
}
