#pragma once
typedef struct Student {
	char* name;
	int age;
	int avg;
}Student;
int ageCmp(const void* p1, const void* p2);
int avgCmp(const void* p1, const void* p2);
int nameCmp(const void* p1, const void* p2);
void printName(void* base, int ind);
void printAvg(void* base, int ind);
void printAge(void* base, int ind);