#include "Character.h"
#include <iostream>

Character::Character()
{
}

Character::Character(int InID, string InName, int InStr, int InDex)
{
	cout << "ĳ���� ����! " << endl;

	ID = InID;
	Name = InName;
	Str = InStr;
	Dex = InDex;

}

int Character::CreateCharacter(int InID, string InName, int InStr, int InDex)
{
	cout << "CC �Լ� ĳ���� ����! " << endl;

	ID = InID;
	Name = InName;
	Str = InStr;
	Dex = InDex;

	cout << "�� ĳ������ ���̵�� : " << ID << endl;
	cout << "�� ĳ������ �̸��� : " << Name << endl;
	cout << "�� ĳ������ ���� : " << Str << endl;
	cout << "�� ĳ������ ��ø�� : " << Dex << endl;

	return 0;
}