#include <iostream>

using namespace std;

int main(void)
{
	int pole[13][13] =
	{
		6, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 7, 0,
		10, 0,  0,  0,  0,  0,  0,  0,  0,  0, 0, 10, 20,
		10, 0,  0,  0,  0,  0,  0,  0,  0,  0, 0, 10, 21,
		10, 0,  0,  0,  0,  0,  0,  0,  0,  0, 0, 10, 22,
		10, 0,  0,  0,  0,  0,  0,  0,  0,  0, 0, 10, 23,
		10, 0,  0,  0,  0,  0,  0,  0,  0,  0, 0, 10, 24,
		10, 0,  0,  0,  0,  0,  0,  0,  0,  0, 0, 10, 25,
		10, 0,  0,  0,  0,  0,  0,  0,  0,  0, 0, 10, 26,
		10, 0,  0,  0,  0,  0,  0,  0,  0,  0, 0, 10, 27,
		10, 0,  0,  0,  0,  0,  0,  0,  0,  0, 0, 10, 28,
		10, 0,  0,  0,  0,  0,  0,  0,  0,  0, 0, 10, 29,
		9, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 8, 0,
		0, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 0, 0
	};
	int exit = 0;

	while (exit == 0)
	{
		int stroka = 0; // выбор строки
		int stolbec = 0; // выбор столбца
		int select = 0; // выбор элемента установки
		int g_select = 0; // выбор между строиться, играть и выйти
		int have_exit = 0;

		system("cls");
		for (int i = 0; i <= 12; ++i)
		{
			for (int j = 0; j <= 12; ++j)
			{
				if (pole[i][j] == 0)
					cout << ' ';
				else if (pole[i][j] == 1)
					cout << (char)206;
				else if (pole[i][j] == 2)
					cout << (char)204;
				else if (pole[i][j] == 3)
					cout << (char)185;
				else if (pole[i][j] == 4)
					cout << (char)203;
				else if (pole[i][j] == 5)
					cout << (char)202;
				else if (pole[i][j] == 6)
					cout << (char)201;
				else if (pole[i][j] == 7)
					cout << (char)187;
				else if (pole[i][j] == 8)
					cout << (char)188;
				else if (pole[i][j] == 9)
					cout << (char)200;
				else if (pole[i][j] == 10)
					cout << (char)186;
				else if (pole[i][j] == 11)
					cout << (char)205;
				else if (pole[i][j] == 12)
					cout << "X";
				else if (pole[i][j] == 20)
					cout << 0;
				else if (pole[i][j] == 21)
					cout << 1;
				else if (pole[i][j] == 22)
					cout << 2;
				else if (pole[i][j] == 23)
					cout << 3;
				else if (pole[i][j] == 24)
					cout << 4;
				else if (pole[i][j] == 25)
					cout << 5;
				else if (pole[i][j] == 26)
					cout << 6;
				else if (pole[i][j] == 27)
					cout << 7;
				else if (pole[i][j] == 28)
					cout << 8;
				else if (pole[i][j] == 29)
					cout << 9;
			}
			cout << endl;
		}

		cout << "What to do?" << endl;
		cout << "1 - Continue" << endl;
		cout << "2 - Start play" << endl;
		cout << "3 - Exit" << endl;
		cin >> g_select;
		if (g_select == 1)
		{
			cout << "Enter stroka:" << endl;
			cin >> stroka;
			cout << "Enter stolbec:" << endl;
			cin >> stolbec;
			if (stroka == -1)
			{
				for (int i = 1; i < 10; ++i)
				{
					if (pole[0][i] == 0)
					{
						cout << "Already have exit here" << endl;
						have_exit = 1;
						system("pause");
					}
				}
			}
			if (stroka == 10)
			{
				for (int i = 1; i < 10; ++i)
				{
					if (pole[11][i] == 0)
					{
						cout << "Already have exit here" << endl;
						have_exit = 1;
						system("pause");
					}
				}
			}
			if (stolbec == -1)
			{
				for (int i = 1; i < 10; ++i)
				{
					if (pole[i][0] == 0)
					{
						cout << "Already have exit here" << endl;
						have_exit = 1;
						system("pause");
					}
				}
			}
			if (stolbec == 10)
			{
				for (int i = 1; i < 10; ++i)
				{
					if (pole[i][11] == 0)
					{
						cout << "Already have exit here" << endl;
						have_exit = 1;
						system("pause");
					}
				}
			}
			if (stroka == -1 && stolbec == -1 || stroka == -1 && stolbec == 10 || stroka == 10 && stolbec == -1 || stroka == 10 && stolbec == 10)
			{
				cout << "You can't delete this" << endl;
				system("pause");
			}
			else if (have_exit != 1)
			{
				if (stroka == -1 || stroka == 10 || stolbec == -1 || stolbec == 10)
				{
					pole[stroka + 1][stolbec + 1] = 0;
				}
				else
				{
					pole[stroka + 1][stolbec + 1] = 12;
					system("cls");
					for (int i = 0; i <= 12; ++i)
					{
						for (int j = 0; j <= 12; ++j)
						{
							if (pole[i][j] == 0)
								cout << ' ';
							else if (pole[i][j] == 1)
								cout << (char)206;
							else if (pole[i][j] == 2)
								cout << (char)204;
							else if (pole[i][j] == 3)
								cout << (char)185;
							else if (pole[i][j] == 4)
								cout << (char)203;
							else if (pole[i][j] == 5)
								cout << (char)202;
							else if (pole[i][j] == 6)
								cout << (char)201;
							else if (pole[i][j] == 7)
								cout << (char)187;
							else if (pole[i][j] == 8)
								cout << (char)188;
							else if (pole[i][j] == 9)
								cout << (char)200;
							else if (pole[i][j] == 10)
								cout << (char)186;
							else if (pole[i][j] == 11)
								cout << (char)205;
							else if (pole[i][j] == 12)
								cout << "X";
							else if (pole[i][j] == 20)
								cout << 0;
							else if (pole[i][j] == 21)
								cout << 1;
							else if (pole[i][j] == 22)
								cout << 2;
							else if (pole[i][j] == 23)
								cout << 3;
							else if (pole[i][j] == 24)
								cout << 4;
							else if (pole[i][j] == 25)
								cout << 5;
							else if (pole[i][j] == 26)
								cout << 6;
							else if (pole[i][j] == 27)
								cout << 7;
							else if (pole[i][j] == 28)
								cout << 8;
							else if (pole[i][j] == 29)
								cout << 9;
						}
						cout << endl;
					}
					cout << "Select element: " << endl;
					cout << "0 - Clear" << endl;
					cout << "1 - " << (char)206 << endl;
					cout << "2 - " << (char)204 << endl;
					cout << "3 - " << (char)185 << endl;
					cout << "4 - " << (char)203 << endl;
					cout << "5 - " << (char)202 << endl;
					cout << "6 - " << (char)201 << endl;
					cout << "7 - " << (char)187 << endl;
					cout << "8 - " << (char)188 << endl;
					cout << "9 - " << (char)200 << endl;
					cout << "10 - " << (char)186 << endl;
					cout << "11 - " << (char)205 << endl;
					cout << "13 - Select another" << endl;
					cin >> select;
					if (select != 13)
						pole[stroka + 1][stolbec + 1] = select;
				}
			}
		}
		else if (g_select == 2)
		{

		}
		else if (g_select == 3)
			exit = 1;
	}

	return 0;
}