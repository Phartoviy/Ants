#include "AntColony.h"

std::shared_ptr<Ant> AntColony::getWorker(int index)
{
	if (index < workers.size())
		return workers[index];
	else
		return nullptr;
}

void AntColony::collectResourcesForColony(std::shared_ptr<Ant> ant, Heap &heap)
{	
	auto antWorker = std::static_pointer_cast<WorkerAnt>(ant);
	std::string resourcesAnt = antWorker->getTypeRes();
	for (int i = 0; i != resourcesAnt.size(); i++)
	{
		switch (resourcesAnt[i])
		{
		case 'l':
		{	if (heap.leaf > 0) 
			{
				int remainLeafs = heap.leaf;
				if (heap.reduceLeafs(antWorker->getCountCollectRes()))
					resourcesColony.leaf += antWorker->getCountCollectRes();
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
				if (heap.reduceSticks(antWorker->getCountCollectRes()))
					resourcesColony.stick += antWorker->getCountCollectRes();
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
				if (heap.reduceStones(antWorker->getCountCollectRes()))
					resourcesColony.stone += antWorker->getCountCollectRes();
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

void AntColony::attackOpponentColony(std::shared_ptr<Ant> attacker, std::shared_ptr<Ant> oppoAnt)
{
	



}
