#pragma once
#include <iostream>
#include <string>

struct Heap
{
	int leaf;
	int stick;
	int stone;
	Heap() :leaf(0), stick(0), stone(0) {};
	Heap(int l, int s, int k) : leaf(l), stick(s), stone(k) {};
	bool reduceLeafs(int count)
	{
		if (leaf > count)
		{
			leaf = leaf - count;
			return true;
		}
		else
		{
			leaf = 0;
			return false;
		}
	}
	bool reduceSticks(int count)
	{
		if (stick > count)
		{
			stick = stick - count;
			return true;
		}
		else
		{
			stick = 0;
			return false;
		}
	}
	bool reduceStones(int count)
	{
		if (stone > count)
		{
			stone = stone - count;
			return true;
		}
		else
		{
			stone = 0;
			return false;
		}
	}
	void addLeafs(int countRes)
	{
		leaf += countRes;
	}
	void addSticks(int countRes)
	{
		stick += countRes;
	}
	void addStones(int countRes)
	{
		stone += countRes;
	}
};
