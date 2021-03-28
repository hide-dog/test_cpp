// printfのライブラリ
#include <cstdio>

/*
本来であれば、使用される部分より後で関数を定義しなければならない
しかし、以下のように関数の引数のみを先に定義できる。

また、引数が違うが名前が同じものは複数定義する
*/
float add(int, int);
float add(float, float);
float add(int, float);
float add(float, int);

// 関数の頭にある文字は、帰り値の定義
int main() {
    
    // 改行は;
    float a = 1.1;
    int b = 2;

    float s = add(a, b);

    printf("%f", s);

    return 0;
}

float add(int x, int y) {
    float s = (float) x + y;
    return s;
}

float add(float x, float y) {
    float s = x + y;
    return s;
}

float add(int x, float y) {
    float s = x + y;
    return s;
}

float add(float x, int y) {
    float s = x + y;
    return s;
}