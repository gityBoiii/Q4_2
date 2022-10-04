#include <iostream>
#include "Character.h"
using namespace std;

int main()
{

	Character MyCharacter;
	Character MyCharacter2;
	Character MyCharacter3;


	MyCharacter.ID = 1;
	MyCharacter.Name = "캐릭1";
	MyCharacter.Str = 38;
	MyCharacter.Dex = 34;

	// 클래스_노가다 버전
	cout << "내 캐릭터의 아이디는 : " << MyCharacter.ID << endl;
	// 클래스_함수화 버전 
	MyCharacter2.CreateCharacter(2, "캐릭2", 14, 50);
	MyCharacter3.CreateCharacter(3, "캐릭3", 11, 35);



	return 0;
}