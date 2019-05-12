void MemManager::pagein(Page& p, BackingStore bs)
{
	//frameNumber  //= PRA
	//overwrite RAM data
	
    //when there's a page fault
    FIFO f ;
    Word frame = f.findVictim(pt, p);

    bs.read(p, Memory[frame.uint32()]);
    

	//searchPT[Framenumber].valid = false;
	//PT[Frame].valid = True;

    

} 