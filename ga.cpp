#include <iostream>
#include <vector>
#include <random>
#include <string>

std::string name = "My name is ozuss";
void generator(int length,int no_of_string);
void fitness(std::vector<std::string> &random);

class sol{
    public:
    std::string genotype;
    double fitness;

};

int main(){
    generator(name.length(),20);
    return 0;
}

void generator(int length,int no_of_string){
    const std::string pool = "AaBbCcDdEeFfGgHhIiJjKkLlMm NnOoPpQqRrSsTtUuVvWwXxYyZz";
    std::vector <std::string> random;
for(int i=0;i < no_of_string;i++){
    std::random_device rd;
    std::mt19937 generator(rd());

    std::uniform_int_distribution<std::size_t> distribution(0, pool.size() - 1);

    std::string temp;

    for(int j = 0;j<length;j++){
        temp = temp + pool[distribution(generator)];

    }
    random.push_back(temp);
    }
    for(int i =0;i<random.size();i++){
        std::cout<<random[i]<<"\n";
    }
}

void fitness(std::vector<std::string> &random){
    int fit = 0;
    std::vector <double> all_fit_score;
    for(int a = 0 ;a<20;a++){
        std::string temp = random[a];
        for(int i =0;i<temp.length();i++){
            if(temp[i] == name[i]){
                fit = fit+1;
            }
        }
        all_fit_score.push_back(fit);
        
    }
    all_fit_score.shrink_to_fit();
}

void fit_normalization(std::vector<double> &all_fit_score){
    std::vector<double>normalised_fit;
    double total_fit = 0;
    for(int i =0;i <all_fit_score.size();i++){
        total_fit = total_fit + all_fit_score[i];
    }
    for(int i =0;i <all_fit_score.size();i++){
        double temp;
        temp = all_fit_score[i]/total_fit;
        normalised_fit.push_back(temp);
    }
    normalised_fit.shrink_to_fit();
}
