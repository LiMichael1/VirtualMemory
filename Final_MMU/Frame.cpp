#include "Frame.h"



Frame::Frame()
{
    for (int i = 0; i < 256; i++) {
        Fbytes[i] = 0;
    }
}


Frame::~Frame()
{
}

void Frame::setFrame(Page p)
{
    for (int i = 0; i < 256; i++) {
        Fbytes[i] = p.Pbytes[i];
    }
}
