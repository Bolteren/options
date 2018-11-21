#include "options.hpp"

using namespace std;

void fulScrean(void)
{
	::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
}

void WindowColor(string colorFont, string colorBackGraund)
{
	string a = "color ";
	string /*colorFont, colorBackGraund, */sizeColorOpt;
//	cin >> colorFont >> colorBackGraund;
	sizeColorOpt = a + colorBackGraund + colorFont;
	char str[255];
	int num = 0;
	for(num; sizeColorOpt[num] != '\0'; num++)
	{
		str[num] = sizeColorOpt[num];
	}
	str[num++] = '\0';
	cout << str;
	system(str);
	system("cls");
}
void sizeWindow(string w, string h)
{
	string a = "mode con cols=";
	string b =  " lines=";
//	string w, h;
//	cin >> w >> h;	
	string sizeOpt;
	sizeOpt = a + w + b + h;
	char str[255];
	int counter = 0;
	for(counter; sizeOpt[counter] != '\0'; counter++)
	{
		str[counter] = sizeOpt[counter];
	}
	str[counter++] = '\0';
	system(str);
}

void gorisontalLineBottom(void)//Русует горизонтальную нижнюю линию
{
	char a = 220;
	for(int counter = 0; counter < 119; counter++)
	{
		cout << a;
	}
	cout << endl;
}

void verticalLine(void)//Рисует вертикальную линию
{
	char b = 219;
	cout << b;
}
void gorisontalLineVoid(void)//Рисует пустую горизонтальную линию
{
	for(int counter = 1; counter< 118; counter++)
	{
		cout << " ";
	}
}
void choiceOFF(void)//Рисует место выбора без отметки
{
	verticalLine();
	cout << endl;
	verticalLine();
	printf(" %c %c ", 91, 93);
}
void choiceON(void)//Рисует место выбора с отметкой
{
	verticalLine();
	cout << endl;
	verticalLine();
	printf(" %c%c%c ", 91, 249, 93);
}
void Graphics_Scrin(int positionOptions)
{
	gorisontalLineBottom();
	verticalLine();
	gorisontalLineVoid();
	choiceON();
/*----------------------------------------------------------------------------
	Рисуем первую картинку.*/
	cout << "Введите цвет фона и цвет шрифта: ";
	for (int )




/*------------------------------------------------------------------------------*/	
	
	return;
}

void tableUTF(void)
{
	for (int counter = 0; counter < 256; counter++)
	{
		printf("%d %c\t", counter, counter);
	}
}
