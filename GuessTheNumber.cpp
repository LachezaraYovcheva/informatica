#include <iostream>//����������� ���� � ����� �� �����
#include <cstdlib>//�� ��������� rand
#include <ctime>//�� ������� � �������
using namespace std;//�������� ����������
int main()//���������� �� �������� �������
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
srand(time(0));//�������� ����� ������ �����
num = rand()%((max - min) + 1);//�� ����������� �� �������
cout << "Guess My Number Game\n\n";//�������� �� ������
int guess = 0;//������� ��������
while (guess != num)//������ �� ������ �����
    {
    cout << "Enter a guess between "<<min<<" and "<<max<<": "; br++;
    cin >> guess;//������ ���������� �������� �� �����������
    if (guess > num)//��� ���������� � ��-������ �� ������ �������
        {
         cout << "Too high!\n\n";//�������, �� � ������
        }
    else if(guess==0) break;
    else if (guess < num)//��� ��� � ��-�����
        {
         cout << "Too low!\n\n";//�������, �� � �����
        }
    else//��� � �����
        {
         cout << "\nCorrect! You got it in ";//�������, �� � �����
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



