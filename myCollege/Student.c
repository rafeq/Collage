#include"Student.h"

int ageCmp(const void* p1, const void* p2) {
	return ((Student*)p1)->age > ((Student*)p2)->age;
}

int avgCmp(const void* p1, const void* p2) {
	return ((Student*)p1)->avg < ((Student*)p2)->avg;
}

int nameCmp(const void* s1, const void* s2) {
    return strcmp(((Student*)s1)->name, ((Student*)s2)->name);
}
void printName(void* base, int ind)
{
    Student* A = (Student*)base;
    for (int i = 0; i < ind; i++)
        printf("%s ", A[i].name);
    printf("\n");
}

void printAvg(void* base, int ind)
{
    Student* A = (Student*)base;
    for (int i = 0; i < ind; i++)
        printf("%d ", A[i].avg);
    printf("\n");
}
void printAge(void* base,int ind)
{
    Student* A = (Student*)base;
    for (int i = 0; i < ind; i++)
        printf("%d ", A[i].age);
    printf("\n");
}