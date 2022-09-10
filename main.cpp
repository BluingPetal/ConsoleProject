#include "scene.h"
#include "CSceneStory.h"
#include<iostream>
#include<Windows.h>

// 객체를 만들기 위한 class가 아닌 코드 정리를 위한 class

int main()
{
	// 100 * 35(전체), 100 * 25(화면)
	system("mode con:cols=100 lines=35");
	CSceneStory story;
	int startpoint = story.start();
	system("cls");

	if(startpoint<0) goto end;
	else if (startpoint == 0 || startpoint == 1) goto floor1;
	else if (startpoint == 2) goto floor2;
	else if (startpoint == 3)goto floor3;
	else if (startpoint == 4)goto floor4;
	else if (startpoint == 5 || startpoint == 6)goto floor56;
	else if (startpoint == 7)goto floor7;
	else if (startpoint == 8)goto floor8;
	else if (startpoint == 9)goto floor9;
	else if (startpoint == 10)goto floor10;

	floor1: story.floor1();
	floor2: story.floor2();
	floor3: story.floor3();
	if (story.floor3() < 0) goto end;
	floor4: story.floor4();
	if (story.floor4() < 0) goto end;
	floor56: story.floor5t6();
	floor7: story.floor7();
	if (story.floor7() < 0) goto end;
	floor8: story.floor8();
	floor9: story.floor9();
	floor10: story.floor10();
end:;
}