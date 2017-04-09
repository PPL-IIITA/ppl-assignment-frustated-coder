#include<bits/stdc++.h>

using namespace std;

class boy{
	public:
		char name[5];
		int intelligence,budget,attraction,min_att,status,cb_num;
		
	
};
class girl {
	public:
		char name[5];
		int attraction,dumbness,maintenance,status,cg_num;

};
void bubble_sort(boy boy_arr[],girl girl_arr[],int n)
{
	for(int i=0;i<n;i++)
	   for(int j=0;j<n-i-1;j++)
		if(girl_arr[j].maintenance > girl_arr[j+1].maintenance)
			swap(girl_arr[j],girl_arr[j+1]);
	for(int i=0;i<n;i++)
	   for(int j=0;j<n-i-1;j++)
		if(boy_arr[j].attraction > boy_arr[j+1].attraction)
			swap(boy_arr[j],boy_arr[j+1]);
}
int maxi(girl girl_arr[])
{
	int m=0;
	for(int i=0;i<7;i++)
		if(girl_arr[i].status==0 && girl_arr[i].attraction > m)
			m = girl_arr[i].attraction;
	return m;
}
int main(){
	int max=100;
	boy boy_arr[10];
	FILE *fpd=fopen("boy.txt","r");
	
	for(int i=0;i<10;i++){
		
		fscanf(fpd,"%s %d %d %d %d %d %d",&boy_arr[i].name,&boy_arr[i].intelligence,&boy_arr[i].budget,&boy_arr[i].attraction,&boy_arr[i].min_att,&boy_arr[i].status,&boy_arr[i].cb_num);
	
		//printf("%s %d\n",boy_arr[i].name,boy_arr[i].budget);		
	}
	girl girl_arr[7];
	FILE *fps=fopen("girl.txt","r");
	for(int i=0;i<7;i++){
	fscanf(fps,"%s %d %d %d %d %d",&girl_arr[i].name,&girl_arr[i].attraction,&girl_arr[i].maintenance,&girl_arr         [i].dumbness,&girl_arr[i].status,&girl_arr[i].cg_num);

	
		//printf("%s %d\n",girl_arr[i].name,girl_arr[i].attraction);
		
	}

	bubble_sort(boy_arr,girl_arr,7);
	int flag=1;
	for(int i=0;i<10;i++){
		for(int j=0;j<7;j++){
			if(flag==1)
			{
				if( boy_arr[i].status ==0 && girl_arr[j].status==0 && boy_arr[i].budget>=girl_arr[j].maintenance){
				//girl_arr[j].boy=boy_arr[i].name;
				//boy_arr[i].girl=girl_arr[j].name;
				girl_arr[j].status=1;
				boy_arr[i].status=1;
				boy_arr[i].cb_num=girl_arr[j].cg_num=max;
				max--;
				flag=0;
				}
			}			
			else
			{
				int value=maxi(girl_arr);
				if( boy_arr[i].budget>=girl_arr[j].maintenance && boy_arr[i].status ==0 && girl_arr[j].status==0 && girl_arr[j].attraction==value)
				{
					girl_arr[j].status=1;
					boy_arr[i].status=1;
					boy_arr[i].cb_num=girl_arr[j].cg_num=max;
					max--;
					flag=1;
				}
			}
					}
				}
	
		for(int i=0;i<10;i++){
			for(int j=0;j<7;j++){
		
		if(boy_arr[i].cb_num==girl_arr[j].cg_num){
			printf("%s happy couple  %s\n",boy_arr[i].name,girl_arr[j].name);
		}
	}
}	
return 0;
}


