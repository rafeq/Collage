#pragma once
#include<stdio.h>
#include<stdlib.h>
void swap(char* p1, char* p2, size_t size);
void qsort(void* base, size_t nitems, size_t size, int(*cmp)(void*, void*));
//void mergeSort(void* base, size_t l, size_t r, size_t size, int(*compar)(const void*, const void*));
//void merge(int arr[], int l, int m, int r, int(*compar)(const void*, const void*));