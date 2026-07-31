#include <iostream>
#include <random>
#include <chrono>
int main(){
    auto start = std::chrono::high_resolution_clock::now();
    int t,a,b,c,d,q;
    std::cout << "the number of cases: " ;
    std::cin >> t;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int>distr(1,10);
    for(int i = 0;i<t;i++){
    a = distr(gen);
    b = distr(gen);
    c = distr(gen);
    d = distr(gen);
    std::cout <<a<<","<<b<<","<<c<<","<<d<<"\n";
    if(a==b and b==c and c==d) {
        std::cout << "true" <<"\n";
        q++;
    }
    else{
        std::cout << "false" <<"\n";
    }
}
    std::cout <<"number squres can be formed:"<< q;
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << "\nExecution Time: " << duration.count() << " ms\n";
    return 0;

}