#include "main.h"

int menu(int r)
{
    system("clear");

    switch (r) {
    case 1: {
        return 0;
    }
    case 2: {
        system("clear");
        cout << "From the heap, initially containing 100 matches, two playing "
                "in turn take several matches: at least one and "
             << endl;
        cout << "not more than ten. Wins the one who took the last match. ";
        cout << "A player's nickname consists of at least 1 maximum" << endl;
        cout << "of 15 Latin alphabet characters from A to z. There should be "
                "no gaps when entering a nickname."
             << endl
             << endl;
        cout << "To continue press any key ..." << endl;
        cin.get();
        cin.get();
        return 1;
    }
    case 3: {
        system("clear");
        cout << "Good bay :) " << endl;
        return 2;
    }
    }
    return 0;
}