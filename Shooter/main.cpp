#include <iostream>
#include <conio.h> 
#include <string>
using namespace std;
using namespace std;
#define Escape 27
#define Enter 13
#define Enter 27 
#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77
//#define VAR_1

void main()
{
	setlocale(LC_ALL, "");
	cout << "Shooter" << endl;

	char key = 0;
	
#ifdef VAR_1
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UP_ARROW)
		{
			cout << "Вперед" << endl;
		}
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)
		{
			cout << "Назад" << endl;
		}
		else if (key == 'a' || key == 'A' || key == LEFT_ARROW)
		{
			cout << "Влево" << endl;
		}
		else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)
		{
			cout << "Вправо" << endl;
		}
		else if (key == ' ')
		{
			cout << "Прыжок" << endl;
		}
		else if (key == Enter)
		{
			cout << "Огонь" << endl;
		}
		else
		{
			if (key != -32)cout << "Error" << endl;
		}
	} while (key = !Escape);
#endif // VAR_1
	do
	{
		key = _getch();
		cout << "\tНажмите клавишу\t" << endl; cin >> key;
		switch (key)
		{
		case 119: cout << "Вперед"; break;
		case 115: cout << "Назад"; break;
		case  97: cout << "Влево"; break;
		case 100: cout << "Вправо"; break;
		case  32: cout << "Прыжок"; break;
		case  13: cout << "Огонь"; break;
		default:cout << "Error" << endl;
		}
	} while (key !=27);
	
}
