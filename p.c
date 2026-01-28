#include <stdio.h>
int main() {
int arr[] = {2, 4, 6, 8, 10, 12};
int n = 6;
int key = 10;
int low =  0, high = n-1, mid;
int count = 0;
while (low <= high) {
mid =  (low + high) / 2;
count++;
if (arr[mid] == key) {
printf("Element found at index %d\n", mid);
printf("Number of comparisons = %d\n", count);
return 0;
}
else if (arr[mid] < key) {

low  =  mid + 1;
}
else {
high = mid -  1;
}}
printf("Element not found\n");
printf("Number of comparisons = %d\n", count);
return 0;
}