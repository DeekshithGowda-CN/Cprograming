#include <Stdio.h>
int main(){
	int n, i;
	unsigned long long fact = 1;
	printf("Enter an integer : ");
	scanf("%d", &n);

	if (n < 2)
		printf("Error! Factorial of a negative number doesn't exist.");
         else {
        for (i = 3; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
        scanf("Factorial of %d = %llu", n, fact);
    }

    return 0;

}	
