#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    cout << "\n\t\t***WELCOME TO GUESS THE NUMBER GAME!!" << endl;
    cout << "\t\t!!!!!INSTRUCTIONS:" << endl;
    cout << "YOU HAVE TO GUESS A NUMER BETWEEN 1 AND 100." << endl;
    cout << "YOU'LL GET LIMITED CHANCES BASED ON THE DIFFICULTY LEVEL YOU CHOOSE." << endl;

while(true)
{
    cout << "\nDIFFICULTY LEVELS";
    cout << "\n1 For easy level!\t";
    cout << "\n2 for medium level!\t";
    cout << "\n3 for difficult level!\t";
    cout << "\n0 for ending the game!\t";

    int level;
    cout << "\n\t\t***ENTER THE DIFFICULTY LEVEL NUMBER***: ";
    cin >> level;
    srand(time(0));
    int randomnumber = (rand() % 100) + 1;
    int guess;
    if (level == 1)
    {
        cout << "\nYOU WILL GET 10 CHOICES FOR FINDING THE RANDOM NUMBER BETWEEN 1 AND 100." << endl;
        int leftchance = 10;
        for (int i = 1; i <= 10; i++)
        {
            cout << "\n\n***ENTER THE NUMBER***:";
            cin >> guess;
            if (guess == randomnumber)
            {
                cout << "Yahoo!! YOU GUESSED THE RIGHT NUMBER :)";
                 cout<<"\n\t!THE GAME OVER!"<<endl<<"\n\t\t!!!HERE YOU CAN PLAY NEXT GAME!!!";
                
                break;
            }
            else if (guess > randomnumber)
            {
                cout << guess << " IS TOO HIGH!!";
            }
            else
            {
                cout << guess << " IS TOO LESS!!";

            }
            leftchance--;
            if (leftchance == 0)
            {
                cout << "\n !!BETTER LUCK NEXT TIME!!" << endl;
                cout << randomnumber << " IS THE RIGHT ANSWER!!";
                 cout<<"\n\t!THE GAME OVER!"<<endl<<"\n\t\t!!!HERE YOU CAN PLAY NEXT GAME!!!";
                
            }



        }
    }
    else if (level == 2)
    {
        cout << "\nYOU HAVE 8 CHOICES FOR FINDING THE RANDOM NUMBER BETWEEN 1 AND 100";
        int leftchance = 8;
        for (int i = 1; i <= 8; i++)
        {
            cout << "\n\n***ENTER THE NUMBER***: ";
            cin >> guess;
            if (guess == randomnumber)
            {
                cout << "Yahoo!! YOU GUESSED THE RIGHT NUMBER :)";
                 cout<<"\n\t!THE GAME OVER!"<<endl<<"\n\t\t!!!HERE YOU CAN PLAY NEXT GAME!!!";
                
                break;
            }
            else if (guess > randomnumber)
            {
                cout << guess << " IS TOO HIGH!!";
            }
            else
            {
                cout << guess << " IS TOO LESS!!";
            }
            leftchance--;
            if (leftchance == 0)
            {
                cout << "\n \t\t!!BETTER LUCK NEXT TIME!!" << endl;
                cout << randomnumber << " IS THE NUMBER RIGHT ANSWER!!";
                 cout<<"\n\t!THE GAME OVER!"<<endl<<"\n\t\t!!!HERE YOU CAN PLAY NEXT GAME!!!";
                
            }

        }
    }
    else if (level == 3)
    {
        cout << "\t YOU HAVE 5 CHOICE FOR FINDING THE RANDOM NUMBER BETWEEN 1 AND 100";
        int leftchance = 5;
        for (int i = 1; i <= 5; i++)
        {
            cout << "\n\n***ENTER THE NUMBER***: ";
            cin >> guess;
            if (guess == randomnumber)
            {
                cout << "Yahoo!! YOU HAVE GUESSED THE RIGHT NUMBER :)";
                 cout<<"\n\t!THE GAME OVER!"<<endl<<"\n\t\t!!!HERE YOU CAN PLAY NEXT GAME!!!";
                
                break;
            }
            else if (guess > randomnumber)
            {
                cout << guess << " IS TOO HIGH!!";
            }
            else
            {
                cout << guess << " IS TOO LESS!!";
            }
            leftchance--;
            if (leftchance == 0)
            {
                cout << "\n!!BETTER LUCK NEXT TIME!!" << endl;
                cout << randomnumber << " IS THE NUMBER!!"<<endl;
                cout<<"\n\t!THE GAME OVER!"<<endl<<"\n\t\t!!!HERE YOU CAN PLAY NEXT GAME!!!";
                
            }

        }
    }
    else if (level == 0)
    {
        cout<<"THE  GAME IS ENDED :(";
        exit(0);
    }
 }
}
