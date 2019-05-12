#pragma 
#include <fstream>
#include "Frame.h"
#include "PageTable.h"
#include "Address.h"

struct Status
{
    bool accessed ;
    bool dirty;
    Status() : accessed(false), dirty(false) {}
};

struct Mem
{
    Status stat;
    Frame data;
};

class Ram
{
public:
    Ram();

    template<typename T>
        void read(Address physical , T& data);

    Mem Memory[128];

};

