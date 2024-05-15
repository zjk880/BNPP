#include<iostream>
#include<string>
#include"BPNN.h"

using namespace std;


int main()
{
	BPNN bp(INPUT);
	bp.AddLayer(4);
	bp.AddLayer(OUTPUT);

	string command;
    while (true)
	{
		cin >> command;
		if (command == "i=")
		{
			bp.Init();
		}
		else if (command == "test")
		{
			bp.TEST();
		}
		else if (command == "t=")
		{
			bp.Tnit();
		}
		else if (command == "train")
		{
			bp.Train();
		}
		else
		{
			cout << "error" << endl;
		}
	}
	

	return 0;
}