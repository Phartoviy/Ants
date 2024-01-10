//#pragma once
#ifndef ANTCOLONY_H
#define ANTCOLONY_H

#include "Ant.h"
#include <vector>
class AntColony
{
	std::string color;
	Heap resourcesColony;
	std::vector <std::shared_ptr<WorkerAnt>> workers;
public:
	std::shared_ptr<WorkerAnt> getWorker(int index);
	void collectResourcesForColony(std::shared_ptr<WorkerAnt> ant, Heap &heap);
	
};

#endif // !ANTCOLONY_H
