#include <stdio.h>
main(){
int x=0,y=0,z=0,tmp=0;
    printf("請輸入三個數 \n");
    scanf("%d%d%d",&x,&y,&z);
	if (x>y){ //交換x,y的值
	    tmp=x;
	    x=y;
	    y=tmp;
	}  
	if (x>z){ //交換x,z的值
	    tmp=x;
	    x=z;
	    z=tmp;
	} 
	if(y>z)	{//交換z,y的值
	    tmp=y;
		y=z;
		z=tmp;} 

	printf("小到大排序為: %d %d %d  \n",x,y,z);
}