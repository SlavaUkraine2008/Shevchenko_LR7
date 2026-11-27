//#include <stdio.h>
//#include <time.h>
//#include <windows.h>
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int arr[20], min, max;
//	int S = 0;
//	printf("¬вед≥ть м≥н≥мум д≥апазону:                     ");;
//	scanf_s("%d", &min);
//	printf("¬вед≥ть максимум д≥апазону: ");;
//	scanf_s("%d", &max);
//	srand(time(NULL));
//	printf("«генерований масив:\n	");;
//	for (int i = 0; i < 20; i++) {
//		arr[i] = rand() % (max - min + 1) + min;
//		if (arr[i] % 2 != 0) {
//			S += arr[i];
//		}
//		printf("%d	", arr[i]);
//	}
//	printf("\nѕерероблений масив:\n	");
//	for (int i = 0; i < 20; i++) {
//		if (arr[i] % 3 == 0) {
//			arr[i] = S;
//		}
//		printf("%d	", arr[i]);
//	}
//	return 0;
//}
