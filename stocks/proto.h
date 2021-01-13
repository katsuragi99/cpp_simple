#ifndef HEADER_H
#define HEADER_H

#include <iostream>

#endif

#ifndef CLASS_H
#define CLASS_H

class Stock {
		private:
				const char* company_name;
				double shares_val, total_val;
				int64_t shares = 0;
				void total() {
						total_val = shares * shares_val;
				}
		public:
				Stock() {
						shares_val = total_val = shares = 0;
				}
				Stock(const char* name, double val, int64_t num);
				~Stock() {}
				void buy(int64_t num, double val);
				void sell(int64_t num, double val);
				void assets() { std::cout << "$" << total_val << std::endl; }
};

#endif
