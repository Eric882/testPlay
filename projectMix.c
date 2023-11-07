#include <stdio.h>

// Function to print the array
void printTheArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    
  }
  printf("\n");
}

// Function to generate all binary strings
void generateAllBinaryStrings(int n, int arr[], int i) {
  if (i == n) {
    printTheArray(arr, n);
    return;
  }

  // First assign "0" at ith position
  // and try for all other permutations
  // for remaining positions
  arr[i] = 0;
  generateAllBinaryStrings(n, arr, i + 1);

  // And then assign "1" at ith position
  // and try for all other permutations
  // for remaining positions
  arr[i] = 1;
  generateAllBinaryStrings(n, arr, i + 1);
}

int main() {
  int n;
  int arr[n];
  printf("How many do you project do you have? ");
  scanf("%d", &n);
  printf("Possible combination: \n");
  generateAllBinaryStrings(n, arr, 0);


  return 0;
}

