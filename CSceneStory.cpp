#include "CSceneStory.h"
#include <iostream>
#include <time.h>
#include<conio.h>
#include<Windows.h>

using namespace std;
int depressed = 8;
bool getDriver = false, getDrink = false;
bool choosedDriver = false, choosedDrink = false;

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
	Sleep(300); gotoxy(20, 26); cout << "���� �Ϸ翴��. ���� ������ ������.";  next = _getch(); // ���ŷ
	Sleep(300); gotoxy(20, 26); cout << "�ƴ� ���� 10���ݾ�? ����ü ���忡�� �� �ð��̳� �־����ž�?";  next = _getch();
	Sleep(300);
	Inventory(); gotoxy(33, 9); cout << "�κ��丮�� Ư���� ��찡 �ƴϸ�"; gotoxy(32, 11); cout << "�� �� ���۸��� �ѹ��� �� �� �ֽ��ϴ�.";
	gotoxy(29, 15); cout << "���� �ö󰥶����� ���ΰ��� ��ﰨ�� �����ϴ�. ";
	gotoxy(32, 17); cout << "��ﰨ�� ����߸� ����� ã���ּ���. ";  next = _getch();
	Sleep(300); system("cls"); Sleep(1000); Opened(1); gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";
	Sleep(700); gotoxy(10, 26); cout << "?? : "; gotoxy(20, 26); cout << "�̰� �ۼ��Ͻð�..                                           "; HalfOpen2(); Sleep(700); HalfOpen1(); // ������ ����
	Sleep(700); gotoxy(10, 26); cout << "�� : "; gotoxy(20, 26); cout << "??.. ������                "; InsideClosed(1);  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "�� : "; gotoxy(20, 26); cout << "�츮 ���� 7���̾�. 7������ ����."; gotoxy(92, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0);  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "                                                                   ";
	gotoxy(20, 28);	cout << "                                                                   ";
}

void CSceneStory::floor2()
{
	// �κ��丮 Ȯ�� ����
	inventory(); system("cls"); Opened(2); gotoxy(92, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0);
	int next;
	InsideClosed(2); Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(2); gotoxy(92, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0); // ������ ���� 
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";

	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "�ȳ��ϼ���! �ö󰡽ó���?                                                 ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "��. Ÿ��?                                                               ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "��! �ƺ��� �θ��ż� ���� �����ߵſ�.                                      ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "�׷�? �׷� ���� ��������.                                                ";  next = _getch();
	Sleep(500); HalfOpen2(); Sleep(500); HalfOpen1(); Sleep(500); InsideClosed(2); isInElevator();  gotoxy(85, 11); TextColor(4, 7); cout << "��"; TextColor(7, 0);// ������ ���� 
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "�ƺ��� ���� ���� �Ⱦ��ϼ���. ������ �� ������ ���ư��̴ٰ� �Ͻðŵ��.       ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "...                                                                     ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "�ٵ� ���� ������ ��Ű���� �ߴ� �� ���̿���!                                ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "������ �ƺ��� �����ּż� �ӻ��ؿ�.                                        ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "....�� �ƽǰž�                                                         ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "���� �ƺ� �Ⱦ��ؿ�. �׷��� �����ƿ�!                                      ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "�ٵ� ó������ ������� �׷� �� �ϰ�ٳ൵ ������?                          ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "���� ������ ó�����°� �ƴѵ���?                                          ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "���� �ʸ� ó�����ݾ�.                                                    ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "�������� �� �ƽ��ٵ�..                                                   ";  next = _getch();
	Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(3); gotoxy(92, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0); // ������ ����
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";
	Sleep(300); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "�� �����ߴ�! ������ ������.. �����߰���..?                                ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "���� ����.                                                             ";  next = _getch(); 
	Sleep(300); gotoxy(10, 26); cout << "?? : "; gotoxy(20, 26);	cout << "��� �ε��ƴٴϴ°ž�!! ���⿡�� ���� ����������!!                        ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "?? : "; gotoxy(20, 26);	cout << "���� �����̳� �����ϸ� ���̳� ����.                                      ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "��...��                                                                ";  next = _getch();
	Sleep(700); gotoxy(10, 26); cout << "���� : "; gotoxy(20, 26);	cout << "���� ������! �ٵ� �������� ã�� �ִ°� ���ƿ�.                            ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��  : "; gotoxy(20, 26);	cout << "��?                                                                    ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "�Ʊ� �������� ������� ����.                                             ";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "�����غ����� ������������ ������ ������ ���� ƴ�� ������. ���̴� ��������..?";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "�ٵ� ���� ���� ã�� �ִٴ°���?                                             ";  next = _getch();
	Sleep(300); gotoxy(20, 28);	cout << "������ �̾߱��� ��ﰨ�� 20 �پ�����.                                  "; next = _getch();
	depressed -= 2;
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��"; cout << "      ";
	gotoxy(10, 26); cout << "      "; gotoxy(20, 26);	cout << "                                                                      ";
	gotoxy(20, 28);	cout << "                                                                       ";
	killSpider();
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��"; cout << "      ";
}

int CSceneStory::floor3()
{
	// �κ��丮 Ȯ�� ����
	inventory(); system("cls"); Opened(3); gotoxy(92, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0);
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";
	int next;
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "��� ���̸� ������ ƴ�� ��������.                                        ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "���� ������ 10�� ���� ���� ����ٴϴ� ����Ŀ�� ���⼭ �ٽ� ���� �Ǿ���.      ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "�ʹ� �����ϰ� �Ѿƴٳ༭ �̻縦 ������ �� ���⼭ ����ĥ ���� �����µ�..      ";  next = _getch();
	Sleep(300); HalfOpen2(); Sleep(500); HalfOpen1(); Sleep(500); InsideClosed(3); isInElevator();  gotoxy(92, 7); TextColor(4, 7); cout << "��"; TextColor(7, 0);// ������ ���� 

	Sleep(300); gotoxy(10, 26); cout << "����Ŀ : "; gotoxy(20, 26);	cout << "�ȳ��ϼ���? �������̳׿�?                                                 ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��     : "; gotoxy(20, 26);	cout << "...�� ���� �����?                                                       ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "����Ŀ : "; gotoxy(20, 26);	cout << "����? ���� �־ ���ϰ� �ö󰡴� ���̿���.                                ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��     : "; gotoxy(20, 26);	cout << "���� ���̿�..?                                                           ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "����Ŀ : "; gotoxy(20, 26);	cout << "�װ� �� �������?                                                       ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��     : "; gotoxy(20, 26);	cout << "...�ƴϿ���                                                              ";  next = _getch();
	Sleep(1000); gotoxy(10, 26); cout << "����Ŀ : "; gotoxy(20, 26);cout << "�������� ��������? �� 7���̼̳�?                                       ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��     : "; gotoxy(20, 26);	cout << "�� �� ������ �Ƽ���?!                                                     ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "����Ŀ : "; gotoxy(20, 26);cout << "��.... �ƴϿ���. ���� 6������ �����ŵ��.                              ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "         "; gotoxy(20, 26);cout << "�����ϴ�. 6������ �����ٰ� �ص� �Ƹ� ������� �ö�� ���ɼ��� ũ��.      ";  next = _getch();
	Sleep(300); gotoxy(20, 26);cout << "�� ���ķ� ���� ���� ��� �ϱ� �ȴ�.                                   ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��     : "; gotoxy(20, 26);	cout << "���� ���� �ȵǳ�..?                                                     ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "����Ŀ : "; gotoxy(20, 26);cout << "��?                                                                    ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��     : "; gotoxy(20, 26);	cout << "�ƴϿ���.                                                               ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "����Ŀ : "; gotoxy(20, 26);cout << "������ ���� ���� ���ž� �� �� ���ƿ�. ����ģ���е� ����� ã�� ��̰ŵ��.   ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "����Ŀ : "; gotoxy(20, 26);cout << "���� ���� �׷����..                                                     ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��     : "; gotoxy(20, 26);	cout << "����ģ���� �ǵ��� ������! ��Ź�̿���..                                     ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "����Ŀ : "; gotoxy(20, 26);cout << "���� ���� �� ���̿���.                                                    ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "         "; gotoxy(20, 26);cout << "����ģ���� �츮 ���� �ִٴ� ����� ������.                                 ";  next = _getch();
	Sleep(300); gotoxy(20, 26);cout << "�ϴ� ����ģ������ ���϶�� ������ �����߰ڴ�.                              ";  next = _getch();
	Sleep(300); gotoxy(20, 26);cout << "���� �Բ� ���������͸� �ö󰡴µ���                                        ";
	Sleep(300); gotoxy(20, 27);cout << "����ģ���� ������� �������� �ð��� �� �� ���� ���̴�.                      ";  next = _getch();
	Sleep(300); gotoxy(20, 26); cout << "�ڵ��� ���͸��� ��� �Ƹ� ����� �� ����������..                         ";
	gotoxy(20, 27); cout << "                                                                      ";  next = _getch();
	Sleep(300); gotoxy(20, 26); cout << "                                                                       ";
	while (true)
	{
		int input;
		gotoxy(20, 26); cout << "1. ������ ������.                                                       ";
		gotoxy(20, 27); cout << "2. ����ģ���� ���� �ִ°� Ȯ������ ������ ���� ������ ����                  ";
		gotoxy(20, 28); cout << "    ������ �ö� �� ����ģ���� �ִ��� Ȯ���ϰ� ���� �����´�.              ";

		gotoxy(20, 29); cout << "������ �����Ͻðڽ��ϱ�? : ";
		cin >> input;
		
		gotoxy(20, 26); cout << "                                                                        ";
		gotoxy(20, 27); cout << "                                                                        ";
		gotoxy(20, 28); cout << "                                                                        ";

		gotoxy(20, 29); cout << "                                                                         ";
		if (input == 1)
		{
			Sleep(300); gotoxy(10, 26); cout << "         "; gotoxy(20, 26); cout << "���� ������ ������ �� ����� ���� ������ ���� �ö�� �� �ִ�.               ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "�� ���������� ��Ȳ�� ���ϱ� ���ؼ��� ���� ������ ������ ��.                 ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "�ڵ����� ���� ����ģ������ �ϴ� ���� �������� �ϱ� ���� ������ ������.       ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "��     : "; gotoxy(20, 26);	cout << "\"������ ����.\"                                                         ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "         "; gotoxy(20, 26); cout << "�ڵ����� �ٷ� ������. �ڸ� ���ƺ��� �� ���ڰ� ���� �Ĵٺ��� �ִ�.       ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "�ϴ� ������ �����ϴ� ���� �켱�� �� ����..                            ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "                                                                   ";
			break;
		}
		else if (input == 2)
		{
			Sleep(300); gotoxy(10, 26); cout << "         "; gotoxy(20, 26); cout << "���͸��� ��� ����� ������ ���� ���� ���� �и��ϴ�.                     ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "���� ������ ���� ����� ���� ������ �ö󰣴ٸ�                              ";
			gotoxy(20, 27); cout << "       ���������ͺ��� �� ���� ������ �� �ִ�.                               ";  next = _getch();
			gotoxy(20, 27); cout << "                                                                          ";
			gotoxy(20, 26); cout << "�� �������ʹ� ������ ���� ��� ������ �ο�� ���� ���������� �𸥴�.    ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "4���� �����ϰ� ���� �����ڸ��� ���ĳ���, ������� ������ ���� �ö󰬴�."; next = _getch();
			Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(4); gotoxy(92, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0); gotoxy(92, 7); TextColor(4, 7); cout << "��"; TextColor(7, 0); // ������ ����
			Sleep(300); gotoxy(20, 26); cout << "������ �� ����, ��𼱰� ���� ����� ������ ������                        ";
			gotoxy(20, 27); cout << "          ���𰡸� ���߸� ���� ������ ���������.						     "; next = _getch();
			gotoxy(20, 27); cout << "                                                                          ";
			gotoxy(20, 26); cout << "�̰�.. �������ΰ�..? ����..?                                                 ";  next = _getch();
			Sleep(300); gotoxy(20, 26);	cout << "����������� �ǽ� �ӿ� ����� �� �� ���ڰ� �տ� ���𰡸� ��� �����־���.   ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "         "; gotoxy(20, 26);	cout << "��.. �Ѹ��� �ƴϾ�����..                                                   ";  next = _getch();
			Sleep(300); gotoxy(20, 26);	cout << "�������� �Բ� �ǽ��� �Ҿ���.                                                ";  next = _getch();
			Sleep(300); system("cls"); end(); gotoxy(20, 26); cout << "ending1. ������                                                           ";  next = _getch();
			return -1;
		}
		else
		{
			gotoxy(20, 26); cout << "                                                                      ";
			gotoxy(20, 27); cout << "                                                                      ";
			gotoxy(20, 28); cout << "                                                                      ";

			gotoxy(20, 26); cout << "�ٽ� �Է����ּ���."; next = _getch();
			gotoxy(20, 26); cout << "                                                                      ";
			continue;
		}
	}

	Sleep(300); gotoxy(20, 28);	cout << "��ﰨ�� 10 �þ��.                                      "; next = _getch();
	depressed += 1;
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��"; cout << "      ";
	gotoxy(20, 28);	cout << "                                                          "; next = _getch();
	killSpider();
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��"; cout << "      ";
	return 4;
}

int CSceneStory::floor4()
{
	// �κ��丮 Ȯ�� ����
	inventory(); system("cls"); Opened(4); gotoxy(92, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0); gotoxy(92, 7); TextColor(4, 7); cout << "��"; TextColor(7, 0);
	InsideClosed(4); Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(4); gotoxy(92, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0); gotoxy(92, 7); TextColor(4, 7); cout << "��"; TextColor(7, 0); // ������ ����
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";
	int next;
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "4�� ���� ������ �� �� ���� ���� �Ҹ���ġ�� ���� ���� �Ѹ��� ����.            ";  next = _getch();
	Sleep(300); HalfOpen2(); Sleep(500); HalfOpen1(); Sleep(500); InsideClosed(4); isInElevator();  gotoxy(92, 7); TextColor(4, 7); cout << "��"; TextColor(7, 0);// ������ ���� 
	Sleep(300); gotoxy(20, 26);	cout << "���� ����Ŀ�� �� �ڸ��� �־ �����̶�� ������ �ߴ�.                      ";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "�� ���ڰ� Į�� ��� �־��� �����̴�.                                       ";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "�ڵ����� ���� ���� �� ���� ���ڰ� �Ű����ֱ⸸�� �⵵�ߴ�.                  ";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "������ �ڸ� ���ƺ��� ���� �ٶ����� �޸�                                   ";
	gotoxy(20, 27);	cout << "�� ���ڴ� Į�� �� ���� ���������� �� ���� �Ĵٺ��� �־���.                  ";  next = _getch();
	Sleep(300); gotoxy(20, 27);	cout << "                                                                       ";
	gotoxy(20, 26);	cout << "�� ���ڴ� ������ ���� �վ����� �Ĵٺ��� �ִ�. ���� ����� �����ϴ�.         ";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "���� ���� �����ϴ� �͵� ����� �� �ѵ� ����ұ�?                         ";  next = _getch();
	while (true)
	{
		int input;
		int answer=641562, plAnswer;
		gotoxy(20, 26); cout << "1. ���� �����Ѵ�.                                                        ";
		gotoxy(20, 27); cout << "2. �������� ���� ���� �������� ����.                                      ";

		gotoxy(20, 28); cout << "������ �����Ͻðڽ��ϱ�? : ";
		cin >> input;

		gotoxy(20, 26); cout << "                                                                        ";
		gotoxy(20, 27); cout << "                                                                        ";
		gotoxy(20, 28); cout << "                                                                        ";

		if (input == 1)
		{
			Sleep(300); gotoxy(20, 26); cout << "�׷�. ������ ���� ������ �ϴ� ���� ������ ���� ���� �־�.                  ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "�� ����� ǥ���� �����ϴ� �� Į�� �ٸ� ���� ���� �� ������ �ʰ�.            ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "�׸��� ���� Į�� �� ������Լ� ���Ѵ´ٸ� �׺��� �� ���� �͵� ����.         ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "��     : ";  gotoxy(20, 26);	cout << "�̾߾ƾƾƾƾ�!!!!!                                                     ";  next = _getch();
			Sleep(300);  gotoxy(10, 26); cout << "         "; gotoxy(20, 26); cout << "���� ���� �Է����ּ���!! " << answer << " : ";
			cin >> plAnswer;
			if (answer == plAnswer)
			{
				system("cls"); Cracked(5); gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";
				Sleep(300); gotoxy(20, 26); cout << "��! �� ����� �������� ��ġ�� ���� ������.                            ";  next = _getch();
				Sleep(300); gotoxy(20, 26); cout << "�Ʊ��� �Ҹ���ġ�� �󱼿��� �η����� ǥ������ �ٲ�� Į�� �ٴڿ� ��������. ";  next = _getch();
				Sleep(300); gotoxy(20, 26); cout << "5������ �� ���� ��� ������ ���� �ȵ��� �Ѽ��� ���鼭 �ٴ��� ���Ҵ�.     ";  next = _getch();
				Sleep(300); gotoxy(20, 26); cout << "�̰� ��¼��..?                                                        ";  next = _getch();
				while (true)
				{
					int driInput;
					gotoxy(20, 26); cout << "1. �ݴ´�.                                                             ";
					gotoxy(20, 27); cout << "2. ���� �ʴ´�.                                                        ";

					gotoxy(20, 28); cout << "������ �����Ͻðڽ��ϱ�? : ";
					cin >> driInput;
					gotoxy(20, 27); cout << "                                                                       ";
					gotoxy(20, 28); cout << "                                                                       ";
					if (driInput == 1)
					{
						gotoxy(20, 26); cout << "Į�� ȹ���ϼ̽��ϴ�.                                                    "; next = _getch();
						choosedDriver = true;
						getDriver = true;
						break;
					}
					else if (driInput == 2) break;
					else continue;
				}
				gotoxy(20, 26); cout << "                                                                       ";
				break;
			}
			else
			{
				system("cls"); Cracked(5); gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";
				Sleep(300); gotoxy(20, 26); cout << "��! �� ����� �������� ��ġ�� ���� ������.                            ";  next = _getch();
				Sleep(300); gotoxy(20, 26); cout << "�Ƕ��̸� ���̴� ��, ǫ�ϴ� �Ҹ��� �Բ� ���� ���� ���� �ʴ´�.       ";  next = _getch();
				Sleep(300); gotoxy(20, 26); cout << "�������� �� ������ �Ҹ���ġ�� �����Ҹ��� �Բ� ���Ҹ��� ����´�.        ";  next = _getch();
				Sleep(300); gotoxy(20, 26); cout << "\"�����ƿ� ? \"                                                        ";  next = _getch();
				Sleep(300); system("cls"); end(); gotoxy(20, 26); cout << "ending2. ���� : ȣ�� ���                                          ";  next = _getch();
				return -1;
			}
		}
		else if (input == 2)
		{
			Sleep(300); gotoxy(20, 26); cout << "�����غ��� ���� �� ����� ���� ���ϰ� �� ����� ���� � ������ ����.    ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "���� ���� ���� ��������ٰ� ���� �̻��� ����� �Ǵ� �� �ƴұ�?            "; next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "�׳� �� ���� �ߵ�� ���� ���������� �׸����ݾ�.                          ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "���� �߿� ���ڱ� ǫ�ϴ� �Ҹ��� �Բ� ���� ���� ���� �ʴ´�.           ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "�������� �� ������ �Ҹ���ġ�� �����Ҹ��� �Բ� ���Ҹ��� ����´�.        ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "\"�����ƿ� ? \"                                                        ";  next = _getch();
			Sleep(300); system("cls"); end(); gotoxy(20, 26); cout << "ending2. ���� : ȣ�� ���                                          ";  next = _getch();
			return -1;
		}
		else
		{
			gotoxy(20, 26); cout << "                                                                      ";
			gotoxy(20, 27); cout << "                                                                      ";
			gotoxy(20, 28); cout << "                                                                      ";

			gotoxy(20, 26); cout << "�ٽ� �Է����ּ���."; next = _getch();
			gotoxy(20, 26); cout << "                                                                      ";
			continue;
		}
	}

	Sleep(300); gotoxy(20, 28);	cout << "��ﰨ�� 10 �þ��.                                      "; next = _getch();
	depressed += 1;
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��"; cout << "      ";
	gotoxy(20, 28);	cout << "                                                          ";
	killSpider();
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��"; cout << "      ";
	return 4;
}

void CSceneStory::floor5t6()

{// �κ��丮 Ȯ�� ����
	inventory(); system("cls"); Opened(6); Sleep(300); HalfOpen2(); Sleep(500); HalfOpen1(); Sleep(500); InsideClosed(6); isInElevator(); gotoxy(92, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0);// ������ ���� 
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";
	int next;
	Sleep(300); gotoxy(20, 26);	cout << "���� ���� �ƴұ� �����Ѵ�.                                                ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��   : "; gotoxy(20, 26);	cout << "���������� �������� �ö󰡴� ���� �̷��� ���� ���� ���̾�.                  ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "�����ϴ� ����, 6������ �ѹ� �� ���� ���Ȱ�, ģ���� ����.                   ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "ģ�� : "; gotoxy(20, 26);	cout << "�ƴ�, ���� �־���? ���� ���� �Ͼ�� �ִ°ž�?                            ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��   : "; gotoxy(20, 26);	cout << "..? ������ �־���?                                                      ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "ģ�� : "; gotoxy(20, 26);	cout << "���� ��� ����� �������� �ö���� �־�. ����.. �ƴϴ�. �� �ǰ�����.        ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��   : "; gotoxy(20, 26);	cout << "���� �� �ǰ��� �ϵ��� Ư�� ����� ����. ���� ���� �ٰ� �ִ°ǰ� �ͱ⵵�ϰ�.";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "ģ�� : "; gotoxy(20, 26);	cout << "���� �ö󰡼� �� ����. ����� ���ƴٴ��� ��.                               ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��   : "; gotoxy(20, 26);	cout << "�� �ٳ�԰ŵ�? �� ���ƴٴϸ� �� �԰����.                                ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "ģ�� : "; gotoxy(20, 26);	cout << "...�Ȱ��� �Ǵϱ� �׳� ���ƴٴ��� ��. �� ���� ����� �װڴ�.                 ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��   : "; gotoxy(20, 26);	cout << "����°ž�.                                                              ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "ģ�� : "; gotoxy(20, 26);	cout << "�� �����̴µ� �̰ų� �޾�. ���� �̰ŷ� ����� �ѹ��� Ǯ�ȴ�.             ";  next = _getch();
	while (true)
	{
		int input;
		gotoxy(20, 26); cout << "1. �޴´�.                                                             ";
		gotoxy(20, 27); cout << "2. ���� �ʴ´�.                                                        ";

		gotoxy(20, 28); cout << "������ �����Ͻðڽ��ϱ�? : ";
		cin >> input;
		gotoxy(20, 27); cout << "                                                                       ";
		gotoxy(20, 28); cout << "                                                                       ";
		if (input == 1)
		{
			gotoxy(20, 26); cout << "û�갡���� ȹ���ϼ̽��ϴ�.                                           "; next = _getch();
			choosedDrink = true;
			getDrink = true;
			Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26); gotoxy(20, 26);  cout << "����..? ���� �ǵ��� �̰� ������ �ִ°���...?                         "; next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "ģ�� : "; gotoxy(20, 26);	cout << "������ �ʿ�� ����, �ϴ� ���� ������. ������ ���� �ѹ� ������~         ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "�Ѳ��� ����� �ٸ� ����� ������ ���� ���� ����ó�� �������� �𸣰�����   ";
			gotoxy(20, 27);	cout << "���� û�갡���� ����ִٴ� ���� �ܹ��� �˾�ë��.                         ";  next = _getch();
			Sleep(300); gotoxy(20, 27);	cout << "                                                                     ";
			gotoxy(20, 26);	cout << "�ٵ� ��..?                                                             ";
			break;
		}
		else if (input == 2) break;
		else continue;
	}
	system("cls"); Cracked(5); gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";
	Sleep(300); gotoxy(10, 26); cout << "ģ�� : "; gotoxy(20, 26);	cout << "�� ���� �������� ���ϰ� ��ó�? �� �޹ٶ��� �ϴ��� �ϳ��� ���� �����ٵ�. ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "�׷��� ���� �� �ڲ� �� ����ģ���� �������? �� ������ ���ϸ鼭.          ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "ģ�� : "; gotoxy(20, 26);	cout << "�� ����ģ���� �������� �ٳ�µ� �ʶ��� �����ôٰ� ��û �����ϴ��󤻤���";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��   : "; gotoxy(20, 26);	cout << "��????                                                                 ";  next = _getch();
	system("cls"); Opened(6); gotoxy(92, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0); InsideClosed(6); isInElevator(); gotoxy(92, 9); TextColor(4, 7); cout << "��"; TextColor(7, 0);
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";
	Sleep(300); gotoxy(10, 26); cout << "ģ�� : "; gotoxy(20, 26);	cout << "��- ���� ���°� ���ݾ�.                                                ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "        "; gotoxy(20, 26);	cout << "�г밡 ġ�о������. ���� ������ ������ �ٴϴ� ���̿� ����...             ";  next = _getch();
	gotoxy(20, 26); system("color 4");	cout << "ģ���� ����ģ���� ��Ű��� ���� ������.                                  ";  next = _getch();
	Sleep(300); system("color 7"); gotoxy(10, 26); cout << "        "; gotoxy(20, 26);	cout << "����ħ 7���� �����ؼ� ���������Ͱ� ������ ����ģ���� �� �ȿ��� ���ĳ��Դ�.";  next = _getch();

	Sleep(300); gotoxy(20, 28);	cout << "��ﰨ�� 10 �þ��.                                      "; next = _getch();
	depressed += 1;
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��"; cout << "      ";
	gotoxy(20, 28);	cout << "                                                          ";
	killSpider();
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��"; cout << "      ";
	// ���⼭ ��ﰨ ������ �� �ֵ��� ���� ����
}

int CSceneStory::floor7()
{
	//�̰� ���߿� �ּ�ó��
	//getDrink = true; getDriver = true;
	inventory(); system("cls"); Opened(7); InsideClosed(7); Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(7); // ������ ����
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";

	int next;
	Sleep(300); gotoxy(20, 26);	cout << "���� �����ڸ��� �����Դ� �ü��� ���� �ʰ� �� ģ���� �̾߱��Ѵ�.            ";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "���� ���� �̷��� ģ������..?                                            ";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "���� ��� �ؾ� �ұ�?                                                  ";  next = _getch();
	while (true)
	{
		int input;
		gotoxy(20, 26); cout << "1. ���� ������ �����Ϸ� �������� �ö󰣴�.                               ";
		if (getDriver == true) { gotoxy(20, 27); cout << "2. �ָӴϿ� �ִ� Į�� ����.                                             "; }
		if (getDrink == true) { gotoxy(20, 28); cout << "3. �ָӴϿ� �ִ� û�갡���� ����.                                        "; }

		gotoxy(20, 29); cout << "������ �����Ͻðڽ��ϱ�? : ";
		cin >> input;

		gotoxy(20, 26); cout << "                                                                       ";
		gotoxy(20, 27); cout << "                                                                       ";
		gotoxy(20, 28); cout << "                                                                       ";
		gotoxy(20, 29); cout << "                                                                       ";

		if (input == 1)
		{
			gotoxy(1, 33); depressed += 10; cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";
			Sleep(300); gotoxy(20, 26);	cout << "���ƾ��� ��¼�ھ�. ���� �� ��Ȳ���� �� ��� ��.                        ";  next = _getch();
			Sleep(300); gotoxy(20, 26);	cout << "������ ������ �� �ٶ��� �� �� �������� �ö󰡾߰ڴ�.                     ";  next = _getch();
			Sleep(300); gotoxy(20, 26);	cout << "�̻��ϰ� 10�������� �ݹ� �ö󰡳�..?                                    ";  next = _getch();
			system("cls"); Opened(10); InsideClosed(10); Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(10); // ������ ����
			Sleep(300); gotoxy(20, 26);	cout << "10���� ������ ���������� ���� �Ű��.                                   ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "??  :  "; gotoxy(20, 26);	cout << "���� �������� ����� ���ݾƿ�. �� �� ���� �輼��? ....��?            ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "�� ���� ���� ���� �о���,                                          ";
			gotoxy(20, 27);	cout << "      ���� �ֺ��� ���Ҹ��� ������ �״�� ������ ��������.          ";  next = _getch();
			Sleep(300); system("cls"); end(); gotoxy(20, 26); cout << "ending3. ��ﰨ                                                           ";  next = _getch();
			return -1;
		}
		else if (input == 2 && getDriver == true)
		{
			Sleep(300); gotoxy(20, 26);	cout << "���� �߸��� �� �ƴ��ݾ�. �� ����, �� ��Ȳ�� �߸��Ȱ���.                  ";  next = _getch();
			Sleep(300); gotoxy(20, 26);	cout << "���� �ָӴϿ��� �Ʊ� �ֿ� Į�� ���������.                              ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "��  :  "; gotoxy(20, 26);	cout << "���� �� ��Ȳ�� ���� �����ϴ� ��Ȳ�� �¾�?                           ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "ģ�� :  "; gotoxy(20, 26);	cout << "���� �Ҹ��ϴ°ž�?                                                ";
			Sleep(700); gotoxy(10, 26); cout << "??  :  "; gotoxy(20, 26);	cout << "�翬����. ���ݱ��� ���� �𸣰ھ�? ������ �ٶ������ݾ�.             ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "??  :  "; gotoxy(20, 26);	cout << "���� �ʴ� ���߿��� ���ٰ�.                                        ";  next = _getch();
			system("cls"); Cracked(7); gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��"; cout << "                                    ";
			Sleep(300); gotoxy(10, 26); cout << "??  :  "; gotoxy(20, 26);	cout << "���� ó���ؾߵ�. �������� �غ��ݾ�?                                ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "������ �������� ���� �̹� ģ���� � �ڿ���,                       ";
			Sleep(300); gotoxy(20, 27);	cout << "    ������ ���� ����ģ���� ��ģ ä ���������� ���� ������.          ";  next = _getch(); system("color 4");
			gotoxy(20, 27);	cout << "                                                                ";
			gotoxy(20, 26);	cout << "���ڱ� ����� �� ���ư��� ��Ӵ��� ǥ���� ���ö���.                 ";  next = _getch();
			getDriver = false;
			break;
		}
		else if (input == 3 && getDrink == true)
		{
			Sleep(300); gotoxy(20, 26);	cout << "���� �߸��� �� �ƴ��ݾ�. �� ����, �� ��Ȳ�� �߸��Ȱ���.                  ";  next = _getch();
			Sleep(300); gotoxy(20, 26);	cout << "���� �ָӴϿ��� û�갡���� ���������.                                  ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "��  :  "; gotoxy(20, 26);	cout << "���� �� ��Ȳ�� ���� �����ϴ� ��Ȳ�� �¾�?                           ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "ģ�� :  "; gotoxy(20, 26);	cout << "���� �Ҹ��ϴ°ž�?                                                ";
			Sleep(700); gotoxy(10, 26); cout << "??  :  "; gotoxy(20, 26);	cout << "�翬����. ���ݱ��� ���� �𸣰ھ�? ������ �ٶ������ݾ�.             ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "??  :  "; gotoxy(20, 26);	cout << "���� �ʴ� ���߿��� ���ٰ�.                                        ";  next = _getch();
			system("cls"); Cracked(7); gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��";
			Sleep(300); gotoxy(10, 26); cout << "??  :  "; gotoxy(20, 26);	cout << "���� ó���ؾߵ�. �������� �غ��ݾ�?                                ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "������ �������� ���� �̹� ģ���� ���� ���� û�갡���� ���� �ڿ���,";
			Sleep(300); gotoxy(20, 27);	cout << "    ���� �Բ� ģ���� ������ �������� ģ ä ���������� ���� ������. ";  next = _getch();
			gotoxy(20, 27);	cout << "                                                                  ";
			gotoxy(20, 26);	cout << "                                                                  ";
			getDrink = false;
			break;
		}
		else continue;
	}

	depressed = 0;
	Sleep(300); gotoxy(20, 28);	cout << "��ﰨ�� �������.                                         "; next = _getch();
	gotoxy(1, 33); cout << "��ﰨ : "; for (int i = 0; i < depressed; i++) cout << "��"; cout << "                         ";
	gotoxy(20, 28);	cout << "                                                          ";

	return 8; 
}

void CSceneStory::floor8()
{
	//�̰� ���߿� �ּ�ó��
	//getDrink = false; getDriver = false;
	int next;
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "8�� ���� ������ ���������ϴ� �Ҹ��� ũ�� �鸰��.                  ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "���ָӴϰ� ���ϰ� �پ�Ÿ�ô��� ���������� ���� ��ư�� ������ ������. ";  next = _getch();
	system("cls"); Opened(8); Sleep(300); HalfOpen2(); Sleep(500); HalfOpen1(); Sleep(500); InsideClosed(8); isInElevator(); gotoxy(1, 33); cout << "��ﰨ : ";
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "ŹŹŹŹŹŹ                                                        ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���ָӴ� : "; gotoxy(20, 26); cout << "���� �ݾƾ� ��. ������� �Ѿƿ��� �־�.                         ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��      : "; gotoxy(20, 26); cout << "���ָӴϸ���?                                                 ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���ָӴ� : "; gotoxy(20, 26); cout << "������.                                                       ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��      : "; gotoxy(20, 26); cout << "....??                                                        ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "���ָӴϴ� ���� �Ƚɽ����ַ��� �� ������ ���� �Ĵٺ��� ���� �ɾ���.";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���ָӴ� : "; gotoxy(20, 26); cout << "�ǰ� ���� �Ǵ�.. �츮 �Ƶ�.                                        ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��      : "; gotoxy(20, 26); cout << "�� ���ָӴ� �Ƶ� �ƴѵ���? �� ��Ӵϴ� �� ����� �� ���ư��̾��.";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "���ָӴ� : "; gotoxy(20, 26); cout << "....                                                             ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "��      : "; gotoxy(20, 26); cout << "���� ����� �� ���̶� ����� �� �� ����� ��������.               ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26);	cout << "���� ��� ���ָӴ��� ���� ���Ҵ�.                             ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26);	cout << "���ָӴϴ� �� ��� �� ���� ǥ���̾���.                             ";  next = _getch();

	if (choosedDriver == true && getDriver == false && getDrink == true)
	{
		Sleep(300); system("color 4"); gotoxy(20, 26);	cout << "???!?! ���۽��� ���� �� �߸��� ��Ҵ�.                            ";  next = _getch();
		Sleep(300); gotoxy(20, 26);	cout << "ģ���� �ǹ����� �� �󱼷� ������ ������ ���� �ɾ���.                ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "ģ��(?) : "; gotoxy(20, 26); cout << "��Ӵ��ݾ�. �λ� �ȵ��?????                                       ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "ģ��(?) : "; gotoxy(20, 26); cout << "�ʰ� �׿����� ��ô�ϸ� �ȵ�����������                              ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "�ƴϾ�.. �� ���߾�.                                                ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "ģ��(?) : "; gotoxy(20, 26); cout << "���� �־��� ���� �� �����غ�. �� �ϳ��� ������ �ʾҾ�.������          ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "ģ��(?) : "; gotoxy(20, 26); cout << "10�� ��� �������� �ݼ��ϰ� �������� �־����������                 ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "ģ���� �Ⱬ�� ǥ������ ���´�.                                      ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "���� �� �������� �ʴ´�.                                            ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "���ָӴ� : "; gotoxy(20, 26); cout << "�ƹ�����.. �ƹ����� �� �׿���...                                    ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "           "; gotoxy(20, 26); cout << "�ٽ� �ѹ� ���ָӴϸ� ����.                                          ";  next = _getch();
		Sleep(300); system("cls"); Cracked(8); gotoxy(1, 33); cout << "��ﰨ : ";
		gotoxy(10, 26); cout << "���ָӴ�(?) : "; gotoxy(25, 26); cout << "�� �׿���!!!!!!!!!!!!!                                           "; Sleep(1000);
		system("cls"); Opened(8); InsideClosed(8);  gotoxy(1, 33); cout << "��ﰨ : ";
		Sleep(300); gotoxy(10, 26); cout << "               "; gotoxy(25, 26); cout << "��½�ϰ� ���� �����ٰ� ������. ����� ���� ��������.        ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "               "; gotoxy(20, 26); cout << "���������� �ȿ��� �� ����̹��� ���� ä �׾��ִ� ģ���� ���ۿ� ������. ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "               "; gotoxy(10, 26); cout << "���������� ��  tv �ӿ����� 10���� ������ ��� ���̰� ������ �� ������ �̾߱Ⱑ ���´�.";  next = _getch();
	}
	else
	{
		Sleep(300); gotoxy(10, 26); cout << "���ָӴ� : "; gotoxy(20, 26); cout << "�̾��ϰ� ������.. ������ �� �� Ŭ �������� ���� ��� �־���� �ߴµ�..";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "��       : "; gotoxy(20, 26); cout << "��.. ���� ������� �𸣰ھ��                                        ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "���ָӴ� : "; gotoxy(20, 26); cout << "������. ���� ���°� �� ������?                                       ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "��       : "; gotoxy(20, 26); cout << "������ �αٰŸ��� �� ����� ������ �� ���ƿ�.                         ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "���ָӴ� : "; gotoxy(20, 26); cout << "�׷�... �� �� �԰�...                                               ";  next = _getch();
		system("cls"); Opened(8); InsideClosed(8);  gotoxy(1, 33); cout << "��ﰨ : ";
		Sleep(300); gotoxy(10, 26); cout << "           "; gotoxy(20, 26); cout << "��? ���ָӴϰ� �������.                                             ";  next = _getch();
	}
}

void CSceneStory::floor9()
{
	//�̰� ���߿� �ּ�ó��
	//getDrink = false; getDriver = false;
	//choosedDrink = false; choosedDriver = true;
	int next;
	inventory(); system("cls"); Opened(9); InsideClosed(9); Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(9); // ������ ����
	Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "������ ���� ������.                                                ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "��������� ������ �ǰ��غ��̴� ���ڰ� ����.                            ";  next = _getch();

	if (choosedDriver == true && getDriver == false)
	{
		Sleep(300); isInElevator(); system("color 4"); gotoxy(20, 26);	cout << "���ڴ� ������ ģ���� ������ ���� ������ ������ ��ڰ� ������.       ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "�׷�!!!!! �̰� �ٷ� ����!!!!!                                       ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "���� ���� �ʶ� �ֺ��� �ִ� ��� ����� ���ϰž�!!!!                    ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "?? ��θ� ���̴ٴ�..?                                                ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "������ �𸣰ھ�?? �ʴ� ���� �� ȯ�� �ӿ��� ��� ���ݾ�.                ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "���� ���� �͵� �׷��ٴ°� �ƴϾ�??                                    ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "�´�. ���� ź �� ���ڴ�.. ����                                       ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "��. �ʰ� Į�̶� û�갡���� ������ �ִ� �� Ȯ����? �� ģ���� ����.       ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "Ȯ���ϴ�. �ٵ� ��... ģ�� �� �����ִ� ����̹��� ����..?           ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "2������ �ô� ����. ���� ��� ����̶� �Ȱ��� �����ݾ�.             ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "������ ���� �������� ����ϰ�?                                     ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "��, ȯ�� ������ ������ �ʸ� ���ϰŶ�� �����ؼ� ��� ����?         ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "�׸��� ������ �ʰ� �ƺ��� ���̰� ������ 10���� �� ���̾�.           ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "�ƴϾ�.. �ƴϾ� �������̾�..                                     ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "�� ����� ���� �Ű��� ��ȣ�縦 ���ݱ��� ����Ŀ��� �����ϰ�,          ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "����̹��� ��� �־��� ������� �ʰ� �����ؼ� ��� �������� �ö���� �־�.";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "������ �ʰ� �Ʊ� ģ���� ����ϴ� ����� ��ģ �ٶ��� ������ ���� �ְ���.     ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "�ʰ� ���� �� �ȸ԰� ������������ �ٵ� ��� ���Ⱦ�ߵǴµ����������� ��ġ?";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "....���� ����ģ���� ����. ģ���� �����ϰ� �� ��ۿ� ������.              ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "�׸��� �ϳ� ���� ģ������ ���� ȯû���� ���� �׿���.                  ";  next = _getch();
		if(getDrink == true)
			Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "�ָӴϸ� ���� ģ���� �� �������帵ũ�� �ִ�.                         ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "��.. ���� ���� ���� �ȸԾ�����..                                    ";  next = _getch();
	}
	else if(getDrink == false && choosedDrink == true)
	{
		system("cls"); Opened(9); Sleep(300); HalfOpen2(); Sleep(500); HalfOpen1(); Sleep(500); InsideClosed(9); isInElevator(); gotoxy(1, 33); cout << "��ﰨ : ";
		Sleep(300); isInElevator(); gotoxy(20, 26);	cout << "���ڴ� �ٴ��� �ѷ������� �Ѽ��� ǫ ������.                        ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "�ƽ���...                                                           ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "��   : "; gotoxy(20, 26); cout << "��?                                                                 ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "���� ����ó�� �װ� �س��� �˾���.. ������ Ư���� ���̴ϱ�..             ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "�� ģ���� ���� �ʾҾ�.                                               ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "���� �ʰ� �ǵ��ߴ��ٴ� �ƴ���. �� �װ� û�갡������ �˰� �־����ϱ�.   ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "�ٵ� �װ� �������帵ũ���ŵ�. �װ� �� �ѹ��� �Ծ��ٰ� ���� �ְھ�?     ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "��   : "; gotoxy(20, 26); cout << "����� ��������..?                                                  ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "��? ���� ����?                                                      ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "���ݾ�.                                                             ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "���� ���ڰ� �������, ���������� ���� ������.                       ";  next = _getch();
	}
	else
	{
		Sleep(300); gotoxy(20, 26);	cout << "���� ������ ���� ������ �����ּž� ����˴ϴ�.                        ";  next = _getch();
	}
}

void CSceneStory::floor10()
{
	//�̰� ���߿� �ּ�ó��
	//getDrink = false; getDriver = true;
	//choosedDrink = true; choosedDriver = true;
	int next;
	inventory(); system("cls"); Opened(10); InsideClosed(10); Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(10); // ������ ����

	if (choosedDriver == true && getDriver == false)
	{
		Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26); cout << "10���� �������� ��� ������ ���� ����� ���� �Ǵ�.                         ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "�ǻ� : "; gotoxy(20, 26); cout << "��...�����.. ���ϴ� ���Űſ���..? �� �Ǵ�...?                            ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "��   : "; gotoxy(20, 26); cout << "������.. ���� ���� ���� �� �Ծ�������.                                    ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "��   : "; gotoxy(20, 26); cout << "�ٵ�.. �� ������ ����..?                                                 ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26); cout << "�ǻ簡 ���� ���� ���ߴ�.                                                  ";  next = _getch();
		Sleep(300);  system("color 40"); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "������..                                                                ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26); cout << "�� �� ���� ��ܹ��� ���ϰ� ������ �������� �پ�� ���� �����ߴ�.             ";  next = _getch();
		system("cls"); system("color 07"); end(); gotoxy(20, 26); cout << "ending5. ����                                                          ";

	}
	else if (getDrink == false && choosedDrink == true)
	{
		Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26); cout << "10���� �������� ��� ������ ���� ����� ���� �Ǵ�.                         ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "�ǻ� : "; gotoxy(20, 26); cout << "��.. ����ö���ð� ��̾��?                                             ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "��   : "; gotoxy(20, 26); cout << "��... �� ���� ������ �ߴµ�.. �׷��� �Ƴ׿�.                               ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "�ǻ� : "; gotoxy(20, 26); cout << "��? ���̿�? 7�� ���ǿ� ��ö����ݾƿ�!                                    ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "��   : "; gotoxy(20, 26); cout << "��? ���� ���� 7��.. �ٵ� �������� �� ���� �輼��?                          ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26); cout << "�� �� ���� ��ܹ��� ���ϰ� ������ �ǻ�� ��ȣ��, ��ȣ������ �پ�ö�Դ�.  ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26); cout << "ū �Ҹ��� �Բ� ���� ���еǾ���, �ֺ����� ������� �����Ÿ��� �Ҹ��� ��ȴ�.";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "\"�����ϱ� ���ź����� ����..\"                                              ";  next = _getch();
		Sleep(300); system("cls"); end(); gotoxy(20, 26); cout << "ending4. ���ź���                       ";
	}
	else
	{
		Sleep(300); gotoxy(20, 26);	cout << "���� ������ ���� ������ �����ּž� ����˴ϴ�.                        ";  next = _getch();
	}
}

void CSceneStory::end()
{
	endScene();
}

void CSceneStory::killSpider()
{
	// �Ź����̱�
	int ifkilled;
	int next;
	Sleep(300); gotoxy(20, 26);	cout << "�Ź̰� ���ٴѴ�....                                                     "; next = _getch();
	Sleep(300); gotoxy(20, 28);	cout << "���̽ðڽ��ϱ�? (1: ���δ�/ 2: ������ �ʴ´�) : "; cin >> ifkilled;
	if (ifkilled == 1)
	{
		depressed -= 1;
		gotoxy(20, 28);
		cout << "�Ź̸� �׿� ��ﰨ�� 10 �������ϴ�.                      ";
	}
	else if (ifkilled == 2)
	{
		gotoxy(20, 28);
		cout << "�Ź̸� ������ �ʾҽ��ϴ�.                                ";
	}
	else
	{
		gotoxy(20, 28);
		cout << "��ŵ�մϴ�.                                             ";
	}
	Sleep(1000); gotoxy(20, 26);	cout << "                                                                       ";
	gotoxy(20, 28);	cout << "                                                                       ";

}

void CSceneStory::inventory()
{
	int input; int winput;
	// �κ��丮 Ȯ�� ����
	Sleep(300); gotoxy(20, 28);	cout << "�κ��丮�� Ȯ���� �� �ֽ��ϴ�. Ȯ���Ͻðڽ��ϱ�? (1: Ȯ��) : "; 
	cin >> input; gotoxy(20, 28); cout << "                                                                  ";
	if (input == 1)
	{
		Inventory();
		Phone();
		if (getDriver == true)
			Driver();
		if (getDrink == true)
			Drink();
		while (true)
		{
			if (_kbhit())
			{
				winput = _getch();
				if (winput == 27)
				{
					break;
				}
			}
		}
	}
}
