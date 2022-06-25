#include"Sort.h"
#include"Student.h"
void merge(void* base, size_t left, size_t mid, size_t right, size_t size,
	int (*compar)(const void*, const void*)) {

	int i, j, idxBase;
	size_t sizeL = mid - left + 1;
	size_t sizeR = right - mid;
	void* leftTMP = (void*)malloc(sizeL * size + 1);
	void* rightTMP = (void*)malloc(sizeR * size + 1);
	for (i = 0; i < sizeL; i++)
		for (int s = 0; s < size; s++)
			*((char*)leftTMP + i * size + s) = *((char*)base + (left + i) * size + s);
	for (j = 0; j < sizeR; j++)
		for (int s = 0; s < size; s++)
			*((char*)rightTMP + j * size + s) = *((char*)base + (mid + 1 + j) * size + s);
	i = 0;
	j = 0;
	idxBase = left;
	while (i < sizeL && j < sizeR) {
		char*pi = ((char*)leftTMP + i * size);
		char*pj = ((char*)rightTMP + j * size);
		if (compar(pi,pj ) != 1) {
			for (int s = 0; s < size; s++)
				*((char*)base + idxBase * size + s) = *((char*)leftTMP + i * size + s);
			i++;
		}
		else {
			for (int s = 0; s < size; s++)
				*((char*)base + idxBase * size + s) = *((char*)rightTMP + j * size + s);
			j++;
		}
		idxBase++;
	}
	while (i < sizeL) {
		for (int s = 0; s < size; s++)
			*((char*)base + idxBase * size + s) = *((char*)leftTMP + i * size + s);
		i++;
		idxBase++;
	}
	while (j < sizeR) {
		for (int s = 0; s < size; s++)
			*((char*)base + idxBase * size + s) = *((char*)rightTMP + j * size + s);
		j++;
		idxBase++;
	}
	free(leftTMP);
	free(rightTMP);
}

void mergeSort(void* base, size_t left, size_t right, size_t size,
	int (*compar)(const void*, const void*)) {
	if (left < right)
	{
		size_t mid = left + (right - left) / 2;
		mergeSort(base, left, mid, size, compar);
		mergeSort(base, (mid + 1), right, size, compar);
		merge(base, left, mid, right, size, compar);
	}
}