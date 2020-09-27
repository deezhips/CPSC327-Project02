/*
    fileio.h
    Tyler Lamb
    CPSC 327

*/
#ifndef FILEIO_H
#define FILEIO_H

#include "../includes/constants.h"

#include <vector>
#include <string>
#include <iostream>

int loadData(const std::string filename, std::vector<process> &myProcesses);
int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif 