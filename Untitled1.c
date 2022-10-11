#include<stdio.h>
enum fruit{
//	sunday,monday,tue,wed
	mango,apple, kiwi
};

int main(){
	enum fruit f;
	f=mango+3;
	printf("%d",f);
	return 0;
}
