#include<stdio.h>
#include<bits/stdc++.h> 
int quyu(int A){
	if(A==0) return 10;
	else if(A==1)  return 10;
	else if(A==2)  return  15;
	else if(A==3)  return  15;
	else if(A==4)  return  15;
	else return 0;
}

double zhongliang(int area,double weight){
	int baseweight=1;
	double extraweight=0;
	
	
	
	if(weight>baseweight){
		extraweight+=ceil(weight-baseweight);
	}
	
	
	
	//if(weight>baseweight){
	//	extraweight=(int)(weight-baseweight);
	//  if((weight-baseweight)>extraweight){
	//	   extraweight+=1;
//	    }
 //   }
    int bf=quyu(area);
    double exp=0;
    if(area==0){
    	exp=3;
	}else if(area==1){
		exp=4;
	}else if(area==2){
		exp=5;
	}else if(area==3){
		exp=6.5;
	}else if(area==4){
		exp=10;
	}
    return bf+exp*extraweight;
    
}

int main()
{
    int area;
    double weight;
    scanf("%d,%lf",&area,&weight);
    double total=zhongliang(area,weight);
    printf("%.2f\n",total);
    return 0;
}
