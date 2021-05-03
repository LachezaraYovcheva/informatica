#include <iostream>//осъществява вход и изход на данни
#include <cstdlib>//за функцията rand
#include <ctime>//за времето в момента
using namespace std;//глобални декларации
int main()//декларация на главната функция
{
int min, max, num, br=0, n, br1=0;
cout<< "Vavedete min vazmosho chislo: "; cin>> min;
cout<< "Vavedete max vazmosho chislo: "; cin>> max;
while (min<=0 || max<=0)
    {
        cout<<"Nevalidni danni.";
        cout<<"Vavedete min vazmosho chislo po-golama ot 0: "; cin>>min;
        cout<<"Vavedete max vazmosho chislo po-golama ot 0: "; cin>>max;
    }
srand(time(0));//различно число спрямо време
num = rand()%((max - min) + 1);//за ограничение на числата
cout << "Guess My Number Game\n\n";//заглавие на играта
int guess = 0;//начална стойност
while (guess != num)//докато не станат равни
    {
    cout << "Enter a guess between "<<min<<" and "<<max<<": "; br++;
    cin >> guess;//вземам стойността въведена от потребителя
    if (guess > num)//ако въведеното е по-голямо от рандом числото
        {
         cout << "Too high!\n\n";//извежда, че е високо
        }
    else if(guess==0) break;
    else if (guess < num)//ако пък е по-малко
        {
         cout << "Too low!\n\n";//извежда, че е малко
        }
    else//ако е равно
        {
         cout << "\nCorrect! You got it in ";//извежда, че е вярно
        }
        if(br==5)
     {
         int p=num;
         while(p!=0)
         {
             n=p%10;
             p=p/10;
             switch(n)
             {
                 case 0: br1=br1+1; break;
                 case 1: br1=br1+0; break;
                 case 2: br1=br1+0; break;
                 case 3: br1=br1+0; break;
                 case 4: br1=br1+0; break;
                 case 5: br1=br1+0; break;
                 case 6: br1=br1+1; break;
                 case 7: br1=br1+0; break;
                 case 8: br1=br1+2; break;
                 case 9: br1=br1+1; break;
             }
         }
        cout<<"Chisloto ima "<<br1<<" krakcheta"<<endl;
     }

     }
     cout<<br;

    return 0;
}



