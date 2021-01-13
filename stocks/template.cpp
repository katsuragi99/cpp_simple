#include "proto.h"

Stock::Stock(const char* name, double val, int64_t num) {
		company_name = name;
		shares_val = val;
		shares += num;
		std::cout << company_name << " bought " << shares 
				<< " shares at " << shares_val << " dollars." << std::endl;
		total();
}
void Stock::sell(int64_t num, double val) {
		shares -= num;
		shares_val = val;
		std::cout << company_name << " sold " << shares << 
				" shares at "<< shares_val << " dollars." << std::endl;
		total();
}

void Stock::buy(int64_t num, double val) {
		shares_val = val;
		shares += num;
		std::cout << company_name << " bought " << shares 
				<< " shares at " << shares_val << " dollars." << std::endl;
		total();
}
