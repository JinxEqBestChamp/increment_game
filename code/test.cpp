#include <iostream>
#include <vector>

#include "typedef.hpp"

#include "models/map.hpp"
#include "models/structures/base.hpp"
#include "models/structures/managers.hpp"
#include "models/structures/ore_miner.hpp"

#include "views/map.hpp"
#include "views/resources.hpp"

#define MAIN_LOOP false

void run_view      (Map* const);

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
        run_view(map);
    } while (MAIN_LOOP);
}

void run_view (Map* const map) {
    print_map       (map);
    print_resources (map);
}
