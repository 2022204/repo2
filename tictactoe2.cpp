#include<iostream>
using namespace std;
char player1='X';
char player2='0';
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
bool game()
{
    for(int i=0;i<3;i++)
    {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]==player1)
        return true;
    }
    for(int i=0;i<3;i++)
    {
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[0][i]==player1)
        return true;
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]==player1)
    return true;
    if(board[2][0]==board[1][1] && board[1][1]==board[0][2] && board[2][0]==player1)
    return true;
    for(int i=0;i<3;i++)
    {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]==player2)
        return true;
    }
    for(int i=0;i<3;i++)
    {
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[0][i]==player2)
        return true;
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]==player2)
    return true;
    if(board[2][0]==board[1][1] && board[1][1]==board[0][2] && board[2][0]==player2)
    return true;
    return false;
}
void output()
{

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<board[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    cout<<"\n\n\t\tTic-Tac-Toe\n\n";
    int option;
    int t=1;
    cout<<"\t\tPlayer 1 = "<<player1<<endl;
    cout<<"\t\tplayer 2 = "<<player2<<endl;
    bool draw;
    output();
    for(int i=0;i<9;i++)
    {
        cout<<"Enter player "<<t<<endl;
        cin>>option;
        if(option<1 || option>9)
        {
            cout<<"invalid option"<<endl;
            i--;
            continue;
        }
        else
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    if(board[j][k]==player1 || board[j][k]==player2)
                    {
                        cout<<"This box is already taken. TRY AGAIN!!!!"<<endl;
                        i--;
                        j=3;
                        k=3;
                        continue;
                    }
                    else if(board[j][k]==option)
                    {
                        if(t==1)
                        board[j][k]=player1;
                        else
                        board[j][k]=player2;
                    }
                }
            }
        }
        if(game()==true)
        {
            cout<<"player"<<t<<" Won!!! "<<endl;
            break;
        }
        if(t==1)
        t++;
        else if(t==2)
        t--;
        output();
    }
    if(game()==false)
    {
        cout<<"The game is a draw!!"<<endl;
    }
    return 0;
}