#pragma once
#include <string>
#include <ctime>
#include <stdio.h>
#include "RStarTree.h"
#include <map>
#include <fstream>
#include <sstream>

#define DIM_OF_TREE 20
#define HALF_LENGTH_OF_EDGE 60000

using namespace std;
typedef RStarTree<int, DIM_OF_TREE, 32, 64> RTree;
typedef RTree::BoundingBox BoundingBox;

class RTreeWrapper
{
public:
	RTree tree;
	map<string, vector<int>> nameToVector;
	map<vector<int>, string> vectorToName;
	void fromTxtBuildRStarTree(std::string pathOfFile);
	void fromTxtQuery_Name(std::string pathOfFile);
	void fromTxtQuery_Vec(std::string pathOfFile);
	BoundingBox fromVectorToBoundBox(vector<int> vec, bool isBox = false);
	vector<int> fromBoundBoxToVector(BoundingBox bound);
	vector<RTree::BoundedItem> searchByBB(BoundingBox bound);
	RTreeWrapper();
	~RTreeWrapper();
};

void RTreeWrapper::fromTxtBuildRStarTree(std::string pathOfFile)
{
	ifstream readData;
	stringstream number;
	string temp, numTemp;
	vector<int> vec;
	int k;
	readData.open(pathOfFile);

	while (!readData.eof())
	{
		getline(readData, temp);
		getline(readData, numTemp);
		
		number.str(numTemp);
		for (int i = 0; i < DIM_OF_TREE; i++)
		{
			getline(number, numTemp, ' ');
			vec.push_back(atoi(numTemp.c_str()));
		}
		number.clear();
		nameToVector[temp] = vec;
		vectorToName[vec] = temp;
		BoundingBox bb = fromVectorToBoundBox(vec);
		tree.Insert(1, bb);
		vec.clear();
	}
}

BoundingBox RTreeWrapper::fromVectorToBoundBox(vector<int> vec, bool isBox)
{
	BoundingBox bb;
	for (int i = 0; i < DIM_OF_TREE; i++)
	{
		bb.edges[i].first = bb.edges[i].second = vec[i];
		if (isBox)
		{
			bb.edges[i].first -= HALF_LENGTH_OF_EDGE;
			bb.edges[i].second += HALF_LENGTH_OF_EDGE;

		}
	}

	return bb;
}

vector<int> RTreeWrapper::fromBoundBoxToVector(BoundingBox bound)
{
	vector<int> vec;
	for (int i = 0; i < DIM_OF_TREE; i++)
	{
		vec.push_back(bound.edges[i].first);
	}

	return vec;
}

vector<RTree::BoundedItem> RTreeWrapper::searchByBB(BoundingBox bound)
{
	std::vector<RTree::BoundedItem> items;
	RTree::BoundedItem box;
	box.bound = bound;
	items = tree.searchByArea(box);
	std::sort(items.begin(), items.end(), CmpCenter<RTree::BoundedItem>(bound));
	return items;
}

void RTreeWrapper::fromTxtQuery_Name(std::string pathOfFile)
{
	ifstream readData;
	ofstream writeData;

	string temp;

	vector<int> vec;
	vector<RTree::BoundedItem> answer;

	readData.open(pathOfFile);
	writeData.open("answer.txt");


	while (!readData.eof())
	{
		getline(readData, temp);
		vec = nameToVector[temp];
		BoundingBox bb = fromVectorToBoundBox(vec, true);
		answer = searchByBB(bb);
		vec.clear();
		for (int i = 0; i < answer.size(); i++)
		{
			writeData << vectorToName[fromBoundBoxToVector(answer[i].bound)] << endl;
		}
		writeData << "---------------------------------" << endl;
	}
}

void RTreeWrapper::fromTxtQuery_Vec(std::string pathOfFile)
{
	ifstream readData;
	ofstream writeData;
	stringstream number;
	string temp;
	vector<int> vec;
	vector<RTree::BoundedItem> answer;

	readData.open(pathOfFile);
	writeData.open("answer.txt");

	while (!readData.eof())
	{
		getline(readData, temp);
		number.str(temp);
		for (int i = 0; i < DIM_OF_TREE; i++)
		{
			getline(number, temp, ' ');
			vec.push_back(atoi(temp.c_str()));
		}
		number.clear();

		BoundingBox bb = fromVectorToBoundBox(vec, true);
		answer = searchByBB(bb);
		vec.clear();

		for (int i = 0; i < answer.size(); i++)
		{
			writeData << vectorToName[fromBoundBoxToVector(answer[i].bound)] << endl;
		}
		writeData << "---------------------------------" << endl;
	}
}

RTreeWrapper::RTreeWrapper()
{
}

RTreeWrapper::~RTreeWrapper()
{
}