#ifndef ANT_H
#define ANT_H


#include "Resources.h"

class Ant
{
public:
	int health{};
	int getHealth();

};

class WorkerAnt : public Ant
{
	int countCollectRes{};
	std::string typeRes{""};
public:
	int getCountCollectRes();
	std::string getTypeRes();


};


class WarriorAnt : public Ant
{
	int armor{};
	int damage{};
};

class QueenAnt
{

};


#endif // !ANT_H