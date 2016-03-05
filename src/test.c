#include <stdio.h>

/* Helper function to sum an array of doubles */
/* We need this to make parallelization easier .. sometimes we don't need to keep a running sum which kills concurrency */
double sum_array(double *a, int len_a) {
  double sum = 0.0;
  for(int i = 0; i < len_a; i++)
    sum = sum + a[i];

  return (sum);
}


/* Really shitty test */
int main() {
  double arr[3] = {1.0, 2.0, 3.0};
  double sum = 0.0;
  sum = sum_array(arr, 3);
  if(sum == 6.0) printf("Works!\n");
  printf("%f", sum);
}
