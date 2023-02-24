/*1  4
  2  3
  3  2
  4  1 */
#include <stdio.h>

int main() {
    int i,n;
    printf(" to print numbers upto:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d  %d\n", i,n-i+1);
}
    return 0;
}

