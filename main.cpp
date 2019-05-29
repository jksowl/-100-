#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int InitialCount=100;
int Count,Num,Player;
bool Correct;
int main (){       
 setlocale(LC_ALL, "Russian"); 
 Count=InitialCount;
int i,p;
    for(i=0; Count!=0; i++){
        if (i%2==0){
            cout << "Ход первого игрока!\n";
            do{
                cout<<"На столе "<<Count<<" спичек \n";
                cout<<"Сколько спичек вы берете?\n";
                cin>>Num;
                if(Num>=1&&Num<=10&&Num<=Count)
                    Correct=true;
                else{
                    cout<<"Неверно! Повторите ввод!\n";
                    Correct=false;
                } 
            }
    while (!Correct);
        }
        
        else{
            cout << "Ход второго игрока!\n";
            do{
                cout<<"На столе "<<Count<<" спичек \n";
                cout<<"Сколько спичек вы берете?\n";
                cin>>Num;
                if(Num>=1&&Num<=10&&Num<=Count)
                    Correct=true;
                else{
                    cout<<"Неверно! Повторите ввод!\n";
                    Correct=false;
                } 
            }
    while (!Correct);
        }
    Count-=Num;
    p=i;
       }
    if (p%2==0){
        cout<<"Победу одержал первый игрок";
	}
    else {
        cout<<"Победу одержал второй игрок!";
	}      
}       
