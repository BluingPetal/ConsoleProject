#pragma once
#include"scene.h"

class CSceneStory : public scene
{
public :
	int start();
	void floor1();
	void floor2();
	void floor3();
	void floor4();
	void floor5();
	void floor6();
	void floor7();
	void floor8();
	void floor9();
	void floor10();
	void end();
};

void control(int& input, int& num);
void 