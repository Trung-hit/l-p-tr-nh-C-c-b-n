#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap thang va nam\n");scanf("%d%d",&a,&b);	
	if (a!=2){
		if (a<8 && a>0){
			if (a%2==1)
			c=1;
			else 
			c=2;			
		}
		if (a>=8&&a<=12){
		if (a%2==0)
			c=1;
		else
			c=2	;	
		}
	}
	else {
		if (a==2){
			if (b%4==0 ||b%400==0)
				printf("thang %d nam %d co 29 ngay\n",a,b);
			else
				printf("thang %d nam %d co 28 ngay\n",a,b);
		}
	}
	switch (c){
		case 1:printf("thang %d nam %d co 31 ngay\n",a,b);break;
		case 2:printf("thang %d nam %d co 30 ngay\n",a,b);break;
	}
}
