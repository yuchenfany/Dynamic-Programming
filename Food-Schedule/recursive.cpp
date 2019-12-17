#include <iostream>

int M(int n)
{

    if (n < 0) return 0;
	  else if (F[n] == 0) return M(n-1); 
	  else {
		int buyGroceries = 20 + M(n-7);
		int noGroceries = 6 + M(n-1);
		if (buyGroceries < noGroceries) {
  		std::cout << (n-6); 
  	}
	return std::min(buyGroceries, noGroceries);
}
