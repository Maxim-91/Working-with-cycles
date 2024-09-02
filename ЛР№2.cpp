#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
 int i,j;
 cout<<"Chisla bluznyata na promizku vid 1 do 15: \n";
 for (i=1;i<=15;i++)
 {
  j=i+2;
  if (!fmod(i,2)==0) cout<<i<<j;
 }
 getch();
}
//------------------------------------------------------------------------------
int AIV(int a,b)
 {
  c=0;
  for (a=1;a<b;a++)
  if (fmod(b,a)==0) c+=a;
  return(c);
 }
