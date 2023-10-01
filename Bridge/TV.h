class TV
{
public:
	virtual void on() = 0;
	virtual void off() = 0;
	virtual void tuneChannel(int channel) = 0;
	virtual int getchannel() = 0;
};