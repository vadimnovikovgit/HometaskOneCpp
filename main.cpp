#include <iostream>



int main() {
	float health{};
	std::cout << "Enter health count\n";
	while (std::cin >> health) {		
		if (health > 0) {
			break;
		}
		std::cout << "NO NO NO\n";
		std::cout << "Enter health count\n";
	}
	

	while (health > 0) {
		int distance{};
		int impact{};
		std::cout << "Enter distance\n";
		std::cin >> distance;
		if (distance > 100) {
			std::cout << "Distance is too far, ignoring\n";
			continue;
		}
		std::cout << "Enter impact\n";
		std::cin >> impact;
		std::cout << "Health was: " << health << std::endl;

		if (impact > 0) {
			std::cout << "Healing\n";
		}
		else {
			std::cout << "Getting damage\n";
		}

		health += impact * (1 - distance / 100.f);
		if (health > 0 && health < 1) {
			health = 1;
		}
		if (health > 0) {
			std::cout << "Health is: " << health << std::endl;
		}
	}
	std::cout << "Game over\n";
	return 0;
}