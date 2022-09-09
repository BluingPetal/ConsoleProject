#include "scene.h"
#include <iostream>
#include <Windows.h>

#define BLACK 0
#define D_RED 4
#define D_WHITE 7
#define RED 12
#define YELLOW 14

using namespace std;


void scene::startScene(int num)
{
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                  "; TextColor(D_RED, BLACK); cout << "@@@@@@@    @@@@@@   @@@@@@@"; TextColor(D_WHITE, BLACK); cout << "                                   ┃\n";
	cout << "┃                                  "; TextColor(D_RED, BLACK); cout << "@@@@@@@@  @@@@@@@@  @@@@@@@@"; TextColor(D_WHITE, BLACK); cout << "                                  ┃\n";
	cout << "┃                                  "; TextColor(D_RED, BLACK); cout << "@@!  @@@  @@!  @@@  @@!  @@@"; TextColor(D_WHITE, BLACK); cout << "                                  ┃\n";
	cout << "┃                                  "; TextColor(D_RED, BLACK); cout << "!@   @!@  !@!  @!@  !@!  @!@"; TextColor(D_WHITE, BLACK); cout << "                                  ┃\n";
	cout << "┃                                  "; TextColor(D_RED, BLACK); cout << "@!@!@!@   @!@!@!@!  @!@  !@!"; TextColor(D_WHITE, BLACK); cout << "                                  ┃\n";
	cout << "┃                                  "; TextColor(D_RED, BLACK); cout << "!!!@!!!!  !!!@@!!!  !@!  !!!"; TextColor(D_WHITE, BLACK); cout << "                                  ┃\n";
	cout << "┃                                  "; TextColor(D_RED, BLACK); cout << "!!:  !!!  !!:  !!!  !!:  !!!"; TextColor(D_WHITE, BLACK); cout << "                                  ┃\n";
	cout << "┃                                  "; TextColor(D_RED, BLACK); cout << ":!:  !:!  :!:  !:!  :!:  !:!"; TextColor(D_WHITE, BLACK); cout << "                                  ┃\n";
	cout << "┃                                  "; TextColor(D_RED, BLACK); cout << " :: ::::  ::   :::   :::: ::"; TextColor(D_WHITE, BLACK); cout << "                                  ┃\n";
	cout << "┃                                  "; TextColor(D_RED, BLACK); cout << ":: : ::    :   : :  :: :  : "; TextColor(D_WHITE, BLACK); cout << "                                  ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃	  "; TextColor(D_RED, BLACK); cout << "@@@@@@@  @@@@@@@@  @@@@@@@@@@    @@@@@@@   @@@@@@@@  @@@@@@@   @@@@@@@@  @@@@@@@ "; TextColor(D_WHITE, BLACK); cout << "      ┃\n";
	cout << "┃	  "; TextColor(D_RED, BLACK); cout << "@@@@@@@  @@@@@@@@  @@@@@@@@@@@   @@@@@@@@  @@@@@@@@  @@@@@@@@  @@@@@@@@  @@@@@@@@"; TextColor(D_WHITE, BLACK); cout << "      ┃\n";
	cout << "┃	  "; TextColor(D_RED, BLACK); cout << "  @@!    @@!       @@! @@! @@!   @@!  @@@  @@!       @@!  @@@  @@!       @@!  @@@"; TextColor(D_WHITE, BLACK); cout << "      ┃\n";
	cout << "┃	  "; TextColor(D_RED, BLACK); cout << "  !@!    !@!       !@! !@! !@!   !@!  @!@  !@!       !@!  @!@  !@!       !@!  @!@"; TextColor(D_WHITE, BLACK); cout << "      ┃\n";
	cout << "┃	  "; TextColor(D_RED, BLACK); cout << "  @!!    @!!!:!    @!! !@  @!@   @!@@!@!   @!!!:!    @!@!!@!   @!!!:!    @!@  !@!"; TextColor(D_WHITE, BLACK); cout << "      ┃\n";
	cout << "┃	  "; TextColor(D_RED, BLACK); cout << "  !!!    !!!!!:    !@!  @  !@!   !!@!!!    !!!!!:    !!@!@!    !!!!!:    !@!  !!!"; TextColor(D_WHITE, BLACK); cout << "      ┃\n";
	cout << "┃	  "; TextColor(D_RED, BLACK); cout << "  !!:    !!:       !!:     !!:   !!:       !!:       !!: :!!   !!:       !!:  !!!"; TextColor(D_WHITE, BLACK); cout << "      ┃\n";
	cout << "┃	  "; TextColor(D_RED, BLACK); cout << "  :!:    :!:       :!:     :!:   :!:       :!:       :!:  !:!  :!:       :!:  !:!"; TextColor(D_WHITE, BLACK); cout << "      ┃\n";
	cout << "┃	  "; TextColor(D_RED, BLACK); cout << "   ::    :: ::::   :::     ::    ::        :: ::::   ::   :::  :: ::::   :::: :: "; TextColor(D_WHITE, BLACK); cout << "      ┃\n";
	cout << "┃	  "; TextColor(D_RED, BLACK); cout << "   :     : :: ::    :      :     :         : :: ::    :   : :  : :: ::   :: :  : "; TextColor(D_WHITE, BLACK); cout << "      ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                        "; (num == 0)? TextColor(D_RED, BLACK):TextColor(D_WHITE, BLACK); cout << "┏━━━━━━━━━━━━━━━┓"; TextColor(D_WHITE, BLACK); cout << "                                       ┃\n";
	cout << "┃                                        "; (num == 0)? TextColor(D_RED, BLACK):TextColor(D_WHITE, BLACK); cout << "┃     Start     ┃"; TextColor(D_WHITE, BLACK); cout << "                                       ┃\n";
	cout << "┃                                        "; (num == 0)? TextColor(D_RED, BLACK):TextColor(D_WHITE, BLACK); cout << "┗━━━━━━━━━━━━━━━┛"; TextColor(D_WHITE, BLACK); cout << "                                       ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                   "; (num == 1) ? TextColor(D_RED, BLACK) : TextColor(D_WHITE, BLACK); cout << "┏━━━━━━━━━━━━━━━┓    "; (num == 2)? TextColor(D_RED, BLACK):TextColor(D_WHITE, BLACK); cout << "┏━━━━━━━━━━━━━━━┓    "; (num == 3)? TextColor(D_RED, BLACK):TextColor(D_WHITE, BLACK); cout << "┏━━━━━━━━━━━━━━━┓"; TextColor(D_WHITE, BLACK); cout << "                  ┃\n";
	cout << "┃                   "; (num == 1) ? TextColor(D_RED, BLACK) : TextColor(D_WHITE, BLACK); cout << "┃      Load     ┃    "; (num == 2)? TextColor(D_RED, BLACK):TextColor(D_WHITE, BLACK); cout << "┃      Help     ┃    "; (num == 3)? TextColor(D_RED, BLACK):TextColor(D_WHITE, BLACK); cout << "┃      Quit     ┃"; TextColor(D_WHITE, BLACK); cout << "                  ┃\n";
	cout << "┃                   "; (num == 1) ? TextColor(D_RED, BLACK) : TextColor(D_WHITE, BLACK); cout << "┗━━━━━━━━━━━━━━━┛    "; (num == 2)? TextColor(D_RED, BLACK):TextColor(D_WHITE, BLACK); cout << "┗━━━━━━━━━━━━━━━┛    "; (num == 3)? TextColor(D_RED, BLACK):TextColor(D_WHITE, BLACK); cout << "┗━━━━━━━━━━━━━━━┛"; TextColor(D_WHITE, BLACK); cout << "                  ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n";
}

void scene::elevatorOut(int floor)
{
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
	cout << "┃                                        ┏━━━━━━━━━━━━━━┓                                        ┃\n";
	cout << "┃                                        ┃              ┃                                        ┃\n";
	cout << "┃               ┏━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━┯━━━━━━┻━━━━━━━━━━━━━━━━━━━━━━━━┓     ____      ┃\n";
	cout << "┃               ┃                                ┃                               ┃    /  ↑ ＼   ┃\n";
	cout << "┃               ┃                                ┃                               ┃   / ↖┃    ＼ ┃\n";
	cout << "┃               ┃                                ┃                               ┃   ＼        / ┃\n";
	cout << "┃               ┃                                ┃                               ┃     ＼_____/  ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃    ┏━━━━━┓    ┃\n";
	cout << "┃               ┃                                ┃                               ┃    ┃  ▲ ┃    ┃\n";
	cout << "┃               ┃                                ┃                               ┃    ┃     ┃    ┃\n";
	cout << "┃               ┃                                ┃                               ┃    ┃  ▼ ┃    ┃\n";
	cout << "┃               ┃                                ┃                               ┃    ┗━━━━━┛    ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┠━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n";
	gotoxy(50, 2); // 층수 찍을 위치
	cout << floor << endl;
}

void scene::InsideClosed(int floor)
{
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
	cout << "┃                                        ┏━━━━━━━━━━━━━━┓                                        ┃\n";
	cout << "┃                                        ┃              ┃                                        ┃\n";
	cout << "┃               ┏━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━┯━━━━━━┻━━━━━━━━━━━━━━━━━━━━━━━━┓               ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┠━━━━━━━━━━━━━━━┫                                ┃                               ┠━━━━━━━━━━━━━━━┫\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃   ①     ⑥   ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃   ②     ⑦   ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃   ③     ⑧   ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃   ④     ⑨   ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃   ⑤     ⑩   ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┠━━━━━━━━━━━━━━━┫                                ┃                               ┃  ＜＞   ＞＜  ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┠━━━━━━━━━━━━━━━┫\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┃               ┃                                ┃                               ┃               ┃\n";
	cout << "┠━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n";
	gotoxy(50, 2); // 층수 찍을 위치
	cout << floor << endl;
}

void scene::HalfOpen1()
{
	gotoxy(31, 3); cout << "━━━━━━━━━━━╋━━━━━━━━━━━━━━╋━━━━━━━━━━━━\n";
	for (int i = 0; i < 20; i++)
	{
		gotoxy(31, i + 4);
		cout << "           ┃              ┃            \n";
	}
}

void scene::HalfOpen2()
{
	gotoxy(31, 3); cout << "┯━━━━━━━━━━┻━━━━━━━┯━━━━━━┻━━━━━━━━━━━┯\n";
	for (int i = 0; i < 20; i++)
	{
		gotoxy(31, i + 4);
		cout << "┃                  ┃                  ┃\n";
	}
}

void scene::Opened(int floor)
{
	gotoxy(31, 3); cout << "━━━━━━━━━━━┻━━━━━━━━━━━━━━┻━━━━━━━━━━━━\n";
	for (int i = 0; i < 20; i++)
	{
		gotoxy(31, i + 4);
		cout << "                                       \n";
	}
	gotoxy(50, 2); // 층수 찍을 위치
	cout << floor << endl;
}

void scene::Cracked(int floor)
{
	cout << "┏  ━  ━━━  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  ━━━━━━━━━━━━━━━  ━━━━━━━━━━━┓\n";
	cout << "┃━  ━     ━                              ┏━━━  ━━━━━━━━━┓           ━               ━            ┃\n";
	cout << "┃                           ━         ━  ┃    ━          ┃       ━                               ┃\n";
	cout << " ┃              ┏━━━━━━━━━━  ━━━━━━━  ━━━┻━━━━━━━━━━━━━━┻━━━━━━━  ━━━━━━━━━━━━━━━┓               ┃\n";
	cout << "┃       ━        ┃                                                                ┃              ┃\n";
	cout << "┠━━━  ━━  ━━  ━━┫                                                                ┠━━━━━━━━━━━━━━━┫\n";
	cout << "┃    ━       ━   ┃                                                                ┃              ┃\n";
	cout << "┃     aaaaaa    ┃                                                                ┃  ①      ⑥   ┃\n";
	cout << " ┃   aaaaaaaa   ┃                                                                ┃               ┃\n";
	cout << "┃    aaaaaaaa   ┃                                                                ┃   ②     ⑦   ┃\n";
	cout << "┃    aaaaaaaa    ┃                                                              ┃                ┃\n";
	cout << "┃      aaaa     ┃                                                                ┃  ③      ⑧   ┃\n";
	cout << "┃   aaaaaaaaaa  ┃                                                                ┃               ┃\n";
	cout << " ┃aaaaaaaaaaaaaa ┃                                                               ┃   ④      ⑨  ┃\n";
	cout << "┃aaaaaaaaaaaaaaa┃                                                               ┃                ┃\n";
	cout << "┃aaaaaaaaaaaaaaa┃                                                                ┃  ⑤      ⑩   ┃\n";
	cout << "┃aaaaaaaaaa━aaaa┃                                                                ┃               ┃\n";
	cout << "┠━━  ━━━━━━  ━━━┫                                                                 ┃ ＜＞   ＞＜  ┃\n";
	cout << "┃  ━            ┃                                                                ┃               ┃\n";
	cout << "┃               ┃                                                                ┠━━━━━  ━━━━  ━━┫\n";
	cout << "┃               ┃                                                                ┃      ━     ━  ┃\n";
	cout << "┃                ┃                                                              ┃                ┃\n";
	cout << "┃               ┃                                                                ┃               ┃\n";
	cout << " ┃              ┃                                                                ┃               ┃\n";

}

void scene::endScene()
{
	cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                ,------.  ,--.  ,--.  ,------.                                  ┃\n";
	cout << "┃                                |  .---'  |  ,'.|  |  |  .-.  ＼                                ┃\n";
	cout << "┃                                |  `--,   |  |' '  |  |  |  ＼  :                               ┃\n";
	cout << "┃                                |  `---.  |  | `   |  |  '---'  /                               ┃\n";
	cout << "┃                                `======'  `=='  `=='  `======='                                 ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┠━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┃                                                                                                ┃\n";
	cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n";


}

void scene::Inventory()
{
	int num = 5;
	gotoxy(13, num++); cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
	gotoxy(13, num++); cout << "┃                                                                     ┃\n";
	gotoxy(13, num++); cout << "┃                                                                     ┃\n";
	gotoxy(13, num++); cout << "┃                                                                     ┃\n";
	gotoxy(13, num++); cout << "┃                                                                     ┃\n";
	gotoxy(13, num++); cout << "┃                                                                     ┃\n";
	gotoxy(13, num++); cout << "┃                                                                     ┃\n";
	gotoxy(13, num++); cout << "┃                                                                     ┃\n";
	gotoxy(13, num++); cout << "┃                                                                     ┃\n";
	gotoxy(13, num++); cout << "┃                                                                     ┃\n";
	gotoxy(13, num++); cout << "┃                                                                     ┃\n";
	gotoxy(13, num++); cout << "┃                                                                     ┃\n";
	gotoxy(13, num++); cout << "┃                                                                     ┃\n";
	gotoxy(13, num++); cout << "┃                                                                     ┃\n";
	gotoxy(13, num++); cout << "┃                                                                     ┃\n";
	gotoxy(13, num++); cout << "┃                                                                     ┃\n";
	gotoxy(13, num++); cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n";
					 
}

void scene::Driver()
{
	cout << " ┏━━━━━━━━━━━━━━━┓\n";
	cout << " ┃ __            ┃\n";
	cout << " ┃ ＼＼          ┃\n";
	cout << " ┃   ＼＼        ┃\n";
	cout << " ┃     ＼＼      ┃\n";
	cout << " ┃        ▨▨   ┃\n";
	cout << " ┃         ▨▨  ┃\n";
	cout << " ┃          ▨▨ ┃\n";
	cout << " ┠━━━━━━━━━━━━━━━┫\n";
	cout << " ┃               ┃\n";
	cout << " ┗━━━━━━━━━━━━━━━┛\n";
}			  

void scene::Drink()
{
	cout << "┏━━━━━━━━━━━━━━━┓\n";
	cout << "┃     _____     ┃\n";
	cout << "┃    (_____)    ┃\n";
	cout << "┃    |    ┃|    ┃\n";
	cout << "┃    |    ┃|    ┃\n";
	cout << "┃    |    ┃|    ┃\n";
	cout << "┃    く___ノ    ┃\n";
	cout << "┃               ┃\n";
	cout << "┠━━━━━━━━━━━━━━━┫\n";
	cout << "┃               ┃\n";
	cout << "┗━━━━━━━━━━━━━━━┛\n";
}			 

void scene::Phone()
{
	cout << "┏━━━━━━━━━━━━━━━┓\n";
	cout << "┃               ┃\n";
	cout << "┃    ┏━━━━━━┫   ┃\n";
	cout << "┃    ┃      ┃   ┃\n";
	cout << "┃    ┃      ┃   ┃\n";
	cout << "┃    ┃      ┃   ┃\n";
	cout << "┃    ┠━━━━━━┫   ┃\n";
	cout << "┃    ┗━━━━━━┛   ┃\n";
	cout << "┠━━━━━━━━━━━━━━━┫\n";
	cout << "┃               ┃\n";
	cout << "┗━━━━━━━━━━━━━━━┛\n";
}

void gotoxy(int x, int y)
{
	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void TextColor(int font, int background)
{
	int Color = font + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}