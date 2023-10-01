class RemoteControl
{
public:
	virtual void on();
	virtual void off();
	virtual void setChannel(int _channel);
	virtual int getChannel();
	virtual void setTV(std::string type);
private:
	TV* tv;
	TVFactory tvFactory;
};