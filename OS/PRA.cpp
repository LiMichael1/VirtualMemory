//reading backingstore into the ram 
//set page table to the frame and make the frame as invalid 
//read into the page table , if valid = true -> true frame 

//is process control block our page table?
//page table search
//where does the data for MMU.read(pt, logical, DATA!!!!) come from <- BACKINGSTORE.BIN
//why is &7f00 the mask for frames?
//why do we not use first fit to assign frame index by looking at free frame list?
//we look in the pt to get frame #

//page replacement 
//-> find the victim
//-

PRA::PRA()
{
	
}

void PRA::updateUsage()
{

}
PRA& PRA::getPRA()
{

}

Word PRA::findVictim()
{

}