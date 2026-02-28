#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spares);
void computermove(char *space, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char*spaces);  

int main(){

    using std::cout;
    using std::cin;
    using std::endl;

        char spaces[9] = {' ',' ',' ', ' ',' ',' ',' ',' ', ' '};
        char player = 'X';
        char computer = '0';
        bool running = true;
 
        drawBoard(spaces);

        return 0;
}

void drawBoard(char *spaces){
    std::cout <<  "     |     |     " << '\n';
    std::cout <<  " "<< spaces[0] << " |  "<< spaces[1] << "   |  "<< spaces[2] << "   " << '\n'; 

}
void playerMove(char *spares){

}
void computermove(char *space, char computer){

}
bool checkWinner(char *spaces, char player, char computer){
    return 0;
}
bool checkTie(char*spaces){
    return 0;
} 
