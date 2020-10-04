#ifndef VIEW_RESOURCES
#define VIEW_RESOURCES

#include <iostream>
#include <string>

#include "../const.hpp"
#include "../typedef.hpp"
#include "../models/map.hpp"
#include "../models/structures/managers.hpp"

void print_resources(Map* const map){

    for (const auto& i_res : RESOURCES()){
        switch (i_res)
        {
            case RESOURCES::coal:   std::cout << "Coal:\t" << map->get_resource_value(RESOURCES::coal) << std::endl;    break;
            case RESOURCES::iron:   std::cout << "Iron:\t" << map->get_resource_value(RESOURCES::iron) << std::endl;    break;
            case RESOURCES::gold:   std::cout << "Gold:\t" << map->get_resource_value(RESOURCES::gold) << std::endl;    break;
            case RESOURCES::wood:   std::cout << "Wood:\t" << map->get_resource_value(RESOURCES::wood) << std::endl;    break;
            case RESOURCES::stone:  std::cout << "Stone:\t" << map->get_resource_value(RESOURCES::stone) << std::endl;  break;
        }
    }
}

#endif
