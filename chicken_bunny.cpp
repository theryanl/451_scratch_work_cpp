#include <iostream>
#include <stdio.h>

using namespace std;

/*
struct chicken_bunny_same_cage {
	int heads;
	int feet;
}
*/

int solve_chicken_bunny(int heads, int feet) {
	int if_all_bunny = heads * 4;
	int feet_dif = if_all_bunny - feet;
	int chickens = feet_dif / 2;
	return chickens;
}

int main() {
	int heads;
	int feet;
	scanf("%d %d", &heads, &feet);

	int num_chickens = solve_chicken_bunny(heads, feet);
	cout << "There are ";
	cout << num_chickens;
	cout << " chickens and ";
	cout << (heads - num_chickens);
	cout << " bunnies.\n";
}