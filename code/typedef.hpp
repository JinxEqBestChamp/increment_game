#ifndef TYPEDEFINITION
#define TYPEDEFINITION

#include <map>
#include <vector>

#include "structures/base.hpp"
#include "structures/ore_miner.hpp"

typedef unsigned int        uint;
typedef unsigned long int   ulong;
typedef unsigned short      ushort;

typedef std::pair   <uint, uint>        t_koords;
typedef std::pair   <RESOURCES, ulong>  t_ins_resource;
typedef std::map    <RESOURCES, ulong>  t_map_resources;

typedef std::vector <OreMiner>          t_vec_ore_miner;

#endif
