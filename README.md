#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Welcome to RPS Game! Please select among Rock, Paper and Sci and try your luck against me!"<<endl;
    cout<<"For choosing Rock, Paper or Scissor, press 1, 2 or 3 respectively: ";
    
    
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
        cout<<"It is tie! Try your luck next time :)";
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
