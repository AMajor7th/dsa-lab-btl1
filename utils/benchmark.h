#pragma once

#include <iostream>
#include <chrono>
#include <iomanip>
#include <vector>
#include <string>
#include "create_input.h"
#include "benchmark.h"

void benchmarkSort(const std::string& sortName,
    void (*sortFunc)(std::vector<int>&),
    const std::vector<int>& elementNumber
);