#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int InitialCount=100;
int Count,Num,Player;
bool Correct;
int main (){       
int i,p;
Count=InitialCount;
    for(i=0; Count!=0; i++){
        if (i%2==0){
            cout << "First player's move!\n";
            do{
                cout<<"There are "<<Count<<" matchers on the table. \n";
                cout<<"How many matchers do you take?\n";
                cin>>Num;
                if(Num>=1&&Num<=10&&Num<=Count)
                    Correct=true;
                else{
                    cout<<"Wrong! Repeat input!\n";
                    Correct=false;
                } 
            }
    while (!Correct);
        }
        
        else{
            cout << "Second player move!\n";
            do{
               cout<<"There are "<<Count<<" matchers on the table. \n";
                cout<<"How many matchers do you take?\n";
                cin>>Num;
                if(Num>=1&&Num<=10&&Num<=Count)
                    Correct=true;
                else{
                    cout<<"Wrong! Repeat input!\n";
                    Correct=false;
                } 
            }
    while (!Correct);
        }
    Count-=Num;
    p=i;
       }
    if (p%2==0){
        cout<<"The first player won!";
	}
    else {
        cout<<"The second player won!";
	}      
}       
