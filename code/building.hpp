#ifndef STRUCTURES
#define STRUCTURES

#include <array>
#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "structure_const.hpp"

typedef unsigned int        uint;
typedef unsigned long int   ulong;
typedef unsigned short      ushort;



//every structure is based on this
class Structure{
    public:
        Structure(uint x, uint y){
            m_x = x;
            m_y = y;   
        }

        bool move (uint new_x, uint new_y){
            return true;
        }

        uint get_x() const {return m_x;}
        uint get_y() const {return m_y;}

    private:
        uint m_x;
        uint m_y;
};

class OreMiner : Structure{
    public:

        OreMiner(uint x, uint y, std::string ore, std::string landscape, ushort level=1)
        : Structure{x, y} {
            if(this->check_valid_ore(ore)){
                m_ore           = ore;
                m_level         = level;
                m_production    = 1;

                if (level > 1) {
                    for (ushort i = 1; i < level; ++i){
                        m_production *= 2;
                    }
                }
            }

            //TODO: set VALID_LANDSCAPES (vector) (check map position for landscape and compare)
        }
        
        bool check_valid_ore(std::string);

        //getter
        std::string get_ore         ()    const {return m_ore;}
        uint        get_level       ()    const {return m_level;}
        ulong       get_production  ()    const {return m_production;}

    private:
        std::vector <std::string>   VALID_LANDSCAPES;
        std::string                 m_ore;
        ushort                      m_level;
        ulong                       m_production;
};

bool OreMiner::check_valid_ore(std::string ore){

    for (unsigned int i_ore = 0; i_ore < VALID_ORES.size(); ++i_ore){
        if (ore == VALID_ORES[i_ore])
            return true;
    }
    return false;
}

#endif

/*

TODO:
Check, if enought resources for upgrade
Check should be on map

*/
