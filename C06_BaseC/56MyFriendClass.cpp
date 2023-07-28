#include <iostream>
#include <cstring>
using namespace std;

class Girl;

class boy
{
private:
	int height;
	friend class Girl;
public:
	Boy(int len) : height(len)
	{ }
	void ShowYourFriendInfo(Girl &frn);
};

class Girl
{
private:
	char phNum[20];
public:
	Girl(char *num)
	{
		strcpy(phNum, num);
	}
	void ShowYourFriendInfo(Boy& frn);
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl &frn)
{
	cout << "Her Phone number: " << frn.height << endl;
}

int main(void)
{
	Boy boy(170);
	Girl girl("010-1523-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
	return 0;
}