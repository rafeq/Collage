#include"Prof.h"

void printRank() {
	printf("ranks : \n\n");
	printf("* prof \n");
	printf("* lecture \n");
	printf("* senior\n\n");

}

int proAgeCmp(const void* p1, const void* p2) {
	return ((Prof*)p1)->age > ((Prof*)p2)->age;
}

int proIdCmp(const void* p1, const void* p2) {
	return ((Prof*)p1)->id > ((Prof*)p2)->id;
}

int proRankCmp(const void* p1, const void* p2) {
	return ((Prof*)p1)->rank > ((Prof*)p2)->rank;
}

void printAgeProf(void* base, int ind)
{
	Prof* A = (Prof*)base;
	for (int i = 0; i < ind; i++)
		printf("%d ", A[i].age);
	printf("\n");
}
void printIdProf(void* base, int ind)
{
	Prof* A = (Prof*)base;
	for (int i = 0; i < ind; i++)
		printf("%d ", A[i].id);
	printf("\n");
}
void printRankProf(void* base, int ind)
{
	Prof* A = (Prof*)base;
	for (int i = 0; i < ind; i++) {
		if (A[i].rank == 1)
			printf("%s ", "prof");
		if (A[i].rank == 2)
			printf("%s ", "lecture");
		if (A[i].rank == 3)
			printf("%s ", "senior");
	}

	printf("\n");
}