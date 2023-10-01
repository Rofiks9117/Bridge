class Sony : public TV
{
public:
	void on();
	void off();
	void tuneChannel(int);
	int getchannel();
private:
	int channel = 0;
};