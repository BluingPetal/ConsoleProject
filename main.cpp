#include "scene.h";
#include "CSceneStory.h"
#include<iostream>
#include<Windows.h>;

// ��ü�� ����� ���� class�� �ƴ� �ڵ� ������ ���� class

int main()
{
	// 100 * 35(��ü), 100 * 25(ȭ��)
	system("mode con:cols=100 lines=35");
	CSceneStory story;
	//int startpoint = story.start(); // ���� ȭ��

	story.floor1();
	story.floor2();
	//story.floor3();
	//story.floor4();
	//story.floor5();
	//story.floor6();
	//story.floor7();
	//story.floor8();
	//story.floor9();
	//story.floor10();
}