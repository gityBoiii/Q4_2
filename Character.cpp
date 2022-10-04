#include "Character.h"
#include <iostream>

Character::Character()
{
}

Character::Character(int InID, string InName, int InStr, int InDex)
{
	cout << "캐릭터 생성! " << endl;

	ID = InID;
	Name = InName;
	Str = InStr;
	Dex = InDex;

}

int Character::CreateCharacter(int InID, string InName, int InStr, int InDex)
{
	cout << "CC 함수 캐릭터 생성! " << endl;

	ID = InID;
	Name = InName;
	Str = InStr;
	Dex = InDex;

	cout << "내 캐릭터의 아이디는 : " << ID << endl;
	cout << "내 캐릭터의 이름은 : " << Name << endl;
	cout << "내 캐릭터의 힘은 : " << Str << endl;
	cout << "내 캐릭터의 민첩은 : " << Dex << endl;

	return 0;
}