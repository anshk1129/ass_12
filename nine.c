#include<stdio.h>
void dtoo(int n);
int main(){
    int n;
printf("Enter a number\n");
scanf("%d",&n);
dtoo(n);
return 0;
}
void dtoo(int n){
if(n<8){
    printf("%d",n);
}
else{
dtoo(n/8);
printf("%d",n%8);
}

}