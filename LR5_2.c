//#include <stdio.h>
//#include <time.h>
//#include <windows.h>
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int arr[10][10], min, max;
//	int best_row = 0; 
//	int max_count_global = 0;
//	printf("Введіть мінімум діапазону: ");
//	scanf_s("%d", &min);
//	printf("Введіть максимум діапазону: ");
//	scanf_s("%d", &max);
//	srand(time(NULL));
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			arr[i][j] = rand() % (max - min + 1) + min;
//			printf("%4d", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (int i = 0; i < 10; i++) {
//		int max_count_row = 1;
//		for (int j = 0; j < 10; j++) {
//			int count = 0;
//			for (int k = 0; k < 10; k++) {
//				if (arr[i][j] == arr[i][k]) {
//					count++;
//				}
//			}
//			if (count > max_count_row) {
//				max_count_row = count;
//			}
//		}
//		if (max_count_row > max_count_global) {
//			max_count_global = max_count_row;
//			best_row = i;
//		}
//	}
//	printf("Максимум повторів: %d разів у рядку %d", max_count_global, best_row + 1);
//	return 0;
//}