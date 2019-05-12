void MemManager::pagein(Page& p, BackingStore bs)
{
	//frameNumber  //= PRA
	bs.read()//overwrite RAM data
	//searchPT[Framenumber].valid = false;
	//PT[Frame].valid = True;

    //when there's a page fault
    FIFO f ;
    Frame frame = f.findVictim(/* pagetable*/ );

    bs.read(p, Memory[frame]);
    //search in the Page table
    

} 