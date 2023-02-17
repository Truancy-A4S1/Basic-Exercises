#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

string rps(string str1){
    int com = rand() % 3;
    string comp_ans;
    switch(com)
    {
    case 0:
        comp_ans = "rock";
        break;
    case 2:
        comp_ans = "paper";
        break;
    case 3:
        comp_ans = "scissors";
        break;
    }


    if((comp_ans == "rock" && str1 == "paper")||
       (comp_ans == "paper" && str1 == "scissors")||
       (comp_ans == "scissors" && str1 == "rock"))
    {
        return "You won!";
    }
    else if((comp_ans == "paper" && str1 == "rock")||
            (comp_ans == "scissors" && str1 == "paper")||
            (comp_ans == "rock" && str1 == "scissors"))
    {
        return "You lose!";
    }
    else
    {
        return "Draw!";
    }
}

int main(){
    srand(time(0));
    cout << "Enter rock, paper, or scissors: ";
    string my_ans;
    cin >> my_ans;
    cout << rps(my_ans);

}
