#pragma 
#include <fstream>
#include "Frame.h"
#include "Page.h"
#include <vector>
#include "Address.h"

struct Status
{
    bool accessed ;
    bool dirty;
    Status(){
        accessed= false;
        dirty = false;
    }
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


    std::vector<Mem> Memory[128];

    
    

private:
        void Ram(Address x, Page p);

};

