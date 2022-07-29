#include<stdio.h>
#include<math.h>
int rev(int n,int len);
int main(){
int n,n1,count=0;
printf("Enter a number\n");
scanf("%d",&n);
n1=n;
while(n1!=0){
   n1=n1/10;
   count++;
}
printf("The reverse is %d",rev(n,count));
return 0;
}
int rev(int n,int len){
    if(n>0){
     int cal=rev(n/10,--len);
     int r=(n%10);
     r=r*(pow(10,len))+cal;
     return r;
    }
    else
      return 0;
}