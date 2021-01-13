#include "proto.h"

int main(void) {
		Stock stock1 = { "IBM", 67.89, 5600 };
		stock1.buy(3400, 67.76);
		stock1.assets();
		return 0;
}
