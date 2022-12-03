/*The question is :-
s=1+x+(x^2\2!)+(x^3\3!)+......+(x^n\n!)*/
#include<stdio.h>
#include<math.h>
int main()
{
  int x,n,s,ctr,pw,i;
  printf("Enter value for x\n");
  scanf("%d",&x);
  printf("Enter value for n\n");
  scanf("%d",&n);
  s=1+x;
  ctr=0;
  while (ctr<=n)
    pw= pow(x,ctr);
    int fact=1;
    for ( i = 0; i <= ctr+1; i++)
      {
        fact=fact*i;
      }
    s=s+(pw/fact);
    ctr+=1;
    printf("Sum of the series is %2f",s);
  return 0;
}
