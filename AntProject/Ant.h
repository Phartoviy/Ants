#ifndef ANT_H
#define ANT_H


#include "Resources.h"

class Ant
{
public:
	int m_health{};
	std::string m_rankAnt {""};
	int getHealth();
	Ant(int health) :m_health(health) {};
	Ant(int health, std::string rank) :m_health(health), m_rankAnt(rank) {};
};

class WorkerAnt : public Ant
{
	int countCollectRes{};
	std::string typeRes{""};
public:
	int getCountCollectRes();
	std::string getTypeRes();
	WorkerAnt(int health, int count, std::string type) :Ant(health), countCollectRes(count), typeRes(type) {};
	WorkerAnt(int health,std::string rank, int count, std::string type) :Ant(health,rank), countCollectRes(count), typeRes(type) {};
};


class WarriorAnt : public Ant
{
	int armor{};
	int damage{};
public:
	bool isArmorEmpty();
	int getDamage();
	void attack(int dmg);
	void reduceArmor(int dmg);
	WarriorAnt(int health, int armor, int damage) :Ant(health), armor(armor), damage(damage) {};
	WarriorAnt(int health, std::string rank, int armor, int damage) :Ant(health, rank), armor(armor), damage(damage) {};
};



class QueenAnt : public Ant
{
	std::string m_name{""};

public:
	std::string getName();
	QueenAnt(int health, std::string rank, std::string name) : Ant(health, rank), m_name(name) {};



};


#endif // !ANT_H