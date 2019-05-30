#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>

using namespace std;

int game(string player, int Num, int Count, bool Correct)
{
    if (Num >= 1 && Num <= 10 && Num <= Count)
        Correct = true;
    else {
        cout << "Neverno ! Povtori !" << endl;
        Correct = false;
    }
    return Correct;
}

int CheckNik(string p)
{
    int t = 0;
    int x = p.size();
    for (int i = 0; i < x; i++) {
        if (p[i] == 'a' || p[i] == 'b' || p[i] == 'c' || p[i] == 'd'
            || p[i] == 'e' || p[i] == 'f' || p[i] == 'g' || p[i] == 'h'
            || p[i] == 'j' || p[i] == 'k' || p[i] == 'l' || p[i] == 'm'
            || p[i] == 'n' || p[i] == 'o') {
        } else {
            if (p[i] == 'p' || p[i] == 'r' || p[i] == 's' || p[i] == 't'
                || p[i] == 'u' || p[i] == 'v' || p[i] == 'w' || p[i] == 'u'
                || p[i] == 'y' || p[i] == 'z' || p[i] == 'x' || p[i] == 'q'
                || p[i] == 'i') {
            } else {
                if (p[i] == 'A' || p[i] == 'B' || p[i] == 'C' || p[i] == 'D'
                    || p[i] == 'E' || p[i] == 'F' || p[i] == 'G' || p[i] == 'H'
                    || p[i] == 'J' || p[i] == 'K' || p[i] == 'L' || p[i] == 'M'
                    || p[i] == 'N' || p[i] == 'O') {
                } else {
                    if (p[i] == 'I' || p[i] == 'P' || p[i] == 'R' || p[i] == 'S'
                        || p[i] == 'T' || p[i] == 'U' || p[i] == 'V'
                        || p[i] == 'W' || p[i] == 'U' || p[i] == 'Y'
                        || p[i] == 'Z' || p[i] == 'X' || p[i] == 'Q') {
                    } else {
                        t++;
                    }
                }
            }
        }
    }
    if (t == 0) {
        return 0;
    } else {
        return 1;
    }
    return 1;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int i, Count = 100, Num, k;
    bool Correct;
    string p1, p2;
    player;
    Correct = true;
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
    for (i = 0; Count != 0; i++) {
        if (i % 2 == 0) {
            player = p1;
            cout << "Move -" << p1 << "\n";
            cout << "There are " << Count << " matches on the table.\n";
            Correct = false;
            while (!Correct) {
                cout << "How many matches do you take?\n";
                cin >> Num;
                Correct = game(player, Num, Count, Correct);
            }
            Count -= Num;
        } else {
            player = p1;
            cout << "move - " << p2 << "\n";
            cout << "There are " << Count << " matches on the table.\n";
            Correct = false;
            while (!Correct) {
                cout << "How many matches do you take?\n";
                cin >> Num;
                Correct = game(player, Num, Count, Correct);
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
