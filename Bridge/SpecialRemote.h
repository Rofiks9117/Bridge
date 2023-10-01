class SpecialRemote : public RemoteControl
{
public:
	SpecialRemote(TVFactory* tvFactory);
	void up();
	void down();
private:
	TV* tv;
	TVFactory tvFactory;
};