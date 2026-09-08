#include <iostream>
#include <vector>
#include <random>
#include <string>
#include <utility>
#include <algorithm>
#include <iterator>

const std::string pool = "AaBbCcDdEeFfGgHhIiJjKkLlMm NnOoPpQqRrSsTtUuVvWwXxYyZz";

std::string name = "My name is water";
std::vector<double>normalised_fit;
std::vector <double> all_fit_score;
std::vector <std::string> random;
std::vector<std::string> generator(int length,int no_of_string);
void fitness(std::vector<std::string> &random);
void fit_normalization(std::vector<double> &all_fit_score);
std::pair<int,int> wheel_of_fortune(std::vector<double> &normalised_fit);
std::string crossover(int parent1,int parent2);
void clear(std::vector<double>&normalised_fit,std::vector <double> &all_fit_score);
std::string mutation(std::string child);
std::string elitism();


int main(){
    
    generator(name.length(), 100);
    
    int generation_count = 0; 

    do {
        
        fitness(random);
        fit_normalization(all_fit_score);

        std::string best = elitism();
        
        generation_count++;
        std::cout << "Generation " << generation_count << " Best: " << best << "\n";

        std::vector<std::string> next_generation;

    
        for(int i = 0; i < 99; i++) {
            auto [a, b] = wheel_of_fortune(normalised_fit);

            std::string child = crossover(a, b);
            std::string mutated_child = mutation(child);
            
            next_generation.push_back(mutated_child);
        }
        
        next_generation.push_back(best);

        random = std::move(next_generation);
               
        clear(normalised_fit, all_fit_score);
 
    } while(std::ranges::find(random, name) == random.end());

    std::cout << "\nSUCCESS! Target string found!\n";
    
    std::cout << "--- Final Population Vector Elements ---\n";
    for(int i = 0; i < random.size(); i++){
        std::cout << random[i] << "\n";
    }

    return 0;
}



std::vector<std::string> generator(int length,int no_of_string){
    
    std::random_device rd;
    std::mt19937 generator(rd());

    std::uniform_int_distribution<std::size_t> distribution(0, pool.size() - 1);

for(int i=0;i < no_of_string;i++){
    
    std::string temp;

    for(int j = 0;j<length;j++){
        temp = temp + pool[distribution(generator)];

    }
    random.push_back(temp);
    }
    
    return random;
}

void fitness(std::vector<std::string> &random){
    
    for(int a = 0 ;a<random.size();a++){
        int fit = 0;
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

std::pair<int,int> wheel_of_fortune(std::vector<double> &normalised_fit){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::discrete_distribution<int> d(normalised_fit.begin(), normalised_fit.end());
        int parent1 = d(gen);
        int attempts = 0;
        int parent2 =d(gen);
        while (parent2 == parent1 && attempts < 100) {
    parent2 = d(gen);
    attempts++;
}
    
    return {parent1,parent2};
}

std::string crossover(int parent1,int parent2){
    std::string child;
    const std::string p1 = random[parent1];
    const std::string p2 = random[parent2];
    int size = p1.length();
    for(int i=0;i<size/2;i++){
        child = child + p1[i];
    }
    for(int i = size/2;i<size;i++){
        child = child + p2[i];
    }
    return child;
}

void clear(std::vector<double>&normalised_fit,std::vector <double> &all_fit_score){
    normalised_fit.clear();
    all_fit_score.clear();
    
}

std::string mutation(std::string child){
    
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<std::size_t> distribution(0, pool.size() - 1);
    std::uniform_int_distribution<std::size_t> mutation(1, 1000);
    for(int i =0;i<child.length();i++){
        int propability = mutation(gen); 
            if(propability < 5){
                child[i] = pool[distribution(gen)];
            }
    }
    return child;
}


std::string elitism(){
    auto max = std::max_element(all_fit_score.begin(),all_fit_score.end());
    int a = std::distance(all_fit_score.begin(),max);
    std::vector<std::string> elite;
    std::string best = random[a];
    return best;
}


