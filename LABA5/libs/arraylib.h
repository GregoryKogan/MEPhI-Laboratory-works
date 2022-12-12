#ifndef ARRAYS_H
#define ARRAYS_H


#include "carlib.h"
typedef struct Array {
    int length;
    car* data;
} array;
array initArray();
void arrayMemoryFree(array* arr);
void printArray(array* arr);
void insert(array* arr, int index, car value);
void removeByIndex(array* arr, int index);
void append(array* arr, car value);


#endif