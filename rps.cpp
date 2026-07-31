#include<iostream>
#include<ctime>

int main(){
    int a,b;
    std::string c = "yes";
    std::cout << "ROCK PAPER SCISSOR" << "\n";
    
    srand(time(NULL));

   do{a = (rand() % 3) + 1;
    std::cout << "R = 1,P = 2, S =3 :";
    std::cin >> b;
    switch(a){
    case 1:
        std::cout << "Rock" << "\n";
        if(b==2){
            std::cout << "You win" << "\n";
        }
        else if(b==3){
            std::cout << "You lose" << "\n";
        }
        else{
            std::cout << "Draw" << "\n";
        }
        break;
    case 2:    
        std::cout << "Paper" << "\n";
        if(b==3){
            std::cout << "You win"<<"\n";
        }
        else if(b==1){
            std::cout << "You lose"<<"\n";
        }
        else{
            std::cout << "Draw"<<"\n";
        }
        break;
    case 3:
        std::cout << "Scissor"<<"\n";
        if(b==1){
            std::cout << "You win"<<"\n";
        }
        else if(b==2){
            std::cout << "You lose"<<"\n";
        }
        else{
            std::cout << "Draw"<<"\n";
        }
        break;
    default:
        std::cout << "select a valid response:";
        break;
    }
        
    std::cout << "do you want to redo:";
    std::cin >> c;

}   while(c == "yes");


    std::cout<<"thanks for playing the game";
    return 0;    
}