#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int n, max, min, num;
    max=2;
    min=0;
    srand(time(0));
    num = rand()%((max - min) + 1);
    cout<<"0 e kamak, 1 e nozhiza, 2 e hartia "<<endl;
    cout<<"Vavedete edno ot chislata 0,1,2: ";cin>>n;
    if(num==0 && n==0) cout<<"Computara e kamak. Vie sazhto ste kamak. Resultatat e raven.";
    else if(num==0 && n==1) cout<<"Computara e kamak. Vie ste nozhiza. Vie gubite.";
    else if(num==0 && n==2) cout<<"Computara e kamak. Vie ste hartia. Vie pechelite.";
    else if(num==1 && n==0) cout<<"Computara e nozhiza. Vie ste kamak. Vie pechelite.";
    else if(num==1 && n==1) cout<<"Computara e nozhiza. Vie sazhto ste nozhiza. Resultatat e raven.";
    else if(num==1 && n==2) cout<<"Computara e  nozhiza. Vie ste hartia. Vie gubite.";
    else if(num==2 && n==0) cout<<"Computara e  hartia. Vie ste kamak. Vie gubite.";
    else if(num==2 && n==1) cout<<"Computara e  hartia. Vie ste nozhiza. Vie pechelite.";
    else if(num==2 && n==2) cout<<"Computara e  hartia. Vie sazhto ste hartia. Resultatat e raven.";

return 0;
}
