#ifndef STRUCTURE_CONST
#define STRUCTURE_CONST

#include <vector>
#include <string>

static const std::vector <std::string> VALID_ORES = {
    "coal", 
    "iron", 
    "gold", 
    "wood", 
    "stone"
};

static const std::vector <std::string> LANDSCAPES = {
    "deepwater",
    "forest",
    "grass_land",
    "marianengraben", //unique
    "oil",
    "stones",
    "water", 
};

//contain valid structures for mountain
static const std::vector <std::string> VALID_MOUNTAIN = {
    "coal_miner",
    "gold_miner",
    "iron_miner",
    "stone_miner",
    "trans_liquid",
};

static const std::vector <std::string> VALID_STONES = {
    "coal_miner",
    "stone_miner",
    "pipe",
    "trans_item",
    "trans_liquid",
    "trans_gas",
};

static const std::vector <std::string> VALID_GRASS_LAND = {
    "trans_item",
    "trans_gas"
    "trans_liquid",
};

static const std::vector <std::string> VALID_FOREST = {
    "trans_item",
    "trans_gas",
    "trans_liquid",
    "wood_cutter",
};

static const std::vector <std::string> VALID_WATER = {
    "trans_gas",
    "trans_liquid",
};

bool landscape_is_valid(std::string building, std::string landscape) {
    switch (landscape) {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
}

#endif
