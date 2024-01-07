#pragma once
#include "Ant.h"
#include <vector>
class AntColony
{
	std::string color;
	Heap resourcesColony;
	std::vector <WorkerAnt> workers;

	WorkerAnt getWorker(int index);
	void collectResourcesForColony(WorkerAnt ant, Heap heap);
};

