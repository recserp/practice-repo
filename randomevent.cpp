#include <ctime>
#include <iostream>
int main(){
    srand(time(NULL));
    int a;
    char b;
    a = (rand() %4) +1;
    std::cout << "do you want to gamble your saving away?";
    std::cin >>b;
    if(b = 'y'){
    switch(a){
        case 1:
        std::cout << "You have won a prize of nothing";
        break;
        case 2:
        std::cout << "Congrates you now have a j*b";
        break;
        case 3:
        std::cout << "idk ran out of budget";
        break;
        case 4:
        std::cout << "this shit is held together by power of friendship";
        break;

    }
}
else{
    std::cout << "loser";
}
    return 0;
}
