
#include<stdio.h>
#include<math.h>

int main()
{
 int p,q,n,phi,d,e,i,j,CT,PT;
 long double T;
 printf("\n Enter the two prime no : ");
 scanf("%d%d",&p,&q);
 n=p*q;
 phi=(p-1)*(q-1);
 printf("\nChoose e such that it relatively prime to %d : ",phi);
 scanf("%d",&e);
 for(d=1;d<phi;d++)
 {
  if(((d*e)%phi)==1)
  break;
 }
 printf("\nThe private key is:{ %d,%d }",d,n);
 printf("\nThe public key is :{ %d,%d }",e,n);
 printf("\n Enter the Plain Text Character (PT) : ");
 scanf("%d",&PT);
 CT=1;
 for(i=0;i<e;i++)
 CT=CT*PT%n;

 printf("\n After Encryption Cipher Text (CT) : %d",CT);

 PT=1;
 for(i=0;i<d;i++)
 PT=PT*CT%n;

 printf("\n After Decryption Plain Text (PT) : %d",PT);
 return 0;
}
