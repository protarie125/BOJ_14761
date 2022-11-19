#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x, y, n;
	cin >> x >> y >> n;

	for (auto i = 1; i <= n; ++i) {
		if (0 == i % x) {
			if (0 == i % y) {
				cout << "FizzBuzz";
			}
			else {
				cout << "Fizz";
			}
		}
		else if (0 == i % y) {
			cout << "Buzz";
		}
		else {
			cout << i;
		}

		cout << '\n';
	}

	return 0;
}