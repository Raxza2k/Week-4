//  CS 261 Midterm Review 07/15/19
// This will be a review of material from week one to three.


//First example /////////////////////////////////////////////////
int divide_by_2(int* p){
  *p = *p / 2;
  return *p;
}
int main() {
  int i, n = 8, x = 8, y = 8, z = 8;
  int* a = malloc(n * sizeof(int));
  int* p1 = &x;
  int* p2 = a;

  for(i = 0; i < n; i++){
    p2[i] = z;
  }

  *a = divide_by_2(p1);
  y = divide_by_2(&x);
}
//What we're looking at her is pointer and adress handling.
//////////////////////////////////////////////////////////////////////////////
//What is the result of the following code?

int n = 16;
int* n_ptr = &n'
n += 16;
printf("%d", *n_ptr);

//Answer: Prints 32;
//////////////////////////////////////////////////////////////////////////////
