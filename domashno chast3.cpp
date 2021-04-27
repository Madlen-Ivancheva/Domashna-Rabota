
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); //seed random number generator
    int num = rand() % 100 + 1; // random number between 1 and 100
    cout << "Guess My Number Game\n\n";
    cout<<"Enter a number between 1 and 100"<<endl;

    int guess=0,br=0;
    do
    {
        cin>>guess;br++;
        if (guess > num) { cout<<"Too high!"<<endl;
        }
        else if (guess < num) {
            cout<<"Too low!"<<endl;
        }
        else {
            cout<<"Correct!"<<endl;


            cout<<"Your tries:"<<endl;
        }

    }


    while (guess!=num && guess!=0);
    cout<<br<<endl;



    return 0;
}
