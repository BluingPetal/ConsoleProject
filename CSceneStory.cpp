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
	Sleep(300); gotoxy(20, 26); cout << "힘든 하루였어. 빨리 집으로 가야지.";  next = _getch(); // 블로킹
	Sleep(300); gotoxy(20, 26); cout << "아니 벌써 10시잖아? 도대체 직장에서 몇 시간이나 있었던거야?";  next = _getch();
	Sleep(300);
	Inventory(); gotoxy(33, 9); cout << "인벤토리는 특별한 경우가 아니면"; gotoxy(32, 11); cout << "각 층 시작마다 한번씩 볼 수 있습니다.";
	gotoxy(29, 15); cout << "층을 올라갈때마다 주인공은 우울감을 느낍니다. ";
	gotoxy(32, 17); cout << "우울감을 떨어뜨릴 방법을 찾아주세요. ";  next = _getch();
	Sleep(300); system("cls"); Sleep(1000); Opened(1); gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";
	Sleep(700); gotoxy(10, 26); cout << "?? : "; gotoxy(20, 26); cout << "이거 작성하시고..                                           "; HalfOpen2(); Sleep(700); HalfOpen1(); // 닫히는 동작
	Sleep(700); gotoxy(10, 26); cout << "나 : "; gotoxy(20, 26); cout << "??.. 뭐였지                "; InsideClosed(1);  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나 : "; gotoxy(20, 26); cout << "우리 집은 7층이야. 7층으로 가자."; gotoxy(92, 9); TextColor(4, 7); cout << "⑦"; TextColor(7, 0);  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "                                                                   ";
	gotoxy(20, 28);	cout << "                                                                   ";
}

void CSceneStory::floor2()
{
	// 인벤토리 확인 여부
	inventory(); system("cls"); Opened(2); gotoxy(92, 9); TextColor(4, 7); cout << "⑦"; TextColor(7, 0);
	int next;
	InsideClosed(2); Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(2); gotoxy(92, 9); TextColor(4, 7); cout << "⑦"; TextColor(7, 0); // 열리는 동작 
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";

	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "안녕하세요! 올라가시나요?                                                 ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "응. 타게?                                                               ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "네! 아빠가 부르셔서 빨리 가봐야돼요.                                      ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "그래? 그럼 빨리 가봐야지.                                                ";  next = _getch();
	Sleep(500); HalfOpen2(); Sleep(500); HalfOpen1(); Sleep(500); InsideClosed(2); isInElevator();  gotoxy(85, 11); TextColor(4, 7); cout << "③"; TextColor(7, 0);// 닫히는 동작 
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "아빠는 저를 많이 싫어하세요. 엄마가 저 때문에 돌아가셨다고 하시거든요.       ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "...                                                                     ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "근데 저는 가족을 지키려고 했던 것 뿐이에요!                                ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "엄마랑 아빠는 몰라주셔서 속상해요.                                        ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "....다 아실거야                                                         ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "저도 아빠 싫어해요. 그래서 괜찮아요!                                      ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "근데 처음보는 사람한테 그런 말 하고다녀도 괜찮니?                          ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "저는 아저씨 처음보는거 아닌데요?                                          ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "내가 너를 처음보잖아.                                                    ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "아저씨도 저 아실텐데..                                                   ";  next = _getch();
	Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(3); gotoxy(92, 9); TextColor(4, 7); cout << "⑦"; TextColor(7, 0); // 열리는 동작
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";
	Sleep(300); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "아 도착했다! 내리기 싫은데.. 내려야겠죠..?                                ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "빨리 내려.                                                             ";  next = _getch(); 
	Sleep(300); gotoxy(10, 26); cout << "?? : "; gotoxy(20, 26);	cout << "어딜 싸돌아다니는거야!! 여기에만 갇혀 있으랬더니!!                        ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "?? : "; gotoxy(20, 26);	cout << "에휴 정신이나 멀쩡하면 말이나 말지.                                      ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "아...저                                                                ";  next = _getch();
	Sleep(700); gotoxy(10, 26); cout << "꼬마 : "; gotoxy(20, 26);	cout << "빨리 가세요! 다들 아저씨를 찾고 있는것 같아요.                            ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나  : "; gotoxy(20, 26);	cout << "응?                                                                    ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "아까 술냄새가 여기까지 났다.                                             ";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "위험해보여서 잡으려했지만 빠르게 내려서 잡을 틈이 없었다. 아이는 괜찮겠지..?";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "근데 누가 나를 찾고 있다는거지?                                             ";  next = _getch();
	Sleep(300); gotoxy(20, 28);	cout << "꼬마와 이야기해 우울감이 20 줄어들었다.                                  "; next = _getch();
	depressed -= 2;
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■"; cout << "      ";
	gotoxy(10, 26); cout << "      "; gotoxy(20, 26);	cout << "                                                                      ";
	gotoxy(20, 28);	cout << "                                                                       ";
	killSpider();
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■"; cout << "      ";
}

int CSceneStory::floor3()
{
	// 인벤토리 확인 여부
	inventory(); system("cls"); Opened(3); gotoxy(92, 9); TextColor(4, 7); cout << "⑦"; TextColor(7, 0);
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";
	int next;
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "방금 아이를 생각할 틈이 없어졌다.                                        ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "문이 열리고 10년 전에 나를 따라다니는 스토커를 여기서 다시 보게 되었다.      ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "너무 집요하게 쫓아다녀서 이사를 갔지만 또 여기서 마주칠 줄은 몰랐는데..      ";  next = _getch();
	Sleep(300); HalfOpen2(); Sleep(500); HalfOpen1(); Sleep(500); InsideClosed(3); isInElevator();  gotoxy(92, 7); TextColor(4, 7); cout << "⑥"; TextColor(7, 0);// 닫히는 동작 

	Sleep(300); gotoxy(10, 26); cout << "스토커 : "; gotoxy(20, 26);	cout << "안녕하세요? 오랜만이네요?                                                 ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나     : "; gotoxy(20, 26);	cout << "...왜 여기 계시죠?                                                       ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "스토커 : "; gotoxy(20, 26);	cout << "저요? 일이 있어서 급하게 올라가는 중이에요.                                ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나     : "; gotoxy(20, 26);	cout << "무슨 일이요..?                                                           ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "스토커 : "; gotoxy(20, 26);	cout << "그건 왜 물어보시죠?                                                       ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나     : "; gotoxy(20, 26);	cout << "...아니에요                                                              ";  next = _getch();
	Sleep(1000); gotoxy(10, 26); cout << "스토커 : "; gotoxy(20, 26);cout << "몇층에서 내리세요? 아 7층이셨나?                                       ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나     : "; gotoxy(20, 26);	cout << "제 집 층수도 아세요?!                                                     ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "스토커 : "; gotoxy(20, 26);cout << "아.... 아니에요. 저는 6층에서 내리거든요.                              ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "         "; gotoxy(20, 26);cout << "위험하다. 6층에서 내린다고 해도 아마 계단으로 올라올 가능성이 크다.      ";  next = _getch();
	Sleep(300); gotoxy(20, 26);cout << "그 이후로 있을 일은 상상도 하기 싫다.                                   ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나     : "; gotoxy(20, 26);	cout << "집을 가면 안되나..?                                                     ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "스토커 : "; gotoxy(20, 26);cout << "예?                                                                    ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나     : "; gotoxy(20, 26);	cout << "아니에요.                                                               ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "스토커 : "; gotoxy(20, 26);cout << "오늘은 빨리 가서 쉬셔야 될 것 같아요. 여자친구분도 당신을 찾고 계셨거든요.   ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "스토커 : "; gotoxy(20, 26);cout << "물론 저도 그렇고요..                                                     ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나     : "; gotoxy(20, 26);	cout << "여자친구는 건들지 마세요! 부탁이에요..                                     ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "스토커 : "; gotoxy(20, 26);cout << "말만 섞은 것 뿐이에요.                                                    ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "         "; gotoxy(20, 26);cout << "여자친구가 우리 집에 있다는 사실을 몰랐다.                                 ";  next = _getch();
	Sleep(300); gotoxy(20, 26);cout << "일단 여자친구에게 피하라고 연락을 보내야겠다.                              ";  next = _getch();
	Sleep(300); gotoxy(20, 26);cout << "나와 함께 엘리베이터를 올라가는동안                                        ";
	Sleep(300); gotoxy(20, 27);cout << "여자친구가 계단으로 내려가면 시간을 벌 수 있을 것이다.                      ";  next = _getch();
	Sleep(300); gotoxy(20, 26); cout << "핸드폰 배터리가 없어서 아마 몇글자 못 보내겠지만..                         ";
	gotoxy(20, 27); cout << "                                                                      ";  next = _getch();
	Sleep(300); gotoxy(20, 26); cout << "                                                                       ";
	while (true)
	{
		int input;
		gotoxy(20, 26); cout << "1. 연락을 보낸다.                                                       ";
		gotoxy(20, 27); cout << "2. 여자친구가 집에 있는게 확실하지 않으니 다음 층에서 내려                  ";
		gotoxy(20, 28); cout << "    집까지 올라간 뒤 여자친구가 있는지 확인하고 같이 내려온다.              ";

		gotoxy(20, 29); cout << "무엇을 선택하시겠습니까? : ";
		cin >> input;
		
		gotoxy(20, 26); cout << "                                                                        ";
		gotoxy(20, 27); cout << "                                                                        ";
		gotoxy(20, 28); cout << "                                                                        ";

		gotoxy(20, 29); cout << "                                                                         ";
		if (input == 1)
		{
			Sleep(300); gotoxy(10, 26); cout << "         "; gotoxy(20, 26); cout << "다음 층에서 내리면 저 사람도 같이 내려서 따라 올라올 수 있다.               ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "더 위험해지는 상황을 피하기 위해서는 지금 연락을 보내야 해.                 ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "핸드폰을 열어 여자친구에게 일단 집을 나오도록 하기 위해 연락을 보낸다.       ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "나     : "; gotoxy(20, 26);	cout << "\"집에서 나와.\"                                                         ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "         "; gotoxy(20, 26); cout << "핸드폰이 바로 꺼졌다. 뒤를 돌아보니 그 여자가 나를 쳐다보고 있다.       ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "일단 집까지 도착하는 것이 우선일 것 같다..                            ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "                                                                   ";
			break;
		}
		else if (input == 2)
		{
			Sleep(300); gotoxy(10, 26); cout << "         "; gotoxy(20, 26); cout << "배터리가 없어서 충분한 설명을 하지 못할 것이 분명하다.                     ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "다음 층에서 내려 계단을 통해 집까지 올라간다면                              ";
			gotoxy(20, 27); cout << "       엘리베이터보다 더 일찍 도착할 수 있다.                               ";  next = _getch();
			gotoxy(20, 27); cout << "                                                                          ";
			gotoxy(20, 26); cout << "그 다음부터는 집에서 무언가 들고 나오면 싸우는 것이 가능할지도 모른다.    ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "4층에 도착하고 문이 열리자마자 뛰쳐나와, 계단으로 빠르게 집을 올라갔다."; next = _getch();
			Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(4); gotoxy(92, 9); TextColor(4, 7); cout << "⑦"; TextColor(7, 0); gotoxy(92, 7); TextColor(4, 7); cout << "⑥"; TextColor(7, 0); // 열리는 동작
			Sleep(300); gotoxy(20, 26); cout << "하지만 그 순간, 어디선가 많은 사람이 나에게 몰려와                        ";
			gotoxy(20, 27); cout << "          무언가를 맞추며 나는 정신이 희미해졌다.						     "; next = _getch();
			gotoxy(20, 27); cout << "                                                                          ";
			gotoxy(20, 26); cout << "이건.. 마취제인가..? 뭐지..?                                                 ";  next = _getch();
			Sleep(300); gotoxy(20, 26);	cout << "희미해져가는 의식 속에 사람들 뒤 그 여자가 손에 무언가를 들고 웃고있었다.   ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "         "; gotoxy(20, 26);	cout << "아.. 한명이 아니었구나..                                                   ";  next = _getch();
			Sleep(300); gotoxy(20, 26);	cout << "절망감과 함께 의식을 잃었다.                                                ";  next = _getch();
			Sleep(300); system("cls"); end(); gotoxy(20, 26); cout << "ending1. 안정제                                                           ";  next = _getch();
			return -1;
		}
		else
		{
			gotoxy(20, 26); cout << "                                                                      ";
			gotoxy(20, 27); cout << "                                                                      ";
			gotoxy(20, 28); cout << "                                                                      ";

			gotoxy(20, 26); cout << "다시 입력해주세요."; next = _getch();
			gotoxy(20, 26); cout << "                                                                      ";
			continue;
		}
	}

	Sleep(300); gotoxy(20, 28);	cout << "우울감이 10 늘어났다.                                      "; next = _getch();
	depressed += 1;
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■"; cout << "      ";
	gotoxy(20, 28);	cout << "                                                          "; next = _getch();
	killSpider();
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■"; cout << "      ";
	return 4;
}

int CSceneStory::floor4()
{
	// 인벤토리 확인 여부
	inventory(); system("cls"); Opened(4); gotoxy(92, 9); TextColor(4, 7); cout << "⑦"; TextColor(7, 0); gotoxy(92, 7); TextColor(4, 7); cout << "⑥"; TextColor(7, 0);
	InsideClosed(4); Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(4); gotoxy(92, 9); TextColor(4, 7); cout << "⑦"; TextColor(7, 0); gotoxy(92, 7); TextColor(4, 7); cout << "⑥"; TextColor(7, 0); // 열리는 동작
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";
	int next;
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "4층 문이 열리고 난 뒤 나를 보고 소름끼치게 웃는 남자 한명이 탔다.            ";  next = _getch();
	Sleep(300); HalfOpen2(); Sleep(500); HalfOpen1(); Sleep(500); InsideClosed(4); isInElevator();  gotoxy(92, 7); TextColor(4, 7); cout << "⑥"; TextColor(7, 0);// 닫히는 동작 
	Sleep(300); gotoxy(20, 26);	cout << "순간 스토커가 그 자리에 있어서 다행이라는 생각을 했다.                      ";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "그 남자가 칼을 들고 있었기 때문이다.                                       ";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "핸드폰이 꺼진 나는 내 뒤의 여자가 신고해주기만을 기도했다.                  ";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "하지만 뒤를 돌아보니 나의 바람과는 달리                                   ";
	gotoxy(20, 27);	cout << "그 여자는 칼을 못 본듯 엘리베이터 층 수만 쳐다보고 있었다.                  ";  next = _getch();
	Sleep(300); gotoxy(20, 27);	cout << "                                                                       ";
	gotoxy(20, 26);	cout << "그 남자는 아직도 나를 뚫어져라 쳐다보고 있다. 나의 목숨이 위험하다.         ";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "내가 먼저 공격하는 것도 방법일 듯 한데 어떻게할까?                         ";  next = _getch();
	while (true)
	{
		int input;
		int answer=641562, plAnswer;
		gotoxy(20, 26); cout << "1. 먼저 공격한다.                                                        ";
		gotoxy(20, 27); cout << "2. 무섭지만 참고 다음 층까지만 간다.                                      ";

		gotoxy(20, 28); cout << "무엇을 선택하시겠습니까? : ";
		cin >> input;

		gotoxy(20, 26); cout << "                                                                        ";
		gotoxy(20, 27); cout << "                                                                        ";
		gotoxy(20, 28); cout << "                                                                        ";

		if (input == 1)
		{
			Sleep(300); gotoxy(20, 26); cout << "그래. 오히려 먼저 공격을 하는 것이 나에게 좋을 수도 있어.                  ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "저 사람의 표정을 보아하니 저 칼이 다른 곳에 쓰일 것 같지도 않고.            ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "그리고 내가 칼을 저 사람에게서 빼앗는다면 그보다 더 좋은 것도 없지.         ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "나     : ";  gotoxy(20, 26);	cout << "이야아아아아아!!!!!                                                     ";  next = _getch();
			Sleep(300);  gotoxy(10, 26); cout << "         "; gotoxy(20, 26); cout << "같은 수를 입력해주세요!! " << answer << " : ";
			cin >> plAnswer;
			if (answer == plAnswer)
			{
				system("cls"); Cracked(5); gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";
				Sleep(300); gotoxy(20, 26); cout << "쾅! 그 사람을 문쪽으로 밀치며 목을 졸랐다.                            ";  next = _getch();
				Sleep(300); gotoxy(20, 26); cout << "아까의 소름끼치는 얼굴에서 두려움의 표정으로 바뀌며 칼이 바닥에 떨어졌다. ";  next = _getch();
				Sleep(300); gotoxy(20, 26); cout << "5층에서 두 명이 모두 내리고 나는 안도의 한숨을 쉬면서 바닥을 보았다.     ";  next = _getch();
				Sleep(300); gotoxy(20, 26); cout << "이걸 어쩌지..?                                                        ";  next = _getch();
				while (true)
				{
					int driInput;
					gotoxy(20, 26); cout << "1. 줍는다.                                                             ";
					gotoxy(20, 27); cout << "2. 줍지 않는다.                                                        ";

					gotoxy(20, 28); cout << "무엇을 선택하시겠습니까? : ";
					cin >> driInput;
					gotoxy(20, 27); cout << "                                                                       ";
					gotoxy(20, 28); cout << "                                                                       ";
					if (driInput == 1)
					{
						gotoxy(20, 26); cout << "칼을 획득하셨습니다.                                                    "; next = _getch();
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
				system("cls"); Cracked(5); gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";
				Sleep(300); gotoxy(20, 26); cout << "쾅! 그 사람을 문쪽으로 밀치며 목을 졸랐다.                            ";  next = _getch();
				Sleep(300); gotoxy(20, 26); cout << "실랑이를 벌이던 중, 푹하는 소리와 함께 몸에 힘이 들어가지 않는다.       ";  next = _getch();
				Sleep(300); gotoxy(20, 26); cout << "쓰러지는 내 위에서 소름끼치는 웃음소리와 함께 말소리가 들려온다.        ";  next = _getch();
				Sleep(300); gotoxy(20, 26); cout << "\"괜찮아요 ? \"                                                        ";  next = _getch();
				Sleep(300); system("cls"); end(); gotoxy(20, 26); cout << "ending2. 사인 : 호흡 곤란                                          ";  next = _getch();
				return -1;
			}
		}
		else if (input == 2)
		{
			Sleep(300); gotoxy(20, 26); cout << "생각해보면 나는 저 사람을 알지 못하고 저 사람이 나를 찌를 이유도 없다.    ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "괜히 내가 먼저 덤벼들었다가 나만 이상한 사람이 되는 것 아닐까?            "; next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "그냥 한 층만 견디고 내가 내려버리면 그만이잖아.                          ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "생각 중에 갑자기 푹하는 소리와 함께 몸에 힘이 들어가지 않는다.           ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "쓰러지는 내 위에서 소름끼치는 웃음소리와 함께 말소리가 들려온다.        ";  next = _getch();
			Sleep(300); gotoxy(20, 26); cout << "\"괜찮아요 ? \"                                                        ";  next = _getch();
			Sleep(300); system("cls"); end(); gotoxy(20, 26); cout << "ending2. 사인 : 호흡 곤란                                          ";  next = _getch();
			return -1;
		}
		else
		{
			gotoxy(20, 26); cout << "                                                                      ";
			gotoxy(20, 27); cout << "                                                                      ";
			gotoxy(20, 28); cout << "                                                                      ";

			gotoxy(20, 26); cout << "다시 입력해주세요."; next = _getch();
			gotoxy(20, 26); cout << "                                                                      ";
			continue;
		}
	}

	Sleep(300); gotoxy(20, 28);	cout << "우울감이 10 늘어났다.                                      "; next = _getch();
	depressed += 1;
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■"; cout << "      ";
	gotoxy(20, 28);	cout << "                                                          ";
	killSpider();
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■"; cout << "      ";
	return 4;
}

void CSceneStory::floor5t6()

{// 인벤토리 확인 여부
	inventory(); system("cls"); Opened(6); Sleep(300); HalfOpen2(); Sleep(500); HalfOpen1(); Sleep(500); InsideClosed(6); isInElevator(); gotoxy(92, 9); TextColor(4, 7); cout << "⑦"; TextColor(7, 0);// 닫히는 동작 
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";
	int next;
	Sleep(300); gotoxy(20, 26);	cout << "슬슬 꿈이 아닐까 생각한다.                                                ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나   : "; gotoxy(20, 26);	cout << "엘리베이터 한층한층 올라가는 것이 이렇게 힘든 일일 줄이야.                  ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "생각하던 와중, 6층에서 한번 또 문이 열렸고, 친구가 탔다.                   ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "친구 : "; gotoxy(20, 26);	cout << "아니, 여기 있었어? 무슨 일이 일어나고 있는거야?                            ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나   : "; gotoxy(20, 26);	cout << "..? 무슨일 있었어?                                                      ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "친구 : "; gotoxy(20, 26);	cout << "지금 모든 사람이 윗층으로 올라오고 있어. 누가.. 아니다. 너 피곤하지.        ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나   : "; gotoxy(20, 26);	cout << "오늘 좀 피곤한 일들이 특히 많기는 했지. 내가 꿈을 꾸고 있는건가 싶기도하고.";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "친구 : "; gotoxy(20, 26);	cout << "빨리 올라가서 좀 쉬고. 어디좀 돌아다니좀 마.                               ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나   : "; gotoxy(20, 26);	cout << "일 다녀왔거든? 안 돌아다니면 뭐 먹고살라고.                                ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "친구 : "; gotoxy(20, 26);	cout << "...안가도 되니까 그냥 돌아다니지 마. 이 짓도 힘들어 죽겠다.                 ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나   : "; gotoxy(20, 26);	cout << "뭐라는거야.                                                              ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "친구 : "; gotoxy(20, 26);	cout << "야 힘들어보이는데 이거나 받아. 나도 이거로 힘든거 한번에 풀렸다.             ";  next = _getch();
	while (true)
	{
		int input;
		gotoxy(20, 26); cout << "1. 받는다.                                                             ";
		gotoxy(20, 27); cout << "2. 받지 않는다.                                                        ";

		gotoxy(20, 28); cout << "무엇을 선택하시겠습니까? : ";
		cin >> input;
		gotoxy(20, 27); cout << "                                                                       ";
		gotoxy(20, 28); cout << "                                                                       ";
		if (input == 1)
		{
			gotoxy(20, 26); cout << "청산가리를 획득하셨습니다.                                           "; next = _getch();
			choosedDrink = true;
			getDrink = true;
			Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26); gotoxy(20, 26);  cout << "뭐지..? 무슨 의도로 이걸 나한테 주는거지...?                         "; next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "친구 : "; gotoxy(20, 26);	cout << "고마워할 필요는 없고, 일단 같이 내리자. 제수씨 얼굴은 한번 봐야지~         ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "뚜껑을 열어보니 다른 사람이 보았을 때는 보통 물약처럼 보일지는 모르겠지만   ";
			gotoxy(20, 27);	cout << "나는 청산가리가 들어있다는 것을 단번에 알아챘다.                         ";  next = _getch();
			Sleep(300); gotoxy(20, 27);	cout << "                                                                     ";
			gotoxy(20, 26);	cout << "근데 왜..?                                                             ";
			break;
		}
		else if (input == 2) break;
		else continue;
	}
	system("cls"); Cracked(5); gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";
	Sleep(300); gotoxy(10, 26); cout << "친구 : "; gotoxy(20, 26);	cout << "야 요즘 제수씨는 뭐하고 사시냐? 너 뒷바라지 하느라 하나도 정신 없을텐데. ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "그러고 보니 왜 자꾸 내 여자친구를 언급하지? 잘 알지도 못하면서.          ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "친구 : "; gotoxy(20, 26);	cout << "너 여자친구랑 여기저기 다녔는데 너랑은 못가봤다고 엄청 좋아하더라ㅋㅋㅋ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나   : "; gotoxy(20, 26);	cout << "뭐????                                                                 ";  next = _getch();
	system("cls"); Opened(6); gotoxy(92, 9); TextColor(4, 7); cout << "⑦"; TextColor(7, 0); InsideClosed(6); isInElevator(); gotoxy(92, 9); TextColor(4, 7); cout << "⑦"; TextColor(7, 0);
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";
	Sleep(300); gotoxy(10, 26); cout << "친구 : "; gotoxy(20, 26);	cout << "뭐- 정신 없는거 맞잖아.                                                ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "        "; gotoxy(20, 26);	cout << "분노가 치밀어오른다. 내가 열심히 직장을 다니는 사이에 둘이...             ";  next = _getch();
	gotoxy(20, 26); system("color 4");	cout << "친구고 여자친구고 배신감에 몸이 떨린다.                                  ";  next = _getch();
	Sleep(300); system("color 7"); gotoxy(10, 26); cout << "        "; gotoxy(20, 26);	cout << "때마침 7층에 도착해서 엘리베이터가 열리고 여자친구가 집 안에서 뛰쳐나왔다.";  next = _getch();

	Sleep(300); gotoxy(20, 28);	cout << "우울감이 10 늘어났다.                                      "; next = _getch();
	depressed += 1;
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■"; cout << "      ";
	gotoxy(20, 28);	cout << "                                                          ";
	killSpider();
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■"; cout << "      ";
	// 여기서 우울감 가득찰 수 있도록 엔딩 조정
}

int CSceneStory::floor7()
{
	//이거 나중에 주석처리
	//getDrink = true; getDriver = true;
	inventory(); system("cls"); Opened(7); InsideClosed(7); Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(7); // 열리는 동작
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";

	int next;
	Sleep(300); gotoxy(20, 26);	cout << "문이 열리자마자 나에게는 시선도 주지 않고 내 친구랑 이야기한다.            ";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "언제 둘이 이렇게 친해졌지..?                                            ";  next = _getch();
	Sleep(300); gotoxy(20, 26);	cout << "나는 어떻게 해야 할까?                                                  ";  next = _getch();
	while (true)
	{
		int input;
		gotoxy(20, 26); cout << "1. 참고 생각을 정리하러 윗층으로 올라간다.                               ";
		if (getDriver == true) { gotoxy(20, 27); cout << "2. 주머니에 있는 칼을 쓴다.                                             "; }
		if (getDrink == true) { gotoxy(20, 28); cout << "3. 주머니에 있는 청산가리를 쓴다.                                        "; }

		gotoxy(20, 29); cout << "무엇을 선택하시겠습니까? : ";
		cin >> input;

		gotoxy(20, 26); cout << "                                                                       ";
		gotoxy(20, 27); cout << "                                                                       ";
		gotoxy(20, 28); cout << "                                                                       ";
		gotoxy(20, 29); cout << "                                                                       ";

		if (input == 1)
		{
			gotoxy(1, 33); depressed += 10; cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";
			Sleep(300); gotoxy(20, 26);	cout << "참아야지 어쩌겠어. 내가 이 상황에서 뭘 어떻게 해.                        ";  next = _getch();
			Sleep(300); gotoxy(20, 26);	cout << "생각도 정리할 겸 바람도 쐴 겸 옥상으로 올라가야겠다.                     ";  next = _getch();
			Sleep(300); gotoxy(20, 26);	cout << "이상하게 10층까지는 금방 올라가네..?                                    ";  next = _getch();
			system("cls"); Opened(10); InsideClosed(10); Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(10); // 열리는 동작
			Sleep(300); gotoxy(20, 26);	cout << "10층에 도착해 난간쪽으로 발을 옮겼다.                                   ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "??  :  "; gotoxy(20, 26);	cout << "제가 나가시지 말라고 했잖아요. 왜 또 여기 계세요? ....어?            ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "그 순간 누가 나를 밀었고,                                          ";
			gotoxy(20, 27);	cout << "      나는 주변의 비명소리를 들으며 그대로 밑으로 떨어졌다.          ";  next = _getch();
			Sleep(300); system("cls"); end(); gotoxy(20, 26); cout << "ending3. 우울감                                                           ";  next = _getch();
			return -1;
		}
		else if (input == 2 && getDriver == true)
		{
			Sleep(300); gotoxy(20, 26);	cout << "내가 잘못한 게 아니잖아. 이 둘이, 이 상황이 잘못된거지.                  ";  next = _getch();
			Sleep(300); gotoxy(20, 26);	cout << "나는 주머니에서 아까 주운 칼을 꺼내들었다.                              ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "나  :  "; gotoxy(20, 26);	cout << "지금 이 상황이 내가 생각하는 상황이 맞아?                           ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "친구 :  "; gotoxy(20, 26);	cout << "무슨 소리하는거야?                                                ";
			Sleep(700); gotoxy(10, 26); cout << "??  :  "; gotoxy(20, 26);	cout << "당연하지. 지금까지 보고도 모르겠어? 딱봐도 바람난거잖아.             ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "??  :  "; gotoxy(20, 26);	cout << "이제 너는 안중에도 없다고.                                        ";  next = _getch();
			system("cls"); Cracked(7); gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■"; cout << "                                    ";
			Sleep(300); gotoxy(10, 26); cout << "??  :  "; gotoxy(20, 26);	cout << "빨리 처리해야돼. 예전에도 해봤잖아?                                ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "정신을 차려보니 나는 이미 친구를 찌른 뒤였고,                       ";
			Sleep(300); gotoxy(20, 27);	cout << "    공포에 떠는 여자친구는 놓친 채 엘리베이터 문이 닫혔다.          ";  next = _getch(); system("color 4");
			gotoxy(20, 27);	cout << "                                                                ";
			gotoxy(20, 26);	cout << "갑자기 어렸을 때 돌아가신 어머니의 표정이 떠올랐다.                 ";  next = _getch();
			getDriver = false;
			break;
		}
		else if (input == 3 && getDrink == true)
		{
			Sleep(300); gotoxy(20, 26);	cout << "내가 잘못한 게 아니잖아. 이 둘이, 이 상황이 잘못된거지.                  ";  next = _getch();
			Sleep(300); gotoxy(20, 26);	cout << "나는 주머니에서 청산가리를 꺼내들었다.                                  ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "나  :  "; gotoxy(20, 26);	cout << "지금 이 상황이 내가 생각하는 상황이 맞아?                           ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "친구 :  "; gotoxy(20, 26);	cout << "무슨 소리하는거야?                                                ";
			Sleep(700); gotoxy(10, 26); cout << "??  :  "; gotoxy(20, 26);	cout << "당연하지. 지금까지 보고도 모르겠어? 딱봐도 바람난거잖아.             ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "??  :  "; gotoxy(20, 26);	cout << "이제 너는 안중에도 없다고.                                        ";  next = _getch();
			system("cls"); Cracked(7); gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■";
			Sleep(300); gotoxy(10, 26); cout << "??  :  "; gotoxy(20, 26);	cout << "빨리 처리해야돼. 예전에도 해봤잖아?                                ";  next = _getch();
			Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "정신을 차려보니 나는 이미 친구의 입을 벌려 청산가리를 쏟은 뒤였고,";
			Sleep(300); gotoxy(20, 27);	cout << "    병과 함께 친구를 밖으로 내동댕이 친 채 엘리베이터 문이 닫혔다. ";  next = _getch();
			gotoxy(20, 27);	cout << "                                                                  ";
			gotoxy(20, 26);	cout << "                                                                  ";
			getDrink = false;
			break;
		}
		else continue;
	}

	depressed = 0;
	Sleep(300); gotoxy(20, 28);	cout << "우울감이 사라졌다.                                         "; next = _getch();
	gotoxy(1, 33); cout << "우울감 : "; for (int i = 0; i < depressed; i++) cout << "■"; cout << "                         ";
	gotoxy(20, 28);	cout << "                                                          ";

	return 8; 
}

void CSceneStory::floor8()
{
	//이거 나중에 주석처리
	//getDrink = false; getDriver = false;
	int next;
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "8층 문이 열리고 웅성웅성하는 소리가 크게 들린다.                  ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "아주머니가 급하게 뛰어타시더니 엘리베이터 닫힘 버튼을 빠르게 누른다. ";  next = _getch();
	system("cls"); Opened(8); Sleep(300); HalfOpen2(); Sleep(500); HalfOpen1(); Sleep(500); InsideClosed(8); isInElevator(); gotoxy(1, 33); cout << "우울감 : ";
	Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26);	cout << "탁탁탁탁탁탁                                                        ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "아주머니 : "; gotoxy(20, 26); cout << "빨리 닫아야 해. 사람들이 쫓아오고 있어.                         ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나      : "; gotoxy(20, 26); cout << "아주머니를요?                                                 ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "아주머니 : "; gotoxy(20, 26); cout << "나말고.                                                       ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나      : "; gotoxy(20, 26); cout << "....??                                                        ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "아주머니는 나를 안심시켜주려는 듯 웃으며 나를 쳐다보며 말을 걸었다.";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "아주머니 : "; gotoxy(20, 26); cout << "되게 많이 컸다.. 우리 아들.                                        ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나      : "; gotoxy(20, 26); cout << "저 아주머니 아들 아닌데요? 제 어머니는 저 어렸을 때 돌아가셨어요.";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "아주머니 : "; gotoxy(20, 26); cout << "....                                                             ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "나      : "; gotoxy(20, 26); cout << "물론 어렸을 때 일이라 기억이 잘 안 나기는 하지만요.               ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26);	cout << "고개를 들어 아주머니의 얼굴을 보았다.                             ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26);	cout << "아주머니는 곧 우실 것 같은 표정이었다.                             ";  next = _getch();

	if (choosedDriver == true && getDriver == false && getDrink == true)
	{
		Sleep(300); system("color 4"); gotoxy(20, 26);	cout << "???!?! 갑작스레 누가 내 발목을 잡았다.                            ";  next = _getch();
		Sleep(300); gotoxy(20, 26);	cout << "친구는 피범벅이 된 얼굴로 웃으며 나에게 말을 걸었다.                ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "친구(?) : "; gotoxy(20, 26); cout << "어머니잖아. 인사 안드려?????                                       ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "친구(?) : "; gotoxy(20, 26); cout << "너가 죽여놓고 모른척하면 안되지ㅋㅋㅋㅋ                              ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "아니야.. 난 변했어.                                                ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "친구(?) : "; gotoxy(20, 26); cout << "오늘 있었던 일을 잘 생각해봐. 넌 하나도 변하지 않았어.ㅎㅎㅎ          ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "친구(?) : "; gotoxy(20, 26); cout << "10년 썩고 나왔으면 반성하고 얌전히라도 있어야지ㅎㅎㅎ                 ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "친구가 기괴한 표정으로 웃는다.                                      ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "숨이 잘 쉬어지지 않는다.                                            ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "아주머니 : "; gotoxy(20, 26); cout << "아버지는.. 아버지는 왜 죽였니...                                    ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "           "; gotoxy(20, 26); cout << "다시 한번 아주머니를 본다.                                          ";  next = _getch();
		Sleep(300); system("cls"); Cracked(8); gotoxy(1, 33); cout << "우울감 : ";
		gotoxy(10, 26); cout << "아주머니(?) : "; gotoxy(25, 26); cout << "왜 죽였어!!!!!!!!!!!!!                                           "; Sleep(1000);
		system("cls"); Opened(8); InsideClosed(8);  gotoxy(1, 33); cout << "우울감 : ";
		Sleep(300); gotoxy(10, 26); cout << "               "; gotoxy(25, 26); cout << "번쩍하고 불이 꺼졌다가 켜졌다. 가까스로 숨이 쉬어진다.        ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "               "; gotoxy(20, 26); cout << "엘리베이터 안에는 목에 드라이버가 꽂힌 채 죽어있는 친구와 나밖에 없었다. ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "               "; gotoxy(10, 26); cout << "엘리베이터 안  tv 속에서는 10년전 가족을 모두 죽이고 잡혀간 한 꼬마의 이야기가 나온다.";  next = _getch();
	}
	else
	{
		Sleep(300); gotoxy(10, 26); cout << "아주머니 : "; gotoxy(20, 26); cout << "미안하게 생각해.. 엄마가 너 다 클 때까지는 옆에 계속 있어줘야 했는데..";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "나       : "; gotoxy(20, 26); cout << "저.. 무슨 얘기인지 모르겠어요                                        ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "아주머니 : "; gotoxy(20, 26); cout << "괜찮아. 이제 아픈건 좀 괜찮니?                                       ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "나       : "; gotoxy(20, 26); cout << "심장이 두근거리는 것 빼고는 괜찮은 것 같아요.                         ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "아주머니 : "; gotoxy(20, 26); cout << "그래... 약 잘 먹고...                                               ";  next = _getch();
		system("cls"); Opened(8); InsideClosed(8);  gotoxy(1, 33); cout << "우울감 : ";
		Sleep(300); gotoxy(10, 26); cout << "           "; gotoxy(20, 26); cout << "응? 아주머니가 사라졌다.                                             ";  next = _getch();
	}
}

void CSceneStory::floor9()
{
	//이거 나중에 주석처리
	//getDrink = false; getDriver = false;
	//choosedDrink = false; choosedDriver = true;
	int next;
	inventory(); system("cls"); Opened(9); InsideClosed(9); Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(9); // 열리는 동작
	Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "어김없이 문이 열린다.                                                ";  next = _getch();
	Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "평범하지만 조금은 피곤해보이는 남자가 탔다.                            ";  next = _getch();

	if (choosedDriver == true && getDriver == false)
	{
		Sleep(300); isInElevator(); system("color 4"); gotoxy(20, 26);	cout << "남자는 쓰러진 친구를 보더니 입이 찢어질 정도로 기쁘게 웃었다.       ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "그래!!!!! 이게 바로 너지!!!!!                                       ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "너의 병은 너랑 주변에 있는 모든 사람을 죽일거야!!!!                    ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "?? 모두를 죽이다니..?                                                ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "아직도 모르겠어?? 너는 지금 네 환각 속에서 살고 있잖아.                ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "나를 만난 것도 그렇다는거 아니야??                                    ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "맞다. 지금 탄 저 남자는.. 나다                                       ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "너. 너가 칼이랑 청산가리를 가지고 있던 건 확실해? 네 친구를 봐봐.       ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "확실하다. 근데 왜... 친구 목에 꽂혀있는 드라이버는 뭐지..?           ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "2층에서 봤던 꼬마. 너의 어릴적 모습이랑 똑같이 생겼잖아.             ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "오늘이 무슨 날인지는 기억하고?                                     ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "너, 환각 때문에 엄마가 너를 죽일거라고 착각해서 어떻게 했지?         ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "그리고 오늘은 너가 아빠를 죽이고 잡혀간 10년전 그 날이야.           ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "아니야.. 아니야 거짓말이야..                                     ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "그 장면을 보고 신고한 간호사를 지금까지 스토커라고 착각하고,          ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "드라이버를 들고 있었던 정비공을 너가 위협해서 모두 위층으로 올라오고 있어.";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "지금은 너가 아까 친구랑 얘기하던 사람을 놓친 바람에 경찰이 오고 있겠지.     ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "너가 오늘 약 안먹고 나갔을때부터 다들 뜯어 말렸어야되는데ㅋㅋㅋㅋㅋ 그치?";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "....나는 여자친구가 없다. 친구도 유일하게 한 명밖에 없었다.              ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "그리고 하나 남은 친구마저 나의 환청으로 인해 죽였다.                  ";  next = _getch();
		if(getDrink == true)
			Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "주머니를 보니 친구가 준 에너지드링크가 있다.                         ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "아.. 내가 오늘 약을 안먹었구나..                                    ";  next = _getch();
	}
	else if(getDrink == false && choosedDrink == true)
	{
		system("cls"); Opened(9); Sleep(300); HalfOpen2(); Sleep(500); HalfOpen1(); Sleep(500); InsideClosed(9); isInElevator(); gotoxy(1, 33); cout << "우울감 : ";
		Sleep(300); isInElevator(); gotoxy(20, 26);	cout << "남자는 바닥을 둘러보더니 한숨을 푹 내쉰다.                        ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "아쉽다...                                                           ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "나   : "; gotoxy(20, 26); cout << "네?                                                                 ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "나는 저번처럼 네가 해낼줄 알았지.. 오늘은 특별한 날이니까..             ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "너 친구는 죽지 않았어.                                               ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "물론 너가 의도했던바는 아니지. 넌 그게 청산가리인줄 알고 있었으니까.   ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "근데 그건 에너지드링크였거든. 그거 뭐 한번에 먹었다고 별일 있겠어?     ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "나   : "; gotoxy(20, 26); cout << "당신은 누구시죠..?                                                  ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "나? 보면 몰라?                                                      ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "너잖아.                                                             ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "          "; gotoxy(20, 26); cout << "순간 남자가 사라지고, 엘리베이터 문이 열린다.                       ";  next = _getch();
	}
	else
	{
		Sleep(300); gotoxy(20, 26);	cout << "이전 층으로 가서 선택을 마쳐주셔야 진행됩니다.                        ";  next = _getch();
	}
}

void CSceneStory::floor10()
{
	//이거 나중에 주석처리
	//getDrink = false; getDriver = true;
	//choosedDrink = true; choosedDriver = true;
	int next;
	inventory(); system("cls"); Opened(10); InsideClosed(10); Sleep(500); HalfOpen1(); Sleep(500); HalfOpen2(); Sleep(500); system("cls"); Opened(10); // 열리는 동작

	if (choosedDriver == true && getDriver == false)
	{
		Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26); cout << "10층에 도착하자 흰색 가운을 입은 사람이 말을 건다.                         ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "의사 : "; gotoxy(20, 26); cout << "아...여기올.. 뭐하다 오신거에요..? 그 피는...?                            ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "나   : "; gotoxy(20, 26); cout << "선생님.. 제가 오늘 약을 안 먹었나봐요.                                    ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "나   : "; gotoxy(20, 26); cout << "근데.. 제 병명이 뭐죠..?                                                 ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26); cout << "의사가 몸을 떨며 말했다.                                                  ";  next = _getch();
		Sleep(300);  system("color 40"); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "조현병..                                                                ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26); cout << "그 때 옥상 계단문이 쾅하고 열리며 경찰들이 뛰어와 나를 제압했다.             ";  next = _getch();
		system("cls"); system("color 07"); end(); gotoxy(20, 26); cout << "ending5. 진실                                                          ";

	}
	else if (getDrink == false && choosedDrink == true)
	{
		Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26); cout << "10층에 도착하자 흰색 가운을 입은 사람이 말을 건다.                         ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "의사 : "; gotoxy(20, 26); cout << "아.. 여기올라오시고 계셨어요?                                             ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "나   : "; gotoxy(20, 26); cout << "네... 집 가서 쉬려고 했는데.. 그렇게 됐네요.                               ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "의사 : "; gotoxy(20, 26); cout << "집? 집이요? 7층 병실에 계시라했잖아요!                                    ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "나   : "; gotoxy(20, 26); cout << "네? 저희 집도 7층.. 근데 선생님은 왜 여기 계세요?                          ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26); cout << "그 때 옥상 계단문이 쾅하고 열리며 의사와 간호사, 경호원들이 뛰어올라왔다.  ";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "       "; gotoxy(20, 26); cout << "큰 소리와 함께 나는 제압되었고, 주변에서 사람들이 수군거리는 소리가 들렸다.";  next = _getch();
		Sleep(300); gotoxy(10, 26); cout << "??   : "; gotoxy(20, 26); cout << "\"저러니까 정신병원에 오지..\"                                              ";  next = _getch();
		Sleep(300); system("cls"); end(); gotoxy(20, 26); cout << "ending4. 정신병원                       ";
	}
	else
	{
		Sleep(300); gotoxy(20, 26);	cout << "이전 층으로 가서 선택을 마쳐주셔야 진행됩니다.                        ";  next = _getch();
	}
}

void CSceneStory::end()
{
	endScene();
}

void CSceneStory::killSpider()
{
	// 거미죽이기
	int ifkilled;
	int next;
	Sleep(300); gotoxy(20, 26);	cout << "거미가 기어다닌다....                                                     "; next = _getch();
	Sleep(300); gotoxy(20, 28);	cout << "죽이시겠습니까? (1: 죽인다/ 2: 죽이지 않는다) : "; cin >> ifkilled;
	if (ifkilled == 1)
	{
		depressed -= 1;
		gotoxy(20, 28);
		cout << "거미를 죽여 우울감이 10 떨어집니다.                      ";
	}
	else if (ifkilled == 2)
	{
		gotoxy(20, 28);
		cout << "거미를 죽이지 않았습니다.                                ";
	}
	else
	{
		gotoxy(20, 28);
		cout << "스킵합니다.                                             ";
	}
	Sleep(1000); gotoxy(20, 26);	cout << "                                                                       ";
	gotoxy(20, 28);	cout << "                                                                       ";

}

void CSceneStory::inventory()
{
	int input; int winput;
	// 인벤토리 확인 여부
	Sleep(300); gotoxy(20, 28);	cout << "인벤토리를 확인할 수 있습니다. 확인하시겠습니까? (1: 확인) : "; 
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
