#include <stdio.h>

int main(int argc, char *argv[]){
	int n,i,s=0,d=0,t=0,em=0,en=0,brs4=0,brs6=0,brs3=0,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		if (a==1){
			s++;
		}
		else if (a==2){
			d++;
		}
		else if (a==3){
			t++;
		}
		else if (a==4){
			em++;
		}
		else if (a==6){
			en++;
		}
	}
	if (em==0){
		brs4=0;
	} 
	else if ((s>=em)&&(d>=em)){
		brs4=em;
		s=s-brs4;
		d=d-brs4;
	}
	else if ((s<em)&&(d>=em)){
		brs4=s;
		s=s-brs4;
		d=d-brs4;
	}
	else if ((d<em)&&(s>=em)){
		brs4=d;
		s=s-brs4;
		d=d-brs4;
	}
	else if ((s<em)&&(d<em)){
		if (s>=d){
			brs4=d;
			s=s-brs4;
			d=d-brs4;
		}
		else {
			brs4=s;
			s=s-brs4;
			d=d-brs4;
		}
	}
	
	
	
	
	if (en==0){
		brs6=0;
	}
	else if ((s>=en)&&(d>=en)){
		brs6=en;
		s=s-brs6;
		d=d-brs6;
	}
	else if ((s<en)&&(d>=en)){
		brs6=s;
		s=s-brs6;
		d=d-brs6;
	}
	else if ((d<en)&&(s>=en)){
		brs6=d;
		s=s-brs6;
		d=d-brs6;
	}
	else if ((s<en)&&(d<en)){
		if (s>=d){
			brs6=d;
			s=s-brs6;
			d=d-brs6;
		}
		else {
			brs6=s;
			s=s-brs6;
			d=d-brs6;
		}
	}
	
	if (en==0){
		brs3=0;
	}
	else if ((s>=en)&&(t>=en)){
		brs3=en;
	}
	else if ((s<en)&&(t>=en)){
		brs3=s;
	}
	else if ((t<en)&&(s>=en)){
		brs3=t;
	}
	else if ((s<en)&&(t<en)){
		if (s>=t){
			brs3=t;
		}
		else {
			brs3=s;
		}
	}

	if ((brs4==0)&&(brs6==0)&&(brs3==0)){
		printf("-1");
	}
	else{
		for(i=1;i<=brs4;i++){
			printf("1 2 4\n");
		}
		for(i=1;i<=brs6;i++){
			printf("1 2 6\n");
		}
		for(i=1;i<=brs3;i++){
			printf("1 3 6\n");
		}
	}
	
	return 0;
}