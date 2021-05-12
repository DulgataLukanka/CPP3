#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int lottery = 0;
    int lotteryDigit1 = 0;
	int lotteryDigit2 = 0;
	int lotteryDigit3 = 0;
	do{
        lottery = rand() % 900 + 100;
        lotteryDigit1 = lottery / 100;
        lotteryDigit2 = lottery % 100 / 10;
        lotteryDigit3 = lottery % 10;
	}while(lotteryDigit1 == lotteryDigit2
    ||lotteryDigit1 == lotteryDigit3
    ||lotteryDigit2 == lotteryDigit3);

    int guess = 0;
    int guessDigit1 = 0;
    int guessDigit2 = 0;
    int guessDigit3 = 0;
    do{
        cout << "Enter your lottery pick: ";
        guess = 0;
        cin >> guess;
        guessDigit1 = guess / 100;
        guessDigit2 = guess % 100/ 10;
        guessDigit3 = guess % 10;

        }while (guessDigit1 == guessDigit2
        ||guessDigit1 == guessDigit3
        ||guessDigit2 == guessDigit3);

        cout << "The lottery number is " << lottery << endl;
        if (guess == lottery){
		cout << "Exact match: you win $10,000";
        }else{
        int matches = 0;
        if(guessDigit1 == lotteryDigit1
        ||guessDigit1 == lotteryDigit2
        ||guessDigit1 == lotteryDigit3){
            matches++;
        }
        if(guessDigit2 == lotteryDigit1
        ||guessDigit2 == lotteryDigit2
        ||guessDigit2 == lotteryDigit3){
            matches++;

        }
        if(guessDigit3 == lotteryDigit1
        ||guessDigit3 == lotteryDigit2
        ||guessDigit3 == lotteryDigit3){
            matches++;
        }

        cout << "\n You win: ";
        if (matches == 1){
            cout << "1000";
        }else if (matches == 2){
            cout << "2000";
        }else if (matches == 3){
            cout << "3000";
        }else {
            cout << "0";
        }
        cout << "  dollars";
        }
    }
