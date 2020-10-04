#include "../typedef.hpp"
#include "../const.hpp"

#include <iostream>
#include <vector>
#include <map>


#ifndef MAP
#define MAP

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

class Map{
    public:

        Map(){
            m_map = vec_2d(LEN_X, std::vector<MapFragment>(LEN_Y));
            
            for (const auto& i_res : RESOURCES()){
                if ((i_res != RESOURCES::first) && (i_res != RESOURCES::last)){
                    m_resources.insert(t_ins_resource (i_res, 0));
                }
            }
        }

        //getter
        bool    get_available       (t_koords koords)   const   {return m_map[koords.first][koords.second].get_available();}
        STRUCT  get_structure       (t_koords koords)   const   {return m_map[koords.first][koords.second].get_structure();}

        ulong   get_resource_value  (RESOURCES res)     const   {
            if (res == RESOURCES::first || res == RESOURCES::last){
                return 0;
            }

            switch(res){
                case RESOURCES::coal: return m_resources.find(RESOURCES::coal)->second;
                case RESOURCES::gold: return m_resources.find(RESOURCES::gold)->second;
                case RESOURCES::iron: return m_resources.find(RESOURCES::iron)->second;
                default: return 0;
            }
        }

        //setter
        void set_structure      (t_koords koords, STRUCT structure){

            if (!this->check_valid_koords(koords))
                return;

            MapFragment& gulasch    = m_map[koords.first][koords.second];

            if (gulasch.get_available()){
                gulasch.set_available(false);
                gulasch.set_structure(structure);
            }
        }


    friend std::ostream& operator<<(std::ostream&, const Map*);

    private:

        vec_2d          m_map;
        t_map_resources m_resources;

        //true, if koords in map range
        bool check_valid_koords(t_koords koords){
            if (koords.first < LEN_X && koords.second < LEN_Y) return true;
            else return false;
        }
};

std::ostream& operator<<(std::ostream& os, const Map* map){
    for (uint x = 0; x < LEN_X; ++x){
        for (uint y = 0; y < LEN_Y; ++y){
            if (map->get_available(t_koords(x, y)))
                os << 'A';
            else 
                os << int(map->get_structure(t_koords(x, y)));
            os << '\t';
        }
        os << "\n\n";
    }
    return os;
}

#endif
