#ifndef MAP
#define MAP

#include <iostream>
#include <vector>
#include <array>
#include <string>

#include "typedef.hpp"
#include "structure_const.hpp"

#define LEN_X 10
#define LEN_Y 10

//just contain available status and structure
class MapFragment{

    public:
        MapFragment(){
            m_available = true;
        }

        //getter
        bool    get_available()                 const   {return m_available;}
        STRUCT  get_structure()                 const   {return m_structure;}

        //setter
        void    set_available(bool value)               {m_available = value;}
        void    set_structure(STRUCT value)             {m_structure = value;}

    private:
        bool    m_available;
        STRUCT  m_structure;
};

typedef std::vector <std::vector <MapFragment>> vec_2d;

class Map{
    public:

        Map(){
            m_map = vec_2d(LEN_X, std::vector<MapFragment>(LEN_Y));
        };

        //getter
        bool get_available      (uint x, uint y)    const   {return m_map[x][y].get_available();}
        STRUCT get_structure    (uint x, uint y)    const   {return m_map[x][y].get_structure();}

        //setter
        void set_structure(uint x, uint y, STRUCT structure){

            if (!this->check_valid_koords(x, y))
                return;

            if (m_map[x][y].get_available()){
                m_map[x][y].set_available(false);
                m_map[x][y].set_structure(structure);
            }
        }

    friend std::ostream& operator<<(std::ostream&, const Map*);

    private:

        vec_2d m_map;

        //true, if koords in map range
        bool check_valid_koords(uint x, uint y){
            if (x < LEN_X && y < LEN_Y) return true;
            else return false;
        }
};

std::ostream& operator<<(std::ostream& os, const Map* map){
    for (uint x = 0; x < LEN_X; ++x){
        for (uint y = 0; y < LEN_Y; ++y){
            if (map->get_available(x, y))
                os << 'A';
            else 
                os << int(map->get_structure(x, y));
            os << '\t';
        }
        os << "\n\n";
    }
    return os;
}

#endif
