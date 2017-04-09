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
	for(int i=0;i<10;i++){
		for(int j=0;j<7;j++){
			if(boy_arr[i].budget>=girl_arr[j].maintenance && boy_arr[i].min_att<=girl_arr[j].attraction && boy_arr[i].status ==0 && girl_arr[j].status==0){
				//girl_arr[j].boy=boy_arr[i].name;
				//boy_arr[i].girl=girl_arr[j].name;
				girl_arr[j].status=1;
				boy_arr[i].status=1;
				boy_arr[i].cb_num=girl_arr[j].cg_num=max;
				max--;
			}
		}
	}
	int t;
	cout<<"Enter the value of t\n";
	cin >>t;
	int arr1[10]={0},arr2[10]={0},l=0,happiness[7],quan=10;
	for(int i=0;i<10;i++){
		for(int j=0;j<7;j++){
		
		if(boy_arr[i].cb_num==girl_arr[j].cg_num){
						
	//		printf("%s Couple with %s\n",boy_arr[i].name,girl_arr[j].name);
			happiness[l]=quan;				
			arr1[l]=i;
			arr2[l]=j;
			l++;
			quan=quan--;
			break;
		}
	}
}
	for(int i=0;i<t;i++)
	{
		if(happiness[i]<t &&arr1[i%7]!=0 && arr2[i%7]!=0)
		{
			cout << boy_arr[arr1[i%7]].name<<" Break up with "<<girl_arr[arr2[i%7]].name<<"\n";
			arr1[i]=0;
			for(int u=0;u<7 && u!=i;u++)
				if(arr1[u]==0){
					cout<< boy_arr[arr1[u]].name << " Couples with "<< girl_arr[arr2[i]].name<<"\n";	
			break;
}
		}
	}					
return 0;
}


