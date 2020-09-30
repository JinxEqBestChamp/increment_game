#ifndef STRUCTURES
#define STRUCTURES

#include <array>
#include <iostream>
#include <map>
#include <string>
#include <vector>

//#include "structure_const.hpp"

#include "../typedef.hpp"
#include "../map.hpp"

//every structure is based on this
class Structure{
    public:
        Structure(uint x, uint y, Map* map, STRUCT structure)
        : m_map(map), m_structure(structure), m_y(y), m_x(x)
        {
            m_map->set_structure   (x, y, structure);
        }

        bool move (uint new_x, uint new_y){
            return true;
        }

        uint get_x() const {return m_x;}
        uint get_y() const {return m_y;}

    private:
        STRUCT  m_structure;
        Map*    m_map;
        uint    m_x;
        uint    m_y;
};

class OreMiner : Structure{
    public:

        OreMiner(uint x, uint y, Map* map, STRUCT structure)
        : Structure{x, y, map, structure} {
            if(map->get_available(x, y)){
                m_level         = 1;
                m_production    = 1;
            }

            //TODO: set VALID_LANDSCAPES (vector) (check map position for landscape and compare)
        }
        
        // bool check_valid_ore(std::string);

        //getter
        uint        get_level       ()    const {return m_level;}
        ulong       get_production  ()    const {return m_production;}

    private:
        ushort  m_level;
        ulong   m_production;
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
