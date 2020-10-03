#include <iostream>
#include <vector>

#include "map.hpp"
#include "typedef.hpp"

#include "structures/base.hpp"
#include "structures/managers.hpp"
#include "structures/ore_miner.hpp"

#define MAIN_LOOP false

void create_miner   (t_koords, Map*, STRUCT, std::vector <OreMiner*>*);
void run_model      (Map*);

int main() {
    Map*            map     = new Map();
    OreMinerManager nigger  (map);

    nigger.create_miner(t_koords(0, 1), STRUCT::coal_miner);
    nigger.create_miner(t_koords(1, 1), STRUCT::gold_miner);
    nigger.create_miner(t_koords(2, 4), STRUCT::coal_miner);
    nigger.create_miner(t_koords(3, 7), STRUCT::coal_miner);
    nigger.create_miner(t_koords(4, 1), STRUCT::coal_miner);
    nigger.create_miner(t_koords(5, 1), STRUCT::coal_miner);

    do {
        run_model(map);
    } while (MAIN_LOOP);
}

void run_model(Map* map){
    std::cout << map << std::endl;
}
