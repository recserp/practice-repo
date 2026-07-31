#include <iostream>
#include <ctime>
int user();
int computer();
void result(int user, int computer);
int a,b;

int main(){
    user();
    computer();
    result(a,b);
    return 0;
}

int user(){
    std::cout << "select from rock =1,paper=2 ,seccior=3" << "\n";
    std::cin >> a;
        switch(a){
        case 1:
            std::cout << "Rock"<<"\n";
            break;
        case 2:
            std::cout << "Paper"<<"\n";
            break;
        case 3:
            std::cout << "scissor"<<"\n";    
            break;
     
    }
    return 0;
}



int computer(){
    srand(time(NULL));
    b = (rand()%3) + 1;
    switch(b){
        case 1:
            std::cout << "Computer:Rock"<<"\n";
            break;
        case 2:
            std::cout << "Computer:Paper"<<"\n";
            break;
        case 3:
            std::cout << "Computer:scissor"<<"\n";    
            break;
    }
    return 0;
}


void result(int a,int b){
    int c;
    c = a - b;
    if(c<0){
        c = c+3;
    }
    if(c == 0){
        std::cout << "tie";
    }
    else if( c == 1){
        std::cout << "You won";
    }
    else if(c ==2){
        std::cout << "computer won";
    }
}