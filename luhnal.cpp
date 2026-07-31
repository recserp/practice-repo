#include <iostream>


int check(const int Cnum);

int sumodd(const std::string cardnumber);

int sumeven(const std::string cardnumber);

int main(){

    std::string cardnumber;
    std::cout << "Enter card no.";
    std::cin >> cardnumber;

    int result = sumodd(cardnumber)+sumeven(cardnumber);
    if(result%10 == 0){
        std::cout <<"\n"<< "the card no. is valid";
        }
    else{
         std::cout <<"\n"<< "the card no. is not valid";
    }

    return 0;
}


int check(const int Cnum){
    return Cnum%10+((Cnum/10)%10);

}


int sumodd(const std::string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size();i<=0;i-=1){
        sum = sum + cardnumber[i] - '0';
    }
    return sum;

}

int sumeven(const std::string cardnumber){

    int sum = 0;
    for(int i = cardnumber.size();i<=0;i-=2){
        sum = check((sum + cardnumber[i] - '0')*2);
    }
    return sum;
}