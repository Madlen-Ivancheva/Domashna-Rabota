
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a,b;
    srand(time(0)); //seed random number generator
    cin>>a>>b;
    int num = rand() % b + a;


    cout << "Guess My Number Game\n\n"<<endl;

    int guess = 0;
    while (guess != num) {
        cout << "Enter a guess between "<<a<<" and "<<b<<" : ";
        cin >> guess;

        if (guess > num) {
            cout << "Too high!\n\n";
        }
        else if (guess < num)
            {
                cout << "Too low!\n\n";
            }
        else {
            cout << "\nCorrect! You got it in ";
        }
    }

    return 0;
}

