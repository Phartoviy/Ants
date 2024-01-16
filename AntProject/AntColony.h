//#pragma once
#ifndef ANTCOLONY_H
#define ANTCOLONY_H

#include "Ant.h"
#include <vector>
class AntColony
{
	std::string m_color{""};
	Heap resourcesColony;
	std::vector <std::shared_ptr<Ant>> workers{};
	std::vector <std::shared_ptr<Ant>> warriors{};
	QueenAnt queen;
public:
	std::shared_ptr<Ant> getWorker(int index);
	void collectResourcesForColony(std::shared_ptr<Ant> ant, Heap &heap);
	void attackOpponentColony(std::shared_ptr<Ant> attacker, std::shared_ptr<Ant> oppoAnt);
	void appearAnt();
};

#endif // !ANTCOLONY_H
