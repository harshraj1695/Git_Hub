// C code to linearly search x in arr[]. 

#include <stdio.h> 

int search(int ar[], int N, int x) 
{ 
	for (int i = 0; i < N; i++) 
		if (ar[i] == x) 
			return i; 
	return -1; 
} 

// Driver code 
int main(void) 
{ 
	int ar[] = { 2, 3, 4, 10, 40 }; 
	int x = 10; 
	int N = sizeof(ar) / sizeof(ar[0]); 

	// Function call 
	int result = search(ar, N, x); 
	(result == -1) 
		? printf("Element is not present in array in this") 
		: printf("Element is present at index %d", result); 
	return 0; 
}
