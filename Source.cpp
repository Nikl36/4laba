#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int* taski2_2choicesort(int** arr, int N, int M);
int taski2_3(int** arr, int N, int M);
int PrintArr(int n, int m, int** arr) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", arr[i][j] );
		}
		printf("\n");
	}
	return 0;
}
void PrintArry(int n, float* arr) {
	for (int i = 0; i < n; i++) {
		printf("%0.3f ", arr[i]);
	}
}
void PrintArro(int n, int* arr) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}
int proverka(int size, int num, int* arr) {
	int flag = 0;
	for (int j = 0; j < size; j++) {
		if (arr[j] == num) {
			flag = 1;
			break;
		}
	}
	if (flag) {
		return 1;
	} 
	return 0;
}

void buble_sort(char* arr[], int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) 
			if (strcmp(arr[j], arr[j + 1]) > 0) {  
				char* temp = arr[j];               
				arr[j] = arr[j + 1];               
				arr[j + 1] = temp;              
			}
		}
	}
}
}

int task1() {
	int arr[3][3][3] = { {{1,1,1},{1,1,1},{1,1,1}},
	{{2,2,2},{2,2,2},{2,2,2} },
	{{3,3,3},{3,3,3},{3,3,3} }


	};
	int arr2[3][3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				arr2[i][j][k] = i + 1;
			}
		}
	}

	int s = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				s += arr2[i][j][k];
			}
		}
	}
	return s;
}
int taski2_1() {
	int N; int M;
	scanf("%d", &N);
	scanf("%d", &M);
	int** arr = (int**)calloc(N, sizeof(int*));
	for (int i = 0; i < N; i++) {
		arr[i] = (int*)calloc(M, sizeof(int));
		for (int j = 0; j < M; j++) {
			arr[i][j] = rand();
		}


	}
	int s = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
				s += arr[i][j];
		}
	}
	printf("%d", s);
	printf("\n");
	PrintArr(N, M, arr);
	taski2_2choicesort(arr, N, M);
	printf("\n");
	PrintArr(N, M, arr);
	printf("\n");
	taski2_3(arr, N, M);
	for (int i = 0; i < N; i++) {
		free(arr[i]);
	}
	free(arr);

	return 0;
}
int* taski2_2choicesort(int** arr, int N, int M) {

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int p;
			int* ma = &arr[i][j];
			for (int k = j; k < M; k++) {
				if (arr[i][k] > *ma) {
					ma = &arr[i][k];

				}

			}
			if (ma != &arr[i][j]) {
				p = arr[i][j];
				arr[i][j] = *ma;
				*ma = p;
			}

		}

	}
	return 0;



}
int  taski2_3(int** arr, int N, int M){
	float* arry = (float*)calloc(N, sizeof(float));
	for (int i = 0; i < N; i++) {
		float s = 0;
		for (int j = 0; j < M; j++) {
			s += arr[i][j];

		}
		float d = s / M;
		arry[i] = d;

	}
	PrintArry(N, arry);
	 
	free(arry);


	return 0;


}
void task_3() {
	int N;
	int b;
	printf("running 1 or 2 task");
	scanf("%d", &b);
	printf("count");
	scanf("%d", &N);
	int* arr = (int*)calloc(N, sizeof(int));
	int size = 0;
	for ( int i = 0; i < N; i++) {
		int num;
		printf("value");
		scanf("%d", &num);
		if (b == 2) {
			if (proverka(size, num, arr) == 1) {
				PrintArro(size, arr);
				printf("\n");
				continue;
			}
		}
			
		int left = 0;
		int right = size - 1;
		int pos = size;
		while (left <= right){
			int mid = left + (right - left) / 2;
			if (num < arr[mid]) {
				right = mid - 1;
				pos = mid;
			}
			else {
				left = mid + 1;
			}
		}
		for (int j = size; j > pos; j--) {
			arr[j] = arr[j - 1];
		}
		arr[pos] = num;
		size++;
		PrintArro(size, arr);
		printf("\n");
	}
	free(arr);
}

void taski4() {
	char arrok[5][80];
	printf("%d", 6)
	char* arr[5];
	int size = 5;
	int real_size=0;
	char b;
	printf("%d",5)
	for (int i = 0; i < 5; i++) {
		scanf("%s", arrok[i]);
		if (strcmp(arrok[i], "*") == 0) {
			real_size = i;
			break;
		}
		arr[i] = arrok[i];
		real_size ++;
	}
	buble_sort(arr, real_size);
	for (int i = 0; i < real_size; ++i) {
		printf("%s\n", arr[i]);
	}
	
	
}







int main() {
	srand(time(NULL));
	//printf("%d", task1());//
	//int p = taski2_1();//
	//task_3();//
	//taski4();//
	int b = 0;
	printf("%d",b)




	return 0;

