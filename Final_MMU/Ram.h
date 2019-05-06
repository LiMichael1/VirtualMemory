#pragma once
#include <fstream>
#include "Frame.h"
#include "Page.h"
#include <vector>
#include "Address.h"

struct Status
{
    bool accessed = false;
    bool dirty = false;
};

class Ram
{
public:
    Ram();
    ~Ram();

    Ram& instance();

    Ram operator =(Page p); 
    Ram operator =(Frame f);

    void read(std::ifstream IT);


    std::vector<Status, Frame> status[256];

    Frame Memory[256];
    

private:
        void Ram_(Address x, Page p);

};

