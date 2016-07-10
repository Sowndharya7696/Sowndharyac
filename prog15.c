#include<stdio.h>
int main() {
int arr[30], i, j, num, temp;
printf("\nEnter no of elements : ");
scanf("%d", &num);
for (i = 0; i < num; i++) {
 scanf("%d", &arr[i]);
}
j = i - 1;   // j will Point to last Element
i = 0;       // i will be pointing to first element
while (i < j) 
{
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
i++;             
j--;          
}
printf("\nResult after reversal : ");
for (i = 0; i < num; i++) 
{
  printf("%d \t", arr[i]);
}
return (0);
}
