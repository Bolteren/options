#include "options.hpp"
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
void fulScrean(void)
{
	::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
}

void Graphics_Scrin(int positionOptions)
{
	string a = "mode con cols=";
	string b =  " lines=";
	string w, h;
	cin >> w >> h;	
	string sizeOpt;
	sizeOpt = a + w + b + h;
	char str[255];
	int counter = 0;
	for(counter; sizeOpt[counter] != '\0'; counter++)
	{
		str[counter] = sizeOpt[counter];
	}
	str[counter++] = '\0';
	cout << str << endl;
	system(str);
	return;
}
