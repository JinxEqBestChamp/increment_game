#include <iostream>
#include <vector>


#include "map.hpp"
#include "typedef.hpp"
#include "const.hpp"

//all structure headers
#include "structures/base.hpp"
#include "structures/managers.hpp"
#include "structures/ore_miner.hpp"

#define MAIN_LOOP false

void create_miner   (t_koords, Map*, STRUCT, std::vector <OreMiner*>*);
void run_model      (Map*);

int main() {
    Map*    map = new Map();
    std::vector <OreMiner*>* ore_miner;

    create_miner(t_koords(0, 0), map, STRUCT::coal_miner, ore_miner);

    do {
        run_map_view(map);
    } while (MAIN_LOOP);
}

void run_map_view(Map* map){
    std::cout << map << std::endl;
}
