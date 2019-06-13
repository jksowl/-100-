#include "main.h"

int main()
{
    system("clear");
    int i = 0, Count = 100, Num, k, h1, h2, x = 1, r;
    bool Correct;
    string p1, p2;
    srand(time(NULL));
    Correct = true;
    h1 = rand() % 100;
    h2 = rand() % 100;
    while (x) {
        system("clear");
        cout << "\t1.Start game" << endl << endl;
        cout << "\t2.Rules" << endl << endl;
        cout << "\t3.Exit" << endl << endl;
        cout << "Select menu item:";
        cin >> r;
        x = menu(r);
        if (x == 2) {
            return 0;
        }
    }

    if (h1 > h2) {
        i++;
    }
    while (Correct) {
        cout << "Nikname player 1:";
        cin >> p1;
        Correct = CheckNik(p1);
    }

    Correct = true;
    while (Correct) {
        cout << "Nikname player 2:";
        cin >> p2;
        Correct = CheckNik(p2);
    }
    for (; Count != 0; i++) {
        if (i % 2 == 0) {
            system("clear");
            cout << " Player's move " << p1 << "\n";
            cout << "There are " << Count << " matches on the table.\n";
            Correct = false;
            while (!Correct) {
                cout << "How many matches do you take?\n";
                cin >> Num;
                Correct = game(Num, Count, Correct);
            }
            Count -= Num;
        } else {
            system("clear");
            cout << " Player's move " << p2 << "\n";
            cout << "There are " << Count << " matches on the table.\n";
            Correct = false;
            while (!Correct) {
                cout << "How many matches do you take?\n";
                cin >> Num;
                Correct = game(Num, Count, Correct);
            }
            Count -= Num;
        }
        k = i;
    }
    if (k % 2 == 0) {
        cout << "Win " << p1 << "!" << endl;
    } else {
        cout << "Win " << p2 << "!" << endl;
    }
}