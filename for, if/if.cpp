#include <iostream>
using namespace std;

int main() {

	int num = 1;

  // 基本形
	if (num == 0) {
		cout << "0";
	}
	else if (num == 1) {
		cout << "1"; // 1が表示される
	}
	else {
		cout << "01以外";
	}
  


  int a = 1;
  int b = 1;
  
  // 入れ子
  if (a == "1") {
		if (b == "1") {
			cout << "1"; // 1が表示される
		}
	}

  // 論理積
  if ((a == 1) && (b == 1)) {
		cout << "1"; // 1が表示される
	}

  // 論理和
  if ((a == 1) || (b == 1)) {
		cout << "1"; // 1が表示される
	}

  // 否定
  if (a != 1) {
		cout << "1"; // 1が表示される
	}

	return 0;
}