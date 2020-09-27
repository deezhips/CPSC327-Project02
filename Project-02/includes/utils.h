/*
    utils.h
    Tyler Lamb
    CPSC 327

*/
#ifndef UTILS_H
#define UTILS_H

#include "../includes/constants.h"
#include <vector>

void sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses);
int handleMissingData(vector<process> &myProcesses);
int getSize(vector<process> &myProcesses);
process getNext(vector<process> &myProcesses);

#endif 