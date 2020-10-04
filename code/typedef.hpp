#ifndef TYPEDEFINITION
#define TYPEDEFINITION

#include <map>
#include <vector>

class OreMiner;
class MapFragment;

typedef unsigned int        uint;
typedef unsigned long int   ulong;
typedef unsigned short      ushort;

enum class RESOURCES : uint;

typedef std::pair   <uint, uint>        t_koords;
typedef std::pair   <RESOURCES, ulong>  t_ins_resource;
typedef std::map    <RESOURCES, ulong>  t_map_resources;

typedef std::vector <OreMiner>                  t_vec_ore_miner;
typedef std::vector <std::vector <MapFragment>> vec_2d;

#endif
