#include "RetailItemSimp.h"
RetailItemSimp::RetailItemSimp()
{
	description = "No Description";
	unitsOnHand = 0;
	price = 0.0;
}
void RetailItemSimp::setDescription(string aDescription)
{
	description = aDescription;
}
void RetailItemSimp::setUnitsOnHand(int uOH)
{
	if (uOH < 0)
		unitsOnHand = 0;
	else
		unitsOnHand = uOH;
}
void RetailItemSimp::setPrice(double aPrice)
{
	if (aPrice < 0)
		price = 0;
	else
		price = aPrice;
}
void RetailItemSimp::setAll(string aDescription, int uOH, double aPrice)
{
	setDescription(aDescription);
	setUnitsOnHand(uOH);
	setPrice(aPrice);

}
string RetailItemSimp::getDescription() const
{
	return description;
}

int RetailItemSimp::getUnitsOnHand() const
{
	return unitsOnHand;
}

double RetailItemSimp::getPrice() const
{
	return price;
}

void RetailItemSimp::displayData() const
{
	cout << setw(20) << getDescription() << setw(10) << getUnitsOnHand() << setw(10) << setprecision(2) << fixed << getPrice();
}
