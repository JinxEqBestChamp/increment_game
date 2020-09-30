#include <iostream>
#include <vector>

#include "structures/struct_base.hpp"
#include "map.hpp"
#include "typedef.hpp"

#define MAIN_LOOP false

void create_miner(uint, uint, Map*, STRUCT, std::vector <OreMiner*>*);
void run_model(Map*);

int main() {
    Map* map = new Map();

    std::vector <OreMiner*>* ore_miner;

    create_miner(0, 0, map, STRUCT::coal_miner, ore_miner);

    do {
        run_model(map);
    } while (MAIN_LOOP);
}

void run_model(Map* map){
    std::cout << map << std::endl;
}

void create_miner(uint x, uint y, Map* map, STRUCT structure, std::vector <OreMiner*>* ore_miner){
    OreMiner* miner = new OreMiner(0, 0, map, structure);
    ore_miner->push_back(miner);
}
