// essential gift...
#include<bits/stdc++.h>
using namespace std;
struct temp{
	int price,value;
};
void bubble(struct temp arr[],int l,int r){
	int t;
	for(int i=l;i<r;i++)
	{
		for(int j=l;j<r-i-1;j++)
		{
			
			if(arr[j].price>arr[j+1].price)
				{
					swap(arr[j].price,arr[j+1].price);
				}
			
		}
	}
	
}
main()
{
	struct temp arr[10];
	FILE *sw=fopen("g.txt","w");
	//char gift[5];
	char category[10];
	for(int i=0;i<10;i++)
	{
		int temp=rand()%3;
		if(temp==2)
			category[i]='l';
		else
			category[i]='e';	
		 arr[i].price = rand()%100+1;
		 arr[i].value = rand()%10+1;
		
	}
	bubble(arr,0,10);
	
	for(int i=0;i<10;i++)
		fprintf(sw,"%c %d %d\n",category[i],arr[i].price,arr[i].value);	


	return 0;
}
