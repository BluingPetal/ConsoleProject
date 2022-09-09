#pragma once

class scene
{
protected:
	void startScene(int num);
	void elevatorOut(int floor);
	void InsideClosed(int floor);
	void HalfOpen1();
	void HalfOpen2();
	void Opened(int floor);
	void Cracked(int floor);
	void endScene();
	void Inventory();
	void Driver();
	void Drink();
	void Phone();
};


void gotoxy(int x, int y);
void TextColor(int font, int background);
