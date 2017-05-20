﻿#include <string>
#include <iostream>
#include "Skill.h"
using namespace std;
Skill::Skill(string _name, int _hurt, int _mp,int _levelupmoney,int _level) :name(_name), hurt(_hurt), mp(_mp),levelupmoney(_levelupmoney), level(_level){}
string Skill::getName()
{
	return name;
}
int Skill::getHurt()
{
	return hurt; 
}
int Skill::getMp()
{
	return mp;
}
int Skill::getLevel()
{
	return level;
}
int Skill::getLevelupmoney()
{
	return levelupmoney;
}
void Skill::setName(string _name)
{
	name = _name;
}
void Skill::setHurt(int _hurt)
{
	hurt = _hurt;
}
void Skill::setMp(int _mp)
{
	mp = _mp;
}
void Skill::setLevel(int _level)
{
	level = _level;
}
void Skill::setLevelupmoney(int _levelupmoney)
{
	levelupmoney = _levelupmoney;
}