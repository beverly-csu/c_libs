int involution(int number, int degree) {
	int result = number;
	if (degree == 0)
		return 1;
	else {
		for (int i = 0; i < degree - 1; i++)
			result *= number;
		return result;
	}
}
