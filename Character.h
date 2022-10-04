#pragma once
#include<string>
using namespace std;

class Character
{
public:
	Character();
	Character(int InID, string InName, int InStr, int InDex);

	int CreateCharacter(int InID, string InName, int InStr, int InDex);

	int ID;
	string Name;
	int Str;
	int Dex;

};

