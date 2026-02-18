#include <iostream>
#include <ctime>
using namespace std;

char getChoice();
char getComputerChoice();
void showChoice(char player);
void chooseWinner(char player,char computer);


int main () {

    cout << "Rock paper scissors game!!" << '\n';
    cout << "-----------------------" << '\n';

    char player;
    char computer;

    player = getChoice();
    cout << "This is your choice: ";

    showChoice(player);

    computer = getComputerChoice();
    cout << "Opponent's choice: ";
    showChoice(computer);

    chooseWinner(player,computer);
    return 0;
}

char getChoice(){
    char player;

    do{
        cout << "Input r for rock" << '\n';
        cout << "Input p for paper" << '\n';
        cout << "Input s for scissors" << '\n';

        cin >> player;
    } while (player != 'r' && player != 's' && player != 'p' );

    return player;
};
char getComputerChoice(){
    srand(time(0));

    int num = rand() % 3 + 1;

    switch(num) {
        case 1: return 'r';
        case 2: return 's';
        case 3: return 'p';
    }
};
void showChoice(char choice){
    switch(choice){
        case 'r': cout << "Rock\n";
        break;
        case 's': cout << "Scissors\n";
        break;
        case 'p': cout << "Paper\n";
        break;
    }
};
void chooseWinner(char player, char computer){
    switch(player) {
        case 'r' : if(computer == 'r'){
            cout << "Its a draw";
        } else if(computer == 'p'){
            cout << "You lost";
        } else if (computer == 's') {
            cout << "You won!";
        }
        break;
        case 's' : if(computer == 's'){
            cout << "Its a draw";
        } else if(computer == 'p'){
            cout << "You won!";
        } else if (computer == 'r') {
            cout << "You lost";
        }
        break;
        case 'p' : if(computer == 'p'){
            cout << "Its a draw";
        } else if(computer == 's'){
            cout << "You lost";
        } else if (computer == 'r') {
            cout << "You won";
        }
    }
};
