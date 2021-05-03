#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	cout << "Enter your lottery pick (three digits): ";
	int guess = 0;
	int lottery,lotteryDigit1=0,lotteryDigit2=0,lotteryDigit3=0,lotteryDigit=0;
	cin >> guess;

	while(lotteryDigit1==lotteryDigit2 || lotteryDigit2==lotteryDigit3 || lotteryDigit1==lotteryDigit3 || lotteryDigit1==0)
    {
    srand(time(0));
    lottery = rand() %((999 - 100) + 1);
    lotteryDigit1 = lottery / 100;
	lotteryDigit = lottery % 100;
	lotteryDigit2 = lotteryDigit / 10;
	lotteryDigit3 = lottery % 10;
    }
	int guessDigit1 = guess / 100;
	int guessDigit = guess % 100;
	int guessDigit2 = guessDigit / 10;
	int guessDigit3 = guess % 10;
	cout << "The lottery number is " << lottery << endl;

	if( guessDigit1 == lotteryDigit1 && guessDigit2 == lotteryDigit2
            || guessDigit1 == lotteryDigit1 && guessDigit2 == lotteryDigit3
            || guessDigit1 == lotteryDigit1 && guessDigit3 == lotteryDigit2
            || guessDigit1 == lotteryDigit1 && guessDigit3 == lotteryDigit3
            || guessDigit1 == lotteryDigit2 && guessDigit2 == lotteryDigit1
            || guessDigit1 == lotteryDigit2 && guessDigit2 == lotteryDigit2
            || guessDigit1 == lotteryDigit2 && guessDigit2 == lotteryDigit3
            || guessDigit1 == lotteryDigit2 && guessDigit3 == lotteryDigit1
            || guessDigit1 == lotteryDigit2 && guessDigit3 == lotteryDigit2
            || guessDigit1 == lotteryDigit2 && guessDigit3 == lotteryDigit3
            || guessDigit1 == lotteryDigit3 && guessDigit2 == lotteryDigit1
            || guessDigit1 == lotteryDigit3 && guessDigit2 == lotteryDigit2
            || guessDigit1 == lotteryDigit3 && guessDigit2 == lotteryDigit3
            || guessDigit1 == lotteryDigit3 && guessDigit3 == lotteryDigit1
            || guessDigit1 == lotteryDigit3 && guessDigit3 == lotteryDigit2
            || guessDigit2 == lotteryDigit1 && guessDigit1 == lotteryDigit2
            || guessDigit2 == lotteryDigit1 && guessDigit1 == lotteryDigit3
            || guessDigit2 == lotteryDigit1 && guessDigit3 == lotteryDigit2
            || guessDigit2 == lotteryDigit1 && guessDigit3 == lotteryDigit3
            || guessDigit2 == lotteryDigit2 && guessDigit1 == lotteryDigit1
            || guessDigit2 == lotteryDigit2 && guessDigit1 == lotteryDigit3
            || guessDigit2 == lotteryDigit2 && guessDigit3 == lotteryDigit1
            || guessDigit2 == lotteryDigit2 && guessDigit3 == lotteryDigit3
            || guessDigit3 == lotteryDigit1 && guessDigit1 == lotteryDigit2
            || guessDigit3 == lotteryDigit1 && guessDigit1 == lotteryDigit3
            || guessDigit3 == lotteryDigit1 && guessDigit2 == lotteryDigit2
            || guessDigit3 == lotteryDigit1 && guessDigit2 == lotteryDigit3
            || guessDigit3 == lotteryDigit2 && guessDigit1 == lotteryDigit1
            || guessDigit3 == lotteryDigit2 && guessDigit1 == lotteryDigit3
            || guessDigit3 == lotteryDigit2 && guessDigit2 == lotteryDigit1
            || guessDigit3 == lotteryDigit2 && guessDigit2 == lotteryDigit3
            || guessDigit3 == lotteryDigit3 && guessDigit1 == lotteryDigit1
            || guessDigit3 == lotteryDigit3 && guessDigit1 == lotteryDigit2
            || guessDigit3 == lotteryDigit3 && guessDigit2 == lotteryDigit1
            || guessDigit3 == lotteryDigit3 && guessDigit2 == lotteryDigit2
            )
    cout<<"Two matches: you win $2,000";
    else if( guessDigit1 == lotteryDigit1
    || guessDigit1 == lotteryDigit2
    || guessDigit1 == lotteryDigit3
	|| guessDigit2 == lotteryDigit1
	|| guessDigit2 == lotteryDigit2
	|| guessDigit2 == lotteryDigit3
	|| guessDigit3 == lotteryDigit1
	|| guessDigit3 == lotteryDigit2
	|| guessDigit3 == lotteryDigit3 )
	{
		cout << "Match one digit: you win $1,000";
	}
	else if (guessDigit2 == lotteryDigit1 || guessDigit3 == lotteryDigit2 || guessDigit1 == lotteryDigit3)
    {
		cout << "Match all digits: you win $3,000";
	}
	else if (guess == lottery)
    {
        cout << "Exact match: you win $10,000";
    }

	else
    {
		cout << "Sorry, no match";
	}
return 0;
}
