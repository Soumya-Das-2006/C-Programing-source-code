# include <stdio.h>
  int main()
  {
  int var1,var2,temp;
  printf("Enter two integer: \n");
  scanf("%d  %d",&var1,&var2);
  printf("Before swapping first variable =%d\n second variable= %d\n",var1,var2);
  temp=var1;
  var1=var2;
  var2=temp;
  printf("After swapping first variable=%d\n second variable=%d\n",var1,var2);
  return 0;

}