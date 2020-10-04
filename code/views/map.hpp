#ifndef VIEW_MAP
#define VIEW_MAP

#include <iostream>

#include "../typedef.hpp"

#include "../models/map.hpp"

void print_map(Map* const map){
    for (uint x = 0; x < LEN_X; ++x){
        for (uint y = 0; y < LEN_Y; ++y){
            t_koords    koords  (x, y);

            if (map->get_available(koords)){
                std::cout << "A\t";
            }
            else {
                std::cout << (uint)map->get_structure(koords) << '\t';
            }
        }
        std::cout << std::endl;
    }
}

#endif
