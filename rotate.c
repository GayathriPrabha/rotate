#include<stdio.h>
void leftRotatebyOne(int a[], int n);
void leftRotate(int a[], int d, int n);
void print(int a[], int size);
void leftRotate(int a[], int d, int n)
{
  int i;
  for (i = 0; i < d; i++)
    leftRotatebyOne(a, n);
}
void leftRotatebyOne(int a[], int n)
{
  int i, temp;
  temp = a[0];
  for (i = 0; i < n-1; i++)
     a[i] = a[i+1];
  a[i] = temp;
}
int main()
{
   int a[10];
   int i,n,k;
   printf("Enter the number of elements");
   scanf("%d",&n);
   for(i=0;i<n;i++)
        scanf("%d",&a[i]);
   printf("Enter the number of steps to rotate");
   scanf("%d",&k);
   leftRotate(a, k, n);
   getchar();
   for(i = 0; i <n; i++)
    printf("%d ", a[i]);
   return 0;
}
