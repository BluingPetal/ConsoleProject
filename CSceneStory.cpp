#include "CSceneStory.h"
#include <iostream>
#include <time.h>
#include<conio.h>
#include<Windows.h>

using namespace std;
int depressed = 8;

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
	int next;
	elevatorOut(1);
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";
	Sleep(300); gotoxy(20, 26); cout << "���� �Ϸ翴��. ���� ������ ������."; next = _getch(); // ���ŷ
	Sleep(300); gotoxy(20, 26); cout << "�ƴ� ���� 10���ݾ�? ����ü ���忡�� �� �ð��̳� �־����ž�?"; next = _getch();
	Sleep(300);
	Inventory(); gotoxy(33, 9); cout << "�κ��丮�� Ư���� ��찡 �ƴϸ�"; gotoxy(32, 11); cout << "�� �� ���۸��� �ѹ��� �� �� �ֽ��ϴ�.";
	gotoxy(29, 15); cout << "���� �ö󰥶����� ���ΰ��� ��ﰨ�� �����ϴ�. ";
	gotoxy(32, 17); cout << "��ﰨ�� ����߸� ����� ã���ּ���. "; next = _getch();
	Sleep(300); system("cls"); Sleep(1000); Opened(1); gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";
	Sleep(700); gotoxy(10, 26); cout << "?? : "; gotoxy(20, 26); cout << "�̰� �ۼ��Ͻð�..                                           "; HalfOpen2(); Sleep(700); HalfOpen1(); // ������ ����
	Sleep(700); gotoxy(10, 26); cout << "�� : "; gotoxy(20, 26); cout << "??.. ������                "; InsideClosed(1); next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "�� : "; gotoxy(20, 26); cout << "�츮 ���� 7���̾�. 7������ ����."; gotoxy(92, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0); next = _getch(); //gotoxy(92, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0);

}

void CSceneStory::floor2()
{
	int next; 
	int ifkilled;
	// �κ��丮 Ȯ�� ����
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "                                                                   ";
	gotoxy(20, 28);	cout << "                                                                   "; next = _getch();
	gotoxy(0, 0);
	InsideClosed(2); Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(2); gotoxy(92, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0); // ������ ���� 
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "�ȳ��ϼ���! �ö󰡽ó���?                                                 "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "��. Ÿ��?                                                               "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "��! �ƺ��� �θ��ż� ���� �����ߵſ�.                                      "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "�׷�? �׷� ���� ��������.                                                "; next = _getch();
	Sleep(500); HalfOpen2(); Sleep(500); HalfOpen1(); Sleep(500); InsideClosed(2); isInElevator();  gotoxy(85, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0);// ������ ���� 
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "�ƺ��� ���� ���� �Ⱦ��ϼ���. ������ �� ������ ���ư��̴ٰ� �Ͻðŵ��.       "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "...                                                                     "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "�ٵ� ���� ������ ��Ű���� �ߴ� �� ���̿���!                                "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "������ �ƺ��� �����ּż� �ӻ��ؿ�.                                        "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "....�� �ƽǰž�                                                         "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "���� �ƺ� �Ⱦ��ؿ�. �׷��� �����ƿ�!                                      "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "�ٵ� ó������ ������� �׷� �� �ϰ�ٳ൵ ������?                          "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "���� ������ ó�����°� �ƴѵ���?                                          "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "���� �ʸ� ó�����ݾ�.                                                    "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "�������� �� �ƽ��ٵ�..                                                   "; next = _getch();
	Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(2); gotoxy(92, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0); // ������ ����
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "�� �����ߴ�! ������ ������.. �����߰���..?                                "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "���� ����.                                                             "; next = _getch(); 
	Sleep(300); gotoxy(10, 26); cout << "?? : "; gotoxy(20, 26);	cout << "��� �ε��ƴٴϴ°ž�!! ���⿡�� ���� ����������!!                        "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "?? : "; gotoxy(20, 26);	cout << "���� �����̳� �����ϸ� ���̳� ����.                                      "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "��...��                                                                "; next = _getch();
	Sleep(700); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "���� ������! �ٵ� �������� ã�� �ִ°� ���ƿ�.                            "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "��?                                                                    "; next = _getch();
	// �Ź����̱�
	Sleep(300); gotoxy(20, 28);	cout << "������ �̾߱��� ��ﰨ�� 20 �پ�����.                                  "; next = _getch(); 
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��"; cout << "      ";
	Sleep(300); gotoxy(10, 26); cout << "      "; gotoxy(20, 26);	cout << "                                                                      ";
	Sleep(300); gotoxy(20, 26);	cout << "�Ź̰� ���ٴѴ�....                                                   "; next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "���̽ðڽ��ϱ�? (1: ���δ�/ 2: ������ �ʴ´�) : "; cin >> ifkilled;
	if (ifkilled == 1)
	{
		depressed -= 10;
		gotoxy(20, 27);
		cout << "�Ź̸� �׿� ��ﰨ�� 10 �������ϴ�.";
	}
	else if (ifkilled == 1)
	{
		gotoxy(20, 27);
		cout << "�Ź̸� ������ �ʾҽ��ϴ�.";
	}
	else
	{
		gotoxy(20, 27);
		cout << "��ŵ�մϴ�.";
	}

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
