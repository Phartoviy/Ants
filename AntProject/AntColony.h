//#pragma once
#ifndef ANTCOLONY_H
#define ANTCOLONY_H

#include "Ant.h"
#include <vector>
class AntColony
{
	std::string color{""};
	Heap resourcesColony;
	std::vector <std::shared_ptr<Ant>> workers{};
public:
	std::shared_ptr<Ant> getWorker(int index);
	void collectResourcesForColony(std::shared_ptr<Ant> ant, Heap &heap);
	void attackOpponentColony(std::shared_ptr<Ant> attacker, std::shared_ptr<Ant> oppoAnt);
};

#endif // !ANTCOLONY_H
