#include<stdio.h>
int main(){
	
	//declare and initialize 2D array
	int x,y,z;
	int scores[2][2][2]={
	{
	{65,92},
	{84,72}
	},
	{
	{35,70},
	{59,67}
	}
	};
for( x=0;x<2;x++){
for(y=0;y<2;y++){
for( z=0;z<2;z++){
	printf("scores[%d][%d][%d]=%d\n",x,y,z,scores[x][y][z]);
}
}
}
return 0;
}				
	
	