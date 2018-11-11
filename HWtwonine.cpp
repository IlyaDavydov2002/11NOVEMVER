void maxprice() {
	unsigned int a;
	a = Goods[0].price;
	int b = 0;
	unsigned int c;
	for (int i = 1; i < size; i++) {
		if (a < Goods[i].price) {
			a = Goods[i].price;
			b = i;
		}
	}