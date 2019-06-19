#include <stdio.h>
int main(void){
int select;
printf("Bir reqem yazin> "
"\n1-WEB attack"
"\n2-Wirelless Attack"
"\n3-Bluetooth Attack\n");
scanf("%d",&select);
if(select==1)
printf("%d >Web attack\n",select);
else if(select==2)
printf("%d >Wirelless Attack\n",select);
else if(select==3)
printf("%d > Bluetooth Attack\n",select);
else
printf("Bilinmeyen bir emr>\n");
return 0;
}
