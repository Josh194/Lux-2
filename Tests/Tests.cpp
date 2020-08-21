#ifdef _DEBUG
	constexpr bool release = false;
#else
	constexpr bool release = true;
#endif

#include <iostream>

int main() {
	std::cout << release << std::endl;

	return 0;
}