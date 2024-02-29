#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
public:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list <string> PuublishedVideoTitles;

};


int main()
{
	YouTubeChannel ytChannel;
	ytChannel.Name = "My channel";
	ytChannel.OwnerName = "Paula";
	ytChannel.SubscribersCount = 1200;
	ytChannel.PuublishedVideoTitles = {"C++ Intro", "C++ Yalla", "C++ OOP"};

	cout << "Name" << ytChannel.Name << endl;
	cout << "Owner" << ytChannel.OwnerName << endl;
	cout << "Subscribers" << ytChannel.SubscribersCount << endl;
	cout << "Videos: " << endl;
	for (string videoTitle : ytChannel.PuublishedVideoTitles)
	{
		cout << videoTitle << endl;
	}

}
