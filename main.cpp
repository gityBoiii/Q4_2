#include <iostream>
#include "Character.h"
using namespace std;

int main()
{

	Character MyCharacter;
	Character MyCharacter2;
	Character MyCharacter3;


	MyCharacter.ID = 1;
	MyCharacter.Name = "ĳ��1";
	MyCharacter.Str = 38;
	MyCharacter.Dex = 34;

	// Ŭ����_�밡�� ����
	cout << "�� ĳ������ ���̵�� : " << MyCharacter.ID << endl;
	// Ŭ����_�Լ�ȭ ���� 
	MyCharacter2.CreateCharacter(2, "ĳ��2", 14, 50);
	MyCharacter3.CreateCharacter(3, "ĳ��3", 11, 35);



	return 0;
}