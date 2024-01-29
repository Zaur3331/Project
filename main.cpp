#include <bits/stdc++.h>
using namespace std;
int main() {
int Rock = 1;
int Paper = 2;
int Sci = 3;

int Rival_Option;
cin>> Rival_Option;

int  X = 3;
srand(time(NULL));
int randNum = rand() % X + 1;

if(randNum == Rival_Option)
{
    cout<<"TIE! Try your luck next time :)";
}
else if (randNum == 1 && Rival_Option == 3 || randNum == 2 && Rival_Option == 1 || randNum == 3 && Rival_Option == 2)
{
    cout<<"You lost :( Try your luck next time!";
}
else
{
    cout<<"Congrulations! You won!";
}


return 0;
}
