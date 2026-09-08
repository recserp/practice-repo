

#include <iostream>
#include <vector>
#include <random>
#include <string>
#include <utility>
#include <algorithm>

std::string name = "my name is water";
std::vector<std::string> population;



std::string gen(std::string genes);

class DNA {
public:
    std::string genes = "";
    DNA(std::string genes = "") {
        this->genes = gen(genes);
    }
};

std::string gen(std::string genes) {
    const std::string pool = "AaBbCcDdEeFfGgHhIiJjKkLlMm NnOoPpQqRrSsTtUuVvWwXxYyZz";
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<std::size_t> distribution(0, pool.size() - 1);

    for (int j = 0; j < 16; j++) {
        genes += pool[distribution(generator)];
    }

    return genes;
}

