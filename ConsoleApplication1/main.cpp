int main()
{
	int x = 100000, y = 20000;
	{
		double** array = new double* [x];
		for (int i = 0; i < x; i++) {
			array[i] = new double[y];
			for (int j = 0; j < y; j++) {
				array[i][j] = j + i + 1;
			}
		}
	}
	return 0;
}

