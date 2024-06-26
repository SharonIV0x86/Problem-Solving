#include <iostream>
#include <vector>

int main()
{
	int T;
	std::cin >> T;
	while (T--)
	{
		std::string a, b;
		std::cin >> a >> b;
		char ch = a[0];
		a[0] = b[0];
		b[0] = ch;
		std::cout << a << " " << b << std::endl;
	}

	return 0;
}
