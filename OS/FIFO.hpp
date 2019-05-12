class FIFO : public PRA
{
public:
	FIFO();
	Word findVictim();

private:
	Word front;
};