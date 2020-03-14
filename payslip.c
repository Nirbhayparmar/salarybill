#include<stdio.h>
#include<conio.h>
/*
  this program helps in calculate and maintaining of salary bill of government employees
  */
 void main()

 {

  int a[12][2],i,j,sum;
 printf("enter salary of 1st person in increasing order of months:\n");

  for(i=0;i<=11;i++)
  {
      scanf("%d",&a[i][0]);
      sum=0;

  }
  for(i=0;i<=11;i++)
  {
      printf("month-%d:%d\n",i+1,a[i][0]);
      sum=sum+a[i][0];
  }

  printf("total salary: %d\n",sum);
  getch();
   printf("enter salary of 2nd person in increasing order of months:\n");

  for(i=0;i<=11;i++)
  {
      scanf("%d",&a[i][1]);
      sum=0;

  }
  for(i=0;i<=11;i++)
  {
      printf("month-%d:%d\n",i+1,a[i][1]);
      sum=sum+a[i][1];
  }

  printf("total salary: %d\n",sum);
  printf("choose the person(1st or 2nd) and month(from 1 to 12) for which you want to check the salary:\n");
  scanf("%d%d",&j,&i);
  j=j-1;
  i=i-1;
  printf("%d person\nsalary is:%drupees",j+1,a[i][j]);
  getch();
 }
