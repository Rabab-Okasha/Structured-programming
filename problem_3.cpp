//problem 3
#include <iostream>

using namespace std;

int main(){
    int row, column;
    const char PLAYER_1 = 'O';
    const char PLAYER_2 = 'X';
    string answer; // variable to store the user input whether to play a new game or exit
    do {
        char V1 = '-', V2 = '-', V3 = '-', V4 = '-', V5 = '-', V6 = '-', V7 = '-', V8 = '-', V9 = '-';
        int counter = 0; // variable to count number of roundes the players have played

        cout << "Do you want to play a new game y/n" << endl;
        cin >> answer; // get the user answer

        if (answer == "yes" || answer == "Yes") { // if the user enter yes
            cout << "The  current board is :" << endl;
            cout << V1 << ' ' << V2 << ' ' << V3 << ' ' << endl // displaying the board shape
                 << V4 << ' ' << V5 << ' ' << V6 << ' ' << endl
                 << V7 << ' ' << V8 << ' ' << V9 << ' ' << endl;
            do{
                cout << "Enter your move (player one): " << endl; // player one
                cin >> row >> column;  // get numbers (row and column) from player one

                while(true){ // iterate until a condition is excuted

                    //conditions on the inputs of player two and to check that the user does not enter the same move twice or more
                    if (row == 1 && column == 1 && V1 != PLAYER_1 && V1 != PLAYER_2){ // first row, first column
                        V1 = PLAYER_1;
                        break ;
                    }
                    else if (row == 1 && column == 2 && V2 != PLAYER_1 && V2 != PLAYER_2){ // first row, second column
                        V2 = PLAYER_1;
                        break ;
                    }
                    else if (row == 1 && column == 3 && V3 != PLAYER_1 && V3 != PLAYER_2){ // first row, third column
                        V3 = PLAYER_1;
                        break ;
                    }
                    else if (row == 2 && column == 1 && V4 != PLAYER_1 && V4 != PLAYER_2){ // second row, first column
                        V4 = PLAYER_1;
                        break ;
                    }
                    else if (row == 2 && column == 2 && V5 != PLAYER_1 && V5 != PLAYER_2){ // second row, second column
                        V5 = PLAYER_1;
                        break ;
                    }
                    else if (row == 2 && column == 3 && V6 != PLAYER_1 && V6 != PLAYER_2){ // second row, third column
                        V6 = PLAYER_1;
                        break ;
                    }
                    else if (row == 3 && column == 1 && V7 != PLAYER_1 && V7 != PLAYER_2){ // third row, first column
                        V7 = PLAYER_1;
                        break ;
                    }
                    else if (row == 3 && column == 2 && V8 != PLAYER_1 && V8 != PLAYER_2){ // third row, second column
                        V8 = PLAYER_1;
                        break ;
                    }
                    else if (row == 3 && column == 3 && V9 != PLAYER_1 && V9 != PLAYER_2){ // third row, third column
                        V9 = PLAYER_1;
                        break ;
                    }
                    else{
                        cout << "Invalid input" << endl; // in case the user enters the same move twice or more
                        cout << "\nEnter your move again (player one): " << endl;
                        cin >> row >> column; // get the player one input again

                    }
                }

                cout << "The current board is : " << endl;
                cout << V1 << ' ' << V2 << ' ' << V3 << ' ' << endl // display the board after player one has played
                     << V4 << ' ' << V5 << ' ' << V6 << ' ' << endl
                     << V7 << ' ' << V8 << ' ' << V9 << ' ' << endl;

                counter++;// incrementing the number of rounds that player one has played

                // conditions for winning player one
                if (V1 == V2 && V2 == V3 && V3 == PLAYER_1) { // first row check
                    cout << "The winner is player one" << endl;
                    break;
                } else if (V4 == V5 && V5 == V6 && V6 == PLAYER_1) { // second row check
                    cout << "The winner is player one" << endl;
                    break;
                }else if (V7 == V8 && V8 == V9 && V9 == PLAYER_1){ // third row check
                    cout << "The winner is player one" << endl;
                    break;
                }else if (V1 == V4 && V4 == V7 && V7 == PLAYER_1){ // first column check
                    cout << "The winner is player one" << endl;
                    break;
                }else if (V2 == V5 && V5 == V8 && V8 == PLAYER_1) { // second column check
                    cout << "The winner is player one" << endl;
                    break;
                }else if (V3 == V6 && V6 == V9 && V9 == PLAYER_1){ // third column check
                    cout << "The winner is player one" << endl;
                    break;
                }else if (V1 == V5 && V5 == V9 && V9 == PLAYER_1){ // left diagonal check
                    cout << "The winner is player one" << endl;
                    break;
                }else if (V3 == V5 && V5 == V7 && V7 == PLAYER_1){ // rigth diagonal check
                    cout << "The winner is player one" << endl;
                    break;
                }

                // the case of no winners
                if (counter == 9) { // when the counter reaches 9, display no winners
                    cout << "No winner" << endl;
                    break;
                }

                cout << "Enter your move (player two): " << endl; // player two
                cin >> row >> column;  // get numbers (row and column) from player two

                while(true){ // iterate until a condition is excuted
                    //conditions on the inputs of player two and to check that the user does not enter the same move twice or more
                    if (row == 1 && column == 1 && V1 != PLAYER_1 && V1 != PLAYER_2){ // first row, first column
                        V1 = PLAYER_2;
                        break ;
                    }
                    else if (row == 1 && column == 2 && V2 != PLAYER_1 && V2 != PLAYER_2){ // first row, second column
                        V2 = PLAYER_2;
                        break ;
                    }
                    else if (row == 1 && column == 3 && V3 != PLAYER_1 && V3 != PLAYER_2){ // first row, third column
                        V3 = PLAYER_2;
                        break ;
                    }
                    else if (row == 2 && column == 1 && V4 != PLAYER_1 && V4 != PLAYER_2){ // second row, first column
                        V4 = PLAYER_2;
                        break ;
                    }
                    else if (row == 2 && column == 2 && V5 != PLAYER_1 && V5 != PLAYER_2){ // second row, second column
                        V5 = PLAYER_2;
                        break ;
                    }
                    else if (row == 2 && column == 3 && V6 != PLAYER_1 && V6 != PLAYER_2){ // second row, third column
                        V6 = PLAYER_2;
                        break ;
                    }
                    else if (row == 3 && column == 1 && V7 != PLAYER_1 && V7 != PLAYER_2){ // third row, first column
                        V7 = PLAYER_2;
                        break ;
                    }
                    else if (row == 3 && column == 2 && V8 != PLAYER_1 && V8 != PLAYER_2){ // third row, second column
                        V8 = PLAYER_2;
                        break ;
                    }
                    else if (row == 3 && column == 3 && V9 != PLAYER_1 && V9 != PLAYER_2){ // third row, third column
                        V9 = PLAYER_2;
                        break ;
                    }
                    else{
                        cout << "Invalid input" << endl; // in case the user enters the same move twice or more
                        cout << "\nEnter your move again (player two): " << endl; // get the player two input again
                        cin >> row >> column;

                    }
                }

                cout << "The current board is : " << endl;
                cout << V1 << ' ' << V2 << ' ' << V3 << ' ' << endl // display the board after player two has played
                     << V4 << ' ' << V5 << ' ' << V6 << ' ' << endl
                     << V7 << ' ' << V8 << ' ' << V9 << ' ' << endl;

                counter++; // incrementing the number of rounds that player two has played

                // conditions for winning player two
                if (V1 == V2 && V2 == V3 && V3 == PLAYER_2) {  // first row check
                    cout << "The winner is player two" << endl;
                    break;
                } else if (V4 == V5 && V5 == V6 && V6 == PLAYER_2) { // second row check
                    cout << "The winner is player two" << endl;
                    break;
                }else if (V7 == V8 && V8 == V9 && V9 == PLAYER_2) { // third row check
                    cout << "The winner is player two" << endl;
                    break;
                }else if (V1 == V4 && V4 == V7 && V7 == PLAYER_2){ // first column check
                    cout << "The winner is player two" << endl;
                    break;
                }else if (V2 == V5 && V5 == V8 && V8 == PLAYER_2) { // second column check
                    cout << "The winner is player two" << endl;
                    break;
                }else if (V3 == V6 && V6 == V9 && V9 == PLAYER_2){ // third column check
                    cout << "The winner is player two" << endl;
                    break;
                }else if (V1 == V5 && V5 == V9 && V9 == PLAYER_2){ // left diagonal check
                    cout << "The winner is player two" << endl;
                    break;
                }else if (V3 == V5 && V5 == V7 && V7 == PLAYER_2) { // rigth diagonal check
                    cout << "The winner is player two" << endl;
                    break;
                }
                // the case of no winners
                if (counter == 9) { // when the counter reaches 9, display no winners
                    cout << "No winner" << endl;
                    break;
                }

            } while (counter != 9); // iterate if this conditions is true

        }else // stop if the answer is 'no'
            break;

    }while (answer == "yes" || answer == "Yes"); // iterate if the answer is yes

    return 0;
}
