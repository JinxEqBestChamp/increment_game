#ifndef STRUCTURE_CONST
#define STRUCTURE_CONST

#include <iostream>

#include "typedef.hpp"

enum class STRUCT : uint {
    first,
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
    last,
};

STRUCT operator++(STRUCT& x){
    return  x = (STRUCT)(std::underlying_type <STRUCT>::type(x) + 1);
}

STRUCT operator*(STRUCT c){
    return  c;
}

STRUCT begin(STRUCT r) {
    return  STRUCT::first;
}

STRUCT end(STRUCT r) {
    STRUCT  l   = STRUCT::last;
    return  ++l;
}

enum class RESOURCES : uint {
    first,
    coal, 
    iron,
    wood, 
    gold, 
    stone,
    last,
};

RESOURCES operator++(RESOURCES& x){
    return  x = (RESOURCES)(std::underlying_type <RESOURCES>::type(x) + 1);
}

RESOURCES operator*(RESOURCES c){
    return  c;
}

RESOURCES begin(RESOURCES r) {
    return  RESOURCES::first;
}

RESOURCES end(RESOURCES r) {
    RESOURCES  l   = RESOURCES::last;
    return  ++l;
}

// enum class LANDSCAPES {
//     forest, 
//     grass_land, 
//     stones, 
//     water,
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
