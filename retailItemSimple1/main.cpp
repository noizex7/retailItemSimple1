#include "RetailItemSimp.h"

int main()
{
	RetailItemSimp ris1, ris2, ris3;
	ris1.setAll("Jacket", 12, 59.95);
	ris2.setAll("Designer Jeans", 40, 34.95);
	ris3.setAll("Shirt", 20, 24.95);
	cout << setw(20) << "Description" << setw(10) << "Units" << setw(10) << "Price\n";
	ris1.displayData();
	cout << "\n";
	ris2.displayData();
	cout << "\n";
	ris3.displayData();
	
	return 0;
}