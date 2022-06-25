#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef enum {
	prof,
	lecture,
	senior
}AcademicRank;

typedef struct flags {
	char isMinian : 1;
	char isSegel : 1;
}flags;

typedef struct Prof{
	char*name;
	int age;
	int id;
	AcademicRank rank;
	struct flags flag;

}Prof;

typedef enum{
	NO,
	YES
} sw;

void printRank();
int proAgeCmp(const void* p1, const void* p2);
int proIdCmp(const void* p1, const void* p2);
int proRankCmp(const void* p1, const void* p2);
void printAgeProf(void* base, int ind);
void printIdProf(void* base,int ind);
void printRankProf(void* base, int ind);