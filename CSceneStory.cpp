#include "CSceneStory.h"
#include <iostream>
#include <time.h>
#include<conio.h>

using namespace std;

int CSceneStory::start()
{
	while (true) // �޴� ����
	{
		int input;
		int num = 0;
		while (true)
		{
			system("cls");
			startScene(num);
			while (true)
			{
				if (_kbhit())
				{
					input = _getch();
					if (input == 13) // ����
						break;
					else if (input == 224)
					{
						input = _getch();
						switch (input) // ����Ű
						{
						case 72:
							if (num != 0) num = 0;
							break;
						case 75:
							if (num == 2) num = 1;
							else if (num == 3) num = 2;
							break;
						case 77:
							if (num == 1) num = 2;
							else if (num == 2) num = 3;
							break;
						case 80:
							if (num == 0) num = 2;
							break;
						default:
							continue;
						}
					}
					else continue;
					break;
				}
			}
			if (input == 13)break;
		}

		int winput, wnum = 1, wloc[2] = { 29, 9 };
		switch (num)
		{
		case 0:
			return 0; // 0 �ݳ��� ó������ ����
		case 1:
			Inventory();
			gotoxy(15, 6); cout << "��� ������ ���ðڽ��ϱ�?";
			gotoxy(32, 9); cout << "1��"; gotoxy(60, 10); cout << "6��";
			gotoxy(32, 11); cout << "2��"; gotoxy(60, 12); cout << "7��";
			gotoxy(32, 13); cout << "3��"; gotoxy(60, 14); cout << "8��";
			gotoxy(32, 15); cout << "4��"; gotoxy(60, 16); cout << "9��";
			gotoxy(32, 17); cout << "5��"; gotoxy(60, 18); cout << "10��";
			gotoxy(17, 20); cout << "ps. �������� ������ ���� ���� ä�� �ش� ���� ����˴ϴ�.";
			gotoxy(29, 9); cout << "��";
			while (true)
			{
				if (_kbhit())
				{
					winput = _getch();
					if (winput == 27)
					{
						wnum = 0;
						break;
					}
					else if (winput == 13) // ����
						break;
					else if (winput == 224)
					{
						winput = _getch();
						switch (winput) // ����Ű
						{
						case 72:
							if ((wnum != 1) && (wnum != 6))
							{
								gotoxy(wloc[0], wloc[1]); cout << "  ";
								gotoxy(wloc[0], wloc[1] -= 2); cout << "��";
								wnum -= 1;
							}
							break;
						case 75:
							if ((wnum == 6) || (wnum == 7) || (wnum == 8) || (wnum == 9) || (wnum == 10))
							{
								gotoxy(wloc[0], wloc[1]); cout << "  ";
								gotoxy(wloc[0] -= 28, wloc[1] -= 1); cout << "��";
								wnum -= 5;
							}
							break;
						case 77:
							if ((wnum == 1) || (wnum == 2) || (wnum == 3) || (wnum == 4) || (wnum == 5))
							{
								gotoxy(wloc[0], wloc[1]); cout << "  ";
								gotoxy(wloc[0] += 28, wloc[1] += 1); cout << "��";
								wnum += 5;
							}
							break;
						case 80:
							if ((wnum != 5) && (wnum != 10))
							{
								gotoxy(wloc[0], wloc[1]); cout << "  ";
								gotoxy(wloc[0], wloc[1] += 2); cout << "��";
								wnum += 1;
							}
							break;
						default:
							continue;
						}
					}
					else continue;
				}
			} // ��� : wnum
			if (wnum == 0) continue;
			else return wnum; // 1���� 10��
		case 2:
			Inventory();
			gotoxy(25, 9); cout << "���ΰ��� ���� �Ϸ縦 ��ġ�� ������ ���ư��� ���Դϴ�.";
			gotoxy(18, 12); cout << "���������͸� Ÿ��, ���� ������� ����ġ�� �̻� ������ �޽��ϴ�.";
			gotoxy(30, 15); cout << "����� ���ÿ� ���� �ḻ�� �޶����ϴ�.";
			gotoxy(35, 18); cout << "�����ϰ� �������� ����ּ���.";
			while (true)
			{
				if (_kbhit())
				{
					winput = _getch();
					if (winput == 27 || winput == 13)
					{
						wnum = 0;
						break;
					}
					else continue;
				}
			} // ��� : wnum
			continue;
		case 3:
			return -1; //���� �ݳ��� ��� ���� ����
		}
	}
}

void CSceneStory::floor1()
{
	elevatorOut(1);
	gotoxy(5, 26); cout << "���� �Ϸ翴��. ���� ������ ������." << endl;
}

void CSceneStory::floor2()
{
}

void CSceneStory::floor3()
{
}

void CSceneStory::floor4()
{
}

void CSceneStory::floor5()
{
}

void CSceneStory::floor6()
{
}

void CSceneStory::floor7()
{
}

void CSceneStory::floor8()
{
}

void CSceneStory::floor9()
{
}

void CSceneStory::floor10()
{
}

void CSceneStory::end()
{
}
