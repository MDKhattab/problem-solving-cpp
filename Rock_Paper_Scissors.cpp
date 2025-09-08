#include<iostream>
using namespace std;



string rps(const string& p1, const string& p2)
{
    // string msg = "";
    // string p1win = "Player 1 won!";
    // string p2win = "Player 2 won!";

    // if(p1 == p2) msg = "Draw";
    
    // if (p1 == "rock")
    // {
    //     if(p2 == "scissor") msg = p1win;
    //     if(p2 == "paper") msg = p2win;
    // }
    // if (p1 == "scissor")
    // {
    //     if(p2 == "rock") msg = p2win;
    //     if(p2 == "paper") msg = p1win;
    // }
    // if (p1 == "paper")
    // {
    //     if(p2 == "rock") msg = p1win;
    //     if(p2 == "scissor") msg = p2win;
    // }
    // return msg;
    



    // if ((p1 == "Rock") && (p2 == "scissor"))
    // {
    //     return "Player 1 won!";
    // }
    // else if ((p1 == "paper") && (p2 == "Rock"))
    // {
    //     return "Player 1 won!";
    // }
    // else if ((p2 == "scissor") && (p1 == "paper"))
    // {
    //     return "Player 1 won!";
    // }
    // else if (p1 == p2)
    // {
    //     return "Draw";
    // }
    // else
    // {
    //     return "Player 2 won!";
    // }


    // if(p1 == p2)
    //   return "Draw!";
    // if( ( p1[0] == 's' && p2[0] == 'p' )||
    //     ( p1[0] == 'p' && p2[0] == 'r' )||
    //     ( p1[0] == 'r' && p2[0] == 's' ) )
    //     return "Player 1 won!";
    // return "Player 2 won!";

    if(p1 == p2)
    return "Draw!";
    if((p1 =="rock" && p2 =="scissors") || (p1 == "paper" && p2 == "rock") || (p1 == "scissors" && p2 == "paper"))
      return "Player 1 won!";
    else
      return "Player 2 won!";

}




int main()
{
    string newstr = rps("rock","scissor");
    cout << newstr ;




    return 0;
}