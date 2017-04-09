#include<bits/stdc++.h>
using namespace std;
int main(){
	FILE *fp=fopen("boy1.txt","w");
	char name[5];
	
	for(int i=0;i<10;i++){
		name[0]='B';
		for(int i=1;i<5;i++)
			name[i]=rand()%26 + 97; 
		name[5]='\0';
		int intelligence = rand()%10 +1;
		int budget = rand() % 1000 +1;
		int attraction = rand() % 10 + 1;
		int min_att= rand() % 10 +1;
		int status = 0;	
		int cb_num = 0;
		//int category= rand()%3;
		fprintf(fp,"%s %d %d %d %d %d %d \n",name,intelligence,budget,attraction,min_att,status,cb_num);
	}
	//char girl="";
	//int cb_num=0;
	return 0;
}
