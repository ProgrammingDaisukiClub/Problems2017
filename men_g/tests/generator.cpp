#include <iostream>
using namespace std;

//// limit
const int smallminnum=1;
const int smallmaxnum=10;
const int largeminnum=50;
const int largemaxnum=100;
////

//// cases
const int numofcase=50;
string random_small_name="random_small.in";
string random_large_name="random_large.in";
////

int RandomInt(int mini,int maxx){
	return mini+(int)(rand()*(maxx-mini+1.0)/(1.0+RAND_MAX));
}

void generate_case(string name,int minnum,int maxnum){
	FILE *fp;

	if((fp=fopen(name.c_str(),"w"))==NULL){
		printf("File open error!\n");
		return ;
	}
	fprintf(fp, "%d\n", numofcase);
	for(int cases=0;cases<numofcase;cases++){
		int a,b,c;
		a=RandomInt(minnum,maxnum);
		b=RandomInt(minnum,maxnum);
		c=RandomInt(minnum,maxnum);
		fprintf(fp, "%d %d %d\n",a,b,c);
	}
	fclose(fp);
}

int main(){
	srand((unsigned int)time(NULL));
	generate_case(random_small_name,smallminnum,smallmaxnum);
	generate_case(random_large_name,largeminnum,largemaxnum);
	return 0;
}
