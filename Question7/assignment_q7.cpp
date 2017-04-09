#include<bits/stdc++.h>

using namespace std;
class couple{
	public:
		char b_name[5],g_name[5];
};

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
	int method;
	cout << "Enter the method you want to use\n";
	cin >> method;
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

	couple data[7];
	for(int i=0;i<7;i++){
		for(int j=0;j<5;j++){
			data[i].b_name[j]='x';
			data[i].g_name[j]='x';
	}
	int z=0;
	if(method%2==0){
	int arr1[10],arr2[10],l=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<7;j++){
		
		int arr1[10]={0},arr2[10]={0},l=0;
		for(int i=0;i<10;i++){
			for(int j=0;j<7;j++){
				if(boy_arr[i].cb_num==girl_arr[j].cg_num)
				{
				arr1[l]=i;
				arr2[l]=j;
				l++;
				break;
				}
			}
		}	
			
		cout <<"Enter the number to search for boy having girlfriend or not\n";
		int num1;
		cin >> num1;
		num1=num1%7;					
		if(arr1[num1]!=0)
			cout<<boy_arr[num1].name<<" couple with "<<girl_arr[num1].name<<"\n";
		else
			cout<<"Boy will die Single :P\n"; 

}
	else
	{
		int arr1[10]={0},arr2[10]={0},l=0;
		for(int i=0;i<10;i++){
			for(int j=0;j<7;j++){
				if(boy_arr[i].cb_num==girl_arr[j].cg_num)
				{
				arr1[l]=i;
				arr2[l]=j;
				l++;
				break;
				}
			}
		}	
			
		cout <<"Enter the number to search for boy having girlfriend or not\n";
		int num1;
		cin >> num1;
		num1=num1%7;					
		if(arr1[num1]!=0)
			cout<<boy_arr[num1].name<<" couple with "<<girl_arr[num1].name<<"\n";
		else
			cout<<"Boy will die Single :P\n"; 

}



//for(int i=0;i<l;i++)		
	//cout << arr1[i]<<" "<<arr2[i]<<"\n";
	
	
return 0;
}


