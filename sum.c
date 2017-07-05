#include "sum.h"

int i;
int sum(int n){
	int res=0;
	for(i=1; i<=100; i++){
		res += i;
	}
	return res;

}
