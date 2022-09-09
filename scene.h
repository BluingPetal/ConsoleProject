#pragma once

class scene
{
	// 도트 그림은 gotoxy()로 수정 가능하도록 public으로 선언
public:
	void startScene();
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
};

