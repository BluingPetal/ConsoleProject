#include "scene.h";
#include "CSceneStory.h"
#include<iostream>
#include<Windows.h>;

// 객체를 만들기 위한 class가 아닌 코드 정리를 위한 class

int main()
{
	// 100 * 35(전체), 100 * 25(화면)
	system("mode con:cols=100 lines=35");
	CSceneStory story;
	//int startpoint = story.start(); // 메인 화면

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