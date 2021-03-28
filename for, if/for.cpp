// 出力のライブラリ, cout
#include <iostream>

int main() {
  
  /*
  for (int i = 0; i < 3; i++)
  一つ目は始まりの値
  二つ目は終了条件
  三つ目は増加数( i++ = (i = i+1) )

  */
	for (int i = 0; i < 3; i++) {
		std::cout <<  i << "\n"; // 0 1 2が出力される
    /* 
    std::cout は出力を意味する
    そこに "i\n" を代入している

    こんなイメージ（iはint型でも問題なさそう）
    cout = "i" + "\n"

    std:: はstdというスペースのcoutをもってこいという定義
    pythonに似てる。 main.main()的な
    */
	}
	return 0;
}