#include <stdio.h>

void test_combination(int n, int k, double expected);

int main() {
    // Test 1
    test_combination(5, 2, 10);

    // Test 2
    test_combination(8, 3, 56);

    // Ekstra testler
    test_combination(10, 5, 252);
    test_combination(0, 0, 1);
    test_combination(1, 0, 1);
    test_combination(1, 1, 1);
    test_combination(6, 6, 1);
    test_combination(6, 0, 1);
    test_combination(10, 2, 45);
    test_combination(10, 8, 45);
    test_combination(15, 7, 6435);
    test_combination(20, 10, 184756);
    test_combination(100, 50, 184756);
	
    return 0;
}

double comb(int n,int k){
	double memo[n+1][k+1];
	int i,j;
	for(i=0;i<=n;i++){
		for(j=(i<= n-k ? 0 : i - n + k);j <= (i < k ? i : k);j++){
			if(j==i || j==0){
				memo[i][j] = 1;
			}else{
				memo[i][j] = memo[i-1][j] + memo[i-1][j-1];
			}
		}
	}
	return memo[n][k];
}

void test_combination(int n, int k, double expected) {
    double result = comb(n, k);
    if (result == expected) {
        printf("Test Passed: C(%d, %d) = %g\n", n, k, result);
    } else {
        printf("Test Failed: C(%d, %d) expected %g but got %g\n", n, k, expected, result);
    }
}

