using namespace std;
#include <iostream>

int main() 
{
	float billTotal = 100;
	const float TAX_PERCENT = 0.0675;
	const float SUGGESTED_TIP_PERCENT = 0.2;

	float totalCostWithTax = (billTotal * TAX_PERCENT);
	float suggestedTipAmount = (billTotal * SUGGESTED_TIP_PERCENT);


	cout << "Meal Cost: $" << billTotal << endl;
	cout << "Taxable Percent: " << 100 * TAX_PERCENT << "%" << endl;
	cout << "Tax: $" << totalCostWithTax << endl;
	cout << "Total with suggested tip: $" << billTotal + suggestedTipAmount << endl;
	
	return 0;

}