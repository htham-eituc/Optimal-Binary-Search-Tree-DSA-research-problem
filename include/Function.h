#pragma once
#include <AllLibrary.h>
#include <algorithm>

void Input(std::vector<int> &nums, std::vector<int> &freq);
<<<<<<< Updated upstream
bool AlgoMenu(std::vector<int> &nums, std::vector<int> &freq);
void GenTest(std::vector<int> &nums, std::vector<int> &freq);
int RandInt(int left, int right);
=======
void GenTest(std::vector<int> &nums, std::vector<int> &freq, int n);
int RandInt(int left, int right);
int SearchNode(Node * root, int key);
void TestMode(std::vector<int> &nums, std::vector<int> &freq);
long long TotalCost(Node * root, int level);
>>>>>>> Stashed changes
