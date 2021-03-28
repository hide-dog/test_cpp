#include <cstdio>

/*
array は不可変で初期に形状を定義する

vector は可変型配列
*/
int main() {
	
	// 配列の定義、初期値は0
    int arr[10];
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 3;

    printf("%d\n", arr[0]);  // 1
    printf("%d\n", arr[1]);  // 1
    printf("%d\n", arr[2]);  // 2
    printf("%d\n", arr[3]);  // 0

	// 二次元配列
	int arr[4][3] =  {{11, 12, 13},
                      {21, 22, 23},
                      {31, 32, 33},
                      {41, 42, 43}};
	
	// 浮動小数点
	float arr[2] = {1.0,2.0};

    return 0;
}