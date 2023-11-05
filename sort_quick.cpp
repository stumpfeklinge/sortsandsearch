#include <iostream>
using namespace std;

void quickSort(double* arr, int low, int high) {
	
	double mid, count;
	int f=low, L=high;
	mid=arr[(f+L) / 2]; //вычисление опорного элемента
	do
	{
		while (arr[f]<mid) f++;
		while (arr[L]>mid) L--;
		if (f<=L) //перестановка элементов
		{
			count=arr[f];
			arr[f]=arr[L];
			arr[L]=count;
			f++;
			L--;
		}
	}while(f<L);
	if (low<L) quickSort(arr, low, L);
	if (f<high) quickSort(arr, f, high);
}
