#include <iostream>
#include <ctime>

void board(char *space);

void playermove(char player,char *space);

void computermove(char computer,char *space);

bool check(char *space,char player,char computer);

bool tie(char *space);

int main(){
    char space[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool runing = true;


    board(space);

    while(runing){
        playermove(player,space);
        board(space);
        if(check(space,player,computer)){
            runing = false;
            break;
        }

        computermove(computer,space);
        board(space);

        if(check(space,player,computer)){
            runing = false;
            break;
        }
    }

    return 0;
}

void board(char *space){
    int i;
    std::cout << "\n";
    for(i = 0 ;i <5 ;i+=3){
        std::cout << "     |      |     " << "\n";
        std::cout << "  "<<space[i]<<"  |   "<<space[i+1]<<"  |   "<<space[i+2]<<"   " << "\n";
        std::cout << "_____|______|_____     " << "\n";
        }
    std::cout << "     |      |     " << "\n";
    std::cout << "  "<<space[i]<<"  |   "<<space[i+1]<<"  |   "<<space[i+2]<<"   " << "\n";
    std::cout << "     |      |     " << "\n";
    std::cout << "\n";

}

void playermove(char player,char *space){
    int no;
    do{
        std::cout << "chose a no. b/w 1 and 9 that is corresponding to grid 1,2,3"<<"\n"<<"4,5,6,\n"<<"7,8,9"<<"\n";
        std::cin >> no;
        no--;
        if(space[no] == ' '){
            space[no] = player;
            break;
        }
        else if(space[no] != ' '){
            std::cout << "enter a valid no. or space is already taken";
        }
    }
   
    while(!no <0|| !no>8);
}

void computermove(char computer,char *space){
    while(true){
    srand(time(NULL));
    int a = (rand()%8)+1;
    if(space[a] == ' '){
        space[a] = computer;
        break;
    }

    }   
}

bool check(char *space,char player,char computer){
    
    if(space[0] != ' ' & space[1] == space[0] & space[1] == space[2])
    {
    space[0] == player ? std::cout << "you won" : std::cout << "you lose";
    }
    else if(space[3] != ' ' && space[3] == space[4] & space[4] == space[5])
    {
    space[3] == player ? std::cout << "you won" : std::cout << "you lose";
    }
    else if(space[6] != ' ' && space[6] == space[7] & space[7] == space[8])
    {
    space[6] == player ? std::cout << "you won" : std::cout << "you lose";
    }
    else if(space[0] != ' ' && space[0] == space[3] & space[3] == space[6])
    {
    space[0] == player ? std::cout << "you won" : std::cout << "you lose";
    }
    else if(space[1] != ' ' && space[1] == space[4] & space[4] == space[7])
    {
    space[1] == player ? std::cout << "you won" : std::cout << "you lose";
    }
    else if(space[2] != ' ' && space[2] == space[5] & space[5] == space[9])
    {
    space[2] == player ? std::cout << "you won" : std::cout << "you lose";
    }
    else if(space[0] != ' ' && space[0] == space[4] & space[4] == space[9])
    {
    space[0] == player ? std::cout << "you won" : std::cout << "you lose";
    }
    else{
        return false;
    }
    return true;
    
}
    


bool tie(char *space){
    for(int i = 0 ; i<8;i++){
        if(space[i] == ' '){
            return false;
        }
    
    }
    std::cout << "it's a tie";
     return true;

}