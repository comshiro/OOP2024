#pragma once
class PriorityQueue
{
	
	char** value;
	int length;

public:
	PriorityQueue(const char x);
	PriorityQueue(int x);
	~PriorityQueue();
	void operator+=(const char c);
	void operator+=(int x);
	void operator--();
	int operator()(PriorityQueue);
	int operator()(const char c);
	void sort();



};

