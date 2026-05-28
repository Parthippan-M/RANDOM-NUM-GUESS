#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    string player1;
    int player2;
    cout<<"----------------------------------------"<<endl;
    cout<<"      NUMBER GUESSING GAME"<<endl;
    cout<<"----------------------------------------"<<endl;
    
    //a reminder for user

    cout<<"Choose a number from 1 to 10"<<endl;
    cin>>player1;

    srand(time(0));
    player2 = rand()%11;
    cout<<player2<<endl;

    if(std::stoi(player1) == player2)
    {
     cout<<"You guessed correctly"<<endl;
    }
 else{
    cout<<"You failed, retry"<<endl;
 }
    return 0;
}