#ifndef STRUCTURE_CONST
#define STRUCTURE_CONST

#include <iostream>

enum class STRUCT {
    wood_cutter,
    stone_miner,
    iron_miner,
    gold_miner,
    trans_liquid,
    trans_item,
    trans_gas,
    coal_miner,
    store_item,
    store_liquid,
    store_gas,
    water_pump,
};

// enum class LANDSCAPES {
//     forest, 
//     grass_land, 
//     stones, 
//     water,
// };

// enum class ORES {
//     coal, 
//     wood, 
//     gold, 
//     wood, 
//     stone,
// };

// bool landscape_is_valid(STRUCT building, LANDSCAPES landscape) {
//     switch (landscape) {
//         case LANDSCAPES::water          : return water_building         (building);
//         case LANDSCAPES::grass_land     : return grass_land_building    (building);
//         case LANDSCAPES::forest         : return forest_building        (building);
//         case LANDSCAPES::stones         : return stones_building        (building);
//         default                         : return false;
//     };
// }

// bool forest_building(STRUCT building){
//     switch (building)
//     {
//         case STRUCT::trans_gas      : return true; 
//         case STRUCT::trans_liquid   : return true; 
//         case STRUCT::trans_item     : return true; 
//         case STRUCT::wood_cutter    : return true;    
//         default                     : return false;
//     }
// }

// bool stones_building(STRUCT building){
//     switch (building){
//         case STRUCT::trans_item     : return true;
//         case STRUCT::trans_liquid   : return true;
//         case STRUCT::trans_gas      : return true;
//         case STRUCT::stone_miner    : return true;
//         case STRUCT::coal_miner     : return true;
//         default                     : return false;
//     };
// }

// bool grass_land_building(STRUCT building){
//     switch (building){
//         case STRUCT::trans_item     : return true;
//         case STRUCT::trans_liquid   : return true;
//         case STRUCT::trans_gas      : return true;
//         case STRUCT::store_item     : return true;
//         case STRUCT::store_gas      : return true;
//         case STRUCT::store_liquid   : return true;
//         default                     : return false;
//     }
// }

// bool water_building(STRUCT building){
//     switch (building){
//         case STRUCT::trans_gas      : return true;
//         case STRUCT::trans_liquid   : return true;
//         case STRUCT::water_pump     : return true;
//         default                     : return false;
//     }
// }

#endif
