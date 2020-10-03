#include <iostream>

#include "../typedef.hpp"
#include "../map.hpp"

#include "base.hpp"

#ifndef STRUCTURES_OREMINER
#define STRUCTURES_OREMINER

class OreMiner : Structure{
    public:

        OreMiner(t_koords koords, Map* map, STRUCT structure, RESOURCES resource)
        : Structure{koords, map, structure} {
            m_resource  = resource;
        }
        
        //getter
        uint        get_level               ()  const   {return m_level;}
        bool        get_pipe_connected      ()  const   {return m_connect_pipe;}
        ulong       get_production          ()  const   {return m_connect_storage ? m_production : 0;}
        RESOURCES   get_resource            ()  const   {return m_resource;}
        bool        get_storage_connected   ()  const   {return m_connect_storage;}

    protected:

        ushort      m_level             = 1;
        bool        m_connect_pipe      = false;
        ulong       m_production        = 1;
        RESOURCES   m_resource;
        bool        m_connect_storage   = false;
};

#endif
