#include<stdio.h>
void dtob(int n);
int main(){
    int n;
printf("Enter a number\n");
scanf("%d",&n);
dtob(n);
return 0;
}
void dtob(int n){
if(n==1){
    printf("1");
}
else{
dtob(n/2);
printf("%d",n%2);
}

}