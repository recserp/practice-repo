#include <iostream> 
int power(int base,int power);

int main(){
    std::cout << power(5,3);
}

int power(int base,int exp){
    if(exp <=0){
        return 1;
    }
    return  base*power(base,exp-1);
}
