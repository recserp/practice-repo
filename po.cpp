#include <iostream> 
int power(int base,int power);
void count(std::string a);

int main(){
    std::string a = "abc";
    count(a);
}

int power(int base,int exp){
    if(exp <=0){
        return 1;
    }
    return  base*power(base,exp-1);
}

void count(std::string a){
    int size = a.length(); 
    std::cout << power(2,size);
}
