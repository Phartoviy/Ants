#include "AntColony.h"

std::shared_ptr<WorkerAnt> AntColony::getWorker(int index)
{
	if (index < workers.size())
		return workers[index];
	else
		return nullptr;
}

void AntColony::collectResourcesForColony(std::shared_ptr<WorkerAnt> ant, Heap &heap)
{	
	std::string resourcesAnt = ant->getTypeRes();
	for (int i = 0; i != resourcesAnt.size(); i++)
	{
		switch (resourcesAnt[i])
		{
		case 'l':
		{	if (heap.leaf > 0) 
			{
				int remainLeafs = heap.leaf;
				if (heap.reduceLeafs(ant->getCountCollectRes()))
					resourcesColony.leaf += ant->getCountCollectRes();
				else
					resourcesColony.leaf += remainLeafs;
				return;
			}
			break;
		}
		case 's':
		{
			if (heap.stick > 0)
			{
				int remainSticks = heap.stick;
				if (heap.reduceSticks(ant->getCountCollectRes()))
					resourcesColony.stick += ant->getCountCollectRes();
				else
					resourcesColony.stick += remainSticks;
				return;
			}
			break;
		}
		case 'k':
		{
			if (heap.stone > 0)
			{
				int remainStones = heap.stone;
				if (heap.reduceStones(ant->getCountCollectRes()))
					resourcesColony.stone += ant->getCountCollectRes();
				else
					resourcesColony.stone += remainStones;
				return;
			}
			break;
		}
		default:
			break;
		}
	}

}
