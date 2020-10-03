
#include <iostream>
#include <vector>

#include "../typedef.hpp"
#include "../map.hpp"

#include "base.hpp"
#include "ore_miner.hpp"

#ifndef STRUCT_MANAGERS
#define STRUCT_MANAGERS

class OreMinerManager{
    
    public:
        OreMinerManager(Map* map)
        : m_map(map) 
        {
            for (const auto& i_res : RESOURCES()){
                m_resource_production.insert(t_ins_resource(i_res, 0));
            }

        }

        bool create_miner(t_koords koords, STRUCT structure){

            //map validation
            if (!m_map->get_available(koords)){
                return false;
            }

            //structure validation
            if (structure == STRUCT::first || structure == STRUCT::last){
                return false;
            }

            RESOURCES   resource  = get_ore(structure);

            //TODO: check for pipe connection
            //TODO: check for correct landscape

            m_miner.push_back(OreMiner(koords, m_map, structure, resource));
            return true;
        }

    private:

        //returns resource from structure
        RESOURCES get_ore(STRUCT structure) {
            if (structure == STRUCT::coal_miner) return RESOURCES::coal;
            if (structure == STRUCT::gold_miner) return RESOURCES::gold;
            if (structure == STRUCT::iron_miner) return RESOURCES::iron;
            return RESOURCES::first;
        }

        Map*            m_map;
        t_vec_ore_miner m_miner;
        t_map_resources m_resource_production;
};

#endif
