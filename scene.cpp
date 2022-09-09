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
	cout << "┃               ┏━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━━━━━━━━┓    ******     ┃\n";
	cout << "┃               ┃                                ┃                               ┃   *  ↑  *    ┃\n";
	cout << "┃               ┃                                ┃                               ┃  * ↖│    *   ┃\n";
	cout << "┃               ┃                                ┃                               ┃   *      *    ┃\n";
	cout << "┃               ┃                                ┃                               ┃    ******     ┃\n";
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
	gotoxy(49, 2); // 층수 찍을 위치
	cout << floor << endl;
}

void scene::InsideClosed(int floor)
{
	for (int i = 0; i < 20; i++)
	{
		gotoxy(16, i + 4);
		TextColor(BLACK, D_WHITE); cout << "┃                                ┃                              \n";
	}
	gotoxy(49, 2); // 층수 찍을 위치
	cout << floor << endl;
	TextColor(D_WHITE, BLACK);
}

void scene::HalfOpen1()
{
	for (int i = 0; i < 20; i++)
	{
		gotoxy(16, i + 4);
		TextColor(BLACK, D_WHITE); cout << "┃                       ┃ "; TextColor(D_WHITE, BLACK); cout << "                "; TextColor(BLACK, D_WHITE); cout << "                       ┃\n";
	}
	TextColor(D_WHITE, BLACK);
}

void scene::HalfOpen2()
{
	for (int i = 0; i < 20; i++)
	{
		gotoxy(16, i + 4);
		TextColor(BLACK, D_WHITE); cout << "┃             ┃ "; TextColor(D_WHITE, BLACK); cout << "                                     "; TextColor(BLACK, D_WHITE); cout << "            ┃\n";
	}
	TextColor(D_WHITE, BLACK);
}

void scene::Opened(int floor)
{
	cout << " "; TextColor(BLACK, D_WHITE); cout << "                                                                                                 "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "                                        ┏━━━━━━━━━━━━━━┓                                         "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "                                        ┃       "; cout << floor; cout << "      ┃                                         "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┏━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━━━━━━━━┓                "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃                "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "━━━━━━━━━━━━━━━┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┠━━━━━━━━━━━━━━━━"; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃                "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃   ①     ⑥    "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃                "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃   ②     ⑦    "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃                "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃   ③     ⑧    "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃                "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃   ④     ⑨    "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃                "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃   ⑤     ⑩    "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃                "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "━━━━━━━━━━━━━━━┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃  ＜＞   ＞＜   "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃                "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┠━━━━━━━━━━━━━━━━"; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃                "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃                "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃                "; TextColor(D_WHITE, BLACK); cout << " \n";
	cout << " "; TextColor(BLACK, D_WHITE); cout << "               ┃ "; TextColor(D_WHITE, BLACK); cout << "                                                               "; TextColor(BLACK, D_WHITE); cout << "┃                "; TextColor(D_WHITE, BLACK); cout << " \n";
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
	cout << " ┃    드라이버   ┃\n";
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
	cout << "┃ 에너지 드링크 ┃\n";
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
	cout << "┃     휴대폰    ┃\n";
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