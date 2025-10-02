#include "logger.h"
#include <string>
#include <iostream>

// ======================= TODOs =======================

void addReading(const std::string& label, double value,
                std::string labels[], double values[],
                int& size, int capacity) {
    // TODO: throw "Full" if size == capacity, else insert and ++size
	if (size == capacity) {
		throw std::string("Full");
	}
	else {
		labels[size] = label;
		values[size] = value;
		size++;
	}
}

void updateValue(double* valuePtr, double newValue) {
    // TODO: write through pointer
	*valuePtr = newValue;
}

void printReading(const std::string& label, const double& value) {
    // TODO: pretty-print one reading
	std::cout << label << ": " << value << std::endl;
}

double average(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute average
	double total = 0;
	if (size == 0) {
		throw std::string("Empty");
	}
	for(int i = 0; i < size; i++) {
		total += values[i];
	}
    return total / size;
}

double minValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute min
    if (size == 0) {
        throw std::string("Empty");
    }
    double minValue = values[0];
    for(int i = 1; i < size; i++) {
        if(values[i] < minValue){
            minValue = values[i];
        }
    }
    return minValue;
}

double maxValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute max
    if (size == 0) {
        throw std::string("Empty");
    }
    double maxValue = values[0];
    for(int i = 1; i < size; i++){
        if(values[i] > maxValue){
            maxValue = values[i];
        }
    }
    return maxValue;
}
