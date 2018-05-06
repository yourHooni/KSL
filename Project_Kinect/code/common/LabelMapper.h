#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

#include "defines.hpp"

#define LABEL LabelMapper::getInstance()->label

// �̱��� ����
//
// LABEL(arg) �� string, integer�� ��ȣ ��ȯ
class LabelMapper
{
private :
	const string FILE_PATH = string(PATH_DATA_FOLDER) + string(FILE_LABEL);

	static LabelMapper instance;

	map<int, string> itosLabel;
	map<string, int> stoiLabel;

public:
	static LabelMapper* getInstance();
	void initialize();

	string label(int i);
	int label(string s);

private:
	LabelMapper(); // load ȣ��

	void load();
	void addMap(int i, string s);
	string lswap(int i);
	int lswap(string s);
};