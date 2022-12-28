#include<iostream>
#include"dArrCat.h"

using namespace std;

void menu(int& choice, dArrCats& cats);

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    int choice = 0;
    dArrCats cats;


    do
    {
       menu(choice, cats);
    } while (choice > 0);


    return 0;
}


void menu(int& choice, dArrCats& cats)
{
    int n;
    string whatCat, name, gender;

    cout << "MENU" << "\n"
        << "1: Create cat" << "\n"
        << "2: Info about cats" << "\n"
        << "3: Feed cat" << "\n"
        << "4: Play with cat" << "\n"
        << "5: Pat cat" << "\n"
        << "6: What's your relationship with a cat" << "\n"
        << "0: Quite" << "\n";
    cout << "Your input: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Write their name: ";
        cin.ignore();
        getline(cin, name);

        cout << "and gender: ";
        cin.ignore();
        getline(cin, gender);

        cats.addCat(name, gender);
        cout << "You added cat." << "\n";
        break;

    case 2:
        if (cats.getNumOfCats() == 0)
        {
            cout << "Firstly add a cat" << "\n";
            break;
        }

        cout << "Right now you have:" << "\n";
        for (int i = 0; i < cats.getNumOfCats(); i++)
            cout << i + 1 << ": " << cats[i].info();

        break;

    case 3:
        if (cats.getNumOfCats() == 0)
        {
            cout << "Firstly add a cat" << "\n";
        break;
        }

        cout << "You want to feed all cats or only one?(all/one): ";
        cin.ignore();
        getline(cin, whatCat);

        if (whatCat == "one")
        {
            cout << "Which one(from 1 to " << cats.getNumOfCats() << "): ";
            cin >> n;
            cout << cats[n - 1].feed();
        }
        else if (whatCat == "all")
            for (int i = 0; i < cats.getNumOfCats(); i++)
                cout << cats[i].feed();
        else
            cout << "Wrong input" << "\n";

        break;

    case 4:
        if (cats.getNumOfCats() == 0)
        {
            cout << "Firstly add a cat" << "\n";
            break;
        }

        cout << "You want to play with all your cats or only one?(all/one): ";
        cin.ignore();
        getline(cin, whatCat);

        if (whatCat == "one")
        {
            cout << "Which one(from 1 to " << cats.getNumOfCats() << "): ";
            cin >> n;
            cout << cats[n - 1].play();
        }
        else if (whatCat == "all")
            for (int i = 0; i < cats.getNumOfCats(); i++)
                cout << cats[i].play();
        else
            cout << "Wrong input" << "\n";

        break;

    case 5:
        if (cats.getNumOfCats() == 0)
        { 
            cout << "Firstly add a cat" << "\n";
            break;
        }

        cout << "You want to pat all cats or only one?(all/one): ";
        cin.ignore();
        getline(cin, whatCat);

        if (whatCat == "one")
        {
            cout << "Which one(from 1 to " << cats.getNumOfCats() << "): ";
            cin >> n;
            cout << cats[n - 1].pat();
        }
        else if (whatCat == "all")
            for (int i = 0; i < cats.getNumOfCats(); i++)
                cout << cats[i].pat();
        else
            cout << "Wrong input" << "\n";

        break;

    case 6:
        if (cats.getNumOfCats() == 0)
        {
            cout << "Firstly add a cat" << "\n";
            break;
        }

        cout << "You want to know your reletionship with all cats or only one?(all/one): ";
        cin.ignore();
        getline(cin, whatCat);

        if (whatCat == "one")
        {
            cout << "Which one(from 1 to " << cats.getNumOfCats() << "): ";
            cin >> n;
            cout << cats[n - 1].reletionship();
        }
        else if (whatCat == "all")
            for (int i = 0; i < cats.getNumOfCats(); i++)
                cout << cats[i].reletionship();
        else
            cout << "Wrong input" << "\n";

        break;

    case 0:
        cout << "Quitting program...";
        break;

    default:
        cout << "Wrong input" << "\n";
        break;
    }

    cout << "\n";
}