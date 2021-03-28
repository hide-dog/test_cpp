#include <stdio.h>

/*
void は空という意味で、「返り値がない」また「引数がない」際に使用される。
python のselfに近い。

voidはポインタとして使用されることもあるらしいが気にしない。
*/
// int * x はポインタの定義。アスタリスク*がポインタを指す
// これにより値を更新できる。ただし,戻り値はない。

// ただし、参照渡しを推奨
void g(int* x) {
    *x += 1;
}

int main(void) {
    int x = 10;

    printf("%d\n", x); // 10
    g(&x);
    printf("%d\n", x); // 11

    return 0;
}