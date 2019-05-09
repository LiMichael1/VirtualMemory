
#include "Frame.h"



Frame::Frame()
{
	Fbytes= "";
}

void Frame::setFrame(Page p)
{
    for (int i = 0; i < 256; i++) {
        Fbytes[i] = p.Pbytes[i];
    }
}

