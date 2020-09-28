#include <iostream>

#include "building.hpp"

#define MAIN_LOOP false

void run_model();

int main() {
    
    do {
        run_model();
        break;
    } while (MAIN_LOOP);
}

void run_model(){
    OreMiner* Gurke = new OreMiner(0, 0,"coal");
    std::cout << Gurke->get_ore() << std::endl;
}

void hurensohn(){}
