#include <iostream>
using namespace std;
int main() {
   int search, i, j=16;
   int arr[] = { 100, 12,35,69,99, 74, 165,54};
   search=69;
   for (i = 0; i < j; i++) {
      if (arr[i] == search) {
         printf("%d is present at location %d.\n", search, i+1);
         break;
      }
   }
   if (i == j)
      printf("%d is absent in array.\n", search);
   return 0;
}
