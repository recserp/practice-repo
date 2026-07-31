#include <iostream>
 int main(){
    std::string uans;
    std::string a = "yes";
    std::string ques[] = {"my name: ","are sacred of a j*b: ","my dream job: " , "hobbies: "};
    std::string ans[] = {"yuta_the_cockroach_kisser","yes","unemployed" , "idk"};
    std::cout << "*****************Quiz****************";
    int size = sizeof(ques)/sizeof(ques[0]);
    do{
        for(int i = 0 ;i < size;i++){
            std::cout << ques[i];
            std::cin >> uans;
            if(uans == ans[i]){
                std::cout << "correct:" << "\n";
            }
            else{
                std::cout << "wrong" <<"\n";
                break;
            }
        }
    std::cout << "do you want to play again:";    
    std::cin >> a;
}while( a == "yes");
    return 0;
 }