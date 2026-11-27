#include <stdio.h>
#include <time.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int arr[10][10], min, max;
	double avg;
	int count = 0;
	int S = 0;
	printf("¬вед≥ть м≥н≥мум д≥апазону: ");
	scanf_s("%d", &min);
	printf("¬вед≥ть максимум д≥апазону: ");
	scanf_s("%d", &max);
	srand(time(NULL));
	printf("\nѕочаткова матриц€:\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = rand() % (max - min + 1) + min;
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
    printf("\n–едагована матриц€:\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (((j > 4) && (i <= 9 - j)) || ((j > 4) && (i >= j))) {
				S += arr[i][j];
				count++;
				printf("%4d", arr[i][j]);
			}
			else{
				printf("    ");
			}
		}
		printf("\n");
	}
	if (count > 0) {
		avg = (double)S / count;
	}
	else {
		avg = 0.0;
	}
	printf("\n ≥льк≥сть елемент≥в: %d/100, середнЇ значенн€ %f", count, avg);
	return 0;
}
