#pragma once

class scene
{
	// ��Ʈ �׸��� gotoxy()�� ���� �����ϵ��� public���� ����
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

