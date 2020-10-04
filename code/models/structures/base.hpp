#ifndef STRUCTURES
#define STRUCTURES

#include <array>
#include <iostream>
#include <map>
#include <string>
#include <vector>

//#include "structure_const.hpp"

#include "../../typedef.hpp"

#include "../map.hpp"


//every structure is based on this
class Structure{
    public:
        Structure(t_koords koords, Map* map, STRUCT structure)
        : m_map(map), m_structure(structure), m_koords(koords)
        {
            m_map->set_structure   (koords, structure);
        }

        t_koords    get_koords() const {return m_koords;}

    protected:
        STRUCT      m_structure;
        Map*        m_map;
        t_koords    m_koords;
};


// bool OreMiner::check_valid_ore(std::string ore){

//     for (unsigned int i_ore = 0; i_ore < VALID_ORES.size(); ++i_ore){
//         if (ore == VALID_ORES[i_ore])
//             return true;
//     }
//     return false;
// }

#endif

/*

TODO:
Check, if enought resources for upgrade
Check should be on map

*/
