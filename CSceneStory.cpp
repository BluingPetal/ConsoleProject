#include "CSceneStory.h"
#include <iostream>
#include <time.h>
#include<conio.h>

using namespace std;

int CSceneStory::start()
{
	while (true) // 메뉴 선택
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
					if (input == 13) // 엔터
						break;
					else if (input == 224)
					{
						input = _getch();
						switch (input) // 방향키
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
			return 0; // 0 반납시 처음부터 시작
		case 1:
			Inventory();
			gotoxy(15, 6); cout << "어느 층으로 가시겠습니까?";
			gotoxy(32, 9); cout << "1층"; gotoxy(60, 10); cout << "6층";
			gotoxy(32, 11); cout << "2층"; gotoxy(60, 12); cout << "7층";
			gotoxy(32, 13); cout << "3층"; gotoxy(60, 14); cout << "8층";
			gotoxy(32, 15); cout << "4층"; gotoxy(60, 16); cout << "9층";
			gotoxy(32, 17); cout << "5층"; gotoxy(60, 18); cout << "10층";
			gotoxy(17, 20); cout << "ps. 아이템은 가지고 있지 않은 채로 해당 층에 입장됩니다.";
			gotoxy(29, 9); cout << "☞";
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
					else if (winput == 13) // 엔터
						break;
					else if (winput == 224)
					{
						winput = _getch();
						switch (winput) // 방향키
						{
						case 72:
							if ((wnum != 1) && (wnum != 6))
							{
								gotoxy(wloc[0], wloc[1]); cout << "  ";
								gotoxy(wloc[0], wloc[1] -= 2); cout << "☞";
								wnum -= 1;
							}
							break;
						case 75:
							if ((wnum == 6) || (wnum == 7) || (wnum == 8) || (wnum == 9) || (wnum == 10))
							{
								gotoxy(wloc[0], wloc[1]); cout << "  ";
								gotoxy(wloc[0] -= 28, wloc[1] -= 1); cout << "☞";
								wnum -= 5;
							}
							break;
						case 77:
							if ((wnum == 1) || (wnum == 2) || (wnum == 3) || (wnum == 4) || (wnum == 5))
							{
								gotoxy(wloc[0], wloc[1]); cout << "  ";
								gotoxy(wloc[0] += 28, wloc[1] += 1); cout << "☞";
								wnum += 5;
							}
							break;
						case 80:
							if ((wnum != 5) && (wnum != 10))
							{
								gotoxy(wloc[0], wloc[1]); cout << "  ";
								gotoxy(wloc[0], wloc[1] += 2); cout << "☞";
								wnum += 1;
							}
							break;
						default:
							continue;
						}
					}
					else continue;
				}
			} // 결과 : wnum
			if (wnum == 0) continue;
			else return wnum; // 1부터 10층
		case 2:
			Inventory();
			gotoxy(25, 9); cout << "주인공은 힘든 하루를 마치고 집으로 돌아가는 중입니다.";
			gotoxy(18, 12); cout << "엘리베이터를 타고, 많은 사람들을 마주치며 이상 현상을 겪습니다.";
			gotoxy(30, 15); cout << "당신의 선택에 따라 결말이 달라집니다.";
			gotoxy(35, 18); cout << "신중하게 선택지를 골라주세요.";
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
			} // 결과 : wnum
			continue;
		case 3:
			return -1; //음수 반납시 즉시 게임 종료
		}
	}
}

void CSceneStory::floor1()
{
	elevatorOut(1);
	gotoxy(5, 26); cout << "힘든 하루였어. 빨리 집으로 가야지." << endl;
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
