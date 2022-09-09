#include "CSceneStory.h"
#include <iostream>
#include <time.h>
#include<conio.h>
#include<Windows.h>

using namespace std;
int depressed = 8;

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
	int next;
	elevatorOut(1);
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";
	Sleep(300); gotoxy(20, 26); cout << "힘든 하루였어. 빨리 집으로 가야지."; next = _getch(); // 블로킹
	Sleep(300); gotoxy(20, 26); cout << "아니 벌써 10시잖아? 도대체 직장에서 몇 시간이나 있었던거야?"; next = _getch();
	Sleep(300);
	Inventory(); gotoxy(33, 9); cout << "인벤토리는 특별한 경우가 아니면"; gotoxy(32, 11); cout << "각 층 시작마다 한번씩 볼 수 있습니다.";
	gotoxy(29, 15); cout << "층을 올라갈때마다 주인공은 우울감을 느낍니다. ";
	gotoxy(32, 17); cout << "우울감을 떨어뜨릴 방법을 찾아주세요. "; next = _getch();
	Sleep(300); system("cls"); Sleep(1000); Opened(1); gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";
	Sleep(700); gotoxy(10, 26); cout << "?? : "; gotoxy(20, 26); cout << "이거 작성하시고..                                           "; HalfOpen2(); Sleep(700); HalfOpen1(); // 닫히는 동작
	Sleep(700); gotoxy(10, 26); cout << "나 : "; gotoxy(20, 26); cout << "??.. 뭐였지                "; InsideClosed(1); next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나 : "; gotoxy(20, 26); cout << "우리 집은 7층이야. 7층으로 가자."; gotoxy(92, 9); TextColor(4, 7); cout << "⑦"; TextColor(7, 0); next = _getch(); //gotoxy(92, 9); TextColor(4, 7); cout << "⑦"; TextColor(7, 0);

}

void CSceneStory::floor2()
{
	int next; 
	int ifkilled;
	// 인벤토리 확인 여부
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "                                                                   ";
	gotoxy(20, 28);	cout << "                                                                   "; next = _getch();
	gotoxy(0, 0);
	InsideClosed(2); Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(2); gotoxy(92, 9); TextColor(4, 7); cout << "⑦"; TextColor(7, 0); // 열리는 동작 
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "안녕하세요! 올라가시나요?                                                 "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "응. 타게?                                                               "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "네! 아빠가 부르셔서 빨리 가봐야돼요.                                      "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "그래? 그럼 빨리 가봐야지.                                                "; next = _getch();
	Sleep(500); HalfOpen2(); Sleep(500); HalfOpen1(); Sleep(500); InsideClosed(2); isInElevator();  gotoxy(85, 9); TextColor(4, 7); cout << "②"; TextColor(7, 0);// 닫히는 동작 
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "아빠는 저를 많이 싫어하세요. 엄마가 저 때문에 돌아가셨다고 하시거든요.       "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "...                                                                     "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "근데 저는 가족을 지키려고 했던 것 뿐이에요!                                "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "엄마랑 아빠는 몰라주셔서 속상해요.                                        "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "....다 아실거야                                                         "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "저도 아빠 싫어해요. 그래서 괜찮아요!                                      "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "근데 처음보는 사람한테 그런 말 하고다녀도 괜찮니?                          "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "저는 아저씨 처음보는거 아닌데요?                                          "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "내가 너를 처음보잖아.                                                    "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "아저씨도 저 아실텐데..                                                   "; next = _getch();
	Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(2); gotoxy(92, 9); TextColor(4, 7); cout << "⑦"; TextColor(7, 0); // 열리는 동작
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "아 도착했다! 내리기 싫은데.. 내려야겠죠..?                                "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "빨리 내려.                                                             "; next = _getch(); 
	Sleep(300); gotoxy(10, 26); cout << "?? : "; gotoxy(20, 26);	cout << "어딜 싸돌아다니는거야!! 여기에만 갇혀 있으랬더니!!                        "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "?? : "; gotoxy(20, 26);	cout << "에휴 정신이나 멀쩡하면 말이나 말지.                                      "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "아...저                                                                "; next = _getch();
	Sleep(700); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "빨리 가세요! 다들 아저씨를 찾고 있는것 같아요.                            "; next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "응?                                                                    "; next = _getch();
	// 거미죽이기
	Sleep(300); gotoxy(20, 28);	cout << "꼬마와 이야기해 우울감이 20 줄어들었다.                                  "; next = _getch(); 
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■"; cout << "      ";
	Sleep(300); gotoxy(10, 26); cout << "      "; gotoxy(20, 26);	cout << "                                                                      ";
	Sleep(300); gotoxy(20, 26);	cout << "거미가 기어다닌다....                                                   "; next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "죽이시겠습니까? (1: 죽인다/ 2: 죽이지 않는다) : "; cin >> ifkilled;
	if (ifkilled == 1)
	{
		depressed -= 10;
		gotoxy(20, 27);
		cout << "거미를 죽여 우울감이 10 떨어집니다.";
	}
	else if (ifkilled == 1)
	{
		gotoxy(20, 27);
		cout << "거미를 죽이지 않았습니다.";
	}
	else
	{
		gotoxy(20, 27);
		cout << "스킵합니다.";
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
