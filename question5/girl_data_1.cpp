#include<bits/stdc++.h>
using namespace std;
int  main(){
	FILE *fp= fopen("girl1.txt","w");
	char name[5];
	for(int i=0;i<7;i++)
	{
		name[0]='G';
	for(int i=1;i<5;i++)
		name[i]=rand()%26 + 97; // generate a random name of 5 letters from A-Z
	name[5]='\0';
	int attraction = rand () % 10 + 1;
	int maintenance = rand() % 1000 +1;
	int dumbness = rand()%10 +1;
	int status = 0;	
	int cg_num=1;
	//int category= rand()%3;
	fprintf(fp,"%s %d %d %d %d %d\n",name,attraction,maintenance,dumbness,status,cg_num);
	}	
	return 0;
}
