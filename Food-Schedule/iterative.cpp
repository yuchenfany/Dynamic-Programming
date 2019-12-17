#include <iostream>

int H(int n) {
  if (n < 0) return 0;
  else return C[n];
}

int doWork(int n) {
  
  C[0] = F[i]*6; //sets cost to 0 if it is free night, 6 if not
  for (int i = 1; i < n; i++) {
	int prev = 0; //set to index of the row to copy
	int groceries = 20 + H(i-7); //H(i-7) returns C[i-7] if i>= 7, otherwise 0
	int noGroceries = F[i]*6 + C[i-1];

	if (noGroceries < groceries) {
		C[i] = noGroceries;
		prev = i-1; //if we do not buy groceries, copy grocery schedule of i-1
	} else {
		C[i] = groceries;
		prev = i-7;
		G[i][i-6] = 1; //should have bought groceries 6 days ago
	}
	for (int j = 0; j <= prev; j++) { //set row G[i] equal to G[prev]
		G[i][j] = G[prev][j]; 	
	}
}

for (int j = 0; j < n; j++) { //prints out days to buy groceries
	if (G[n-1][j] == 1) std::cout << "Buy groceries on day: " << j;
}
}
