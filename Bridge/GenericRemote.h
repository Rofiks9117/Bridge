class GenericRemote : public RemoteControl
{
public:
	GenericRemote(TVFactory* tvFactory);
	void nextChannel();
	void prevChannel();
private:
	TV *tv;
	TVFactory tvFactory;
};