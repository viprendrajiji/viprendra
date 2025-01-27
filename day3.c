//#include<stdio.h>
//int main(){
//	char ch;
//	int v;
//	scanf("%c",&ch);
//	v=(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u');
//	if(v){
//		printf("vovels %c",v);
//	}
//	else{
//			printf("cons");
//	}
//	
//}

//#include<stdio.h>
//#include<string.h>
//int main(){
//	char ch;
//	char vowels[]="aeiouAEIOU";
//	scanf("%c",&ch);
//	if(strchr(vowels,ch)!=NULL){
//		printf("vowle");
//	}	
//	else{
//		printf("const");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	char c;
//	scanf("%c",&c);
//	switch(c){
//		case 'A':
//		case 'E':
//		case 'i':
//		case 'O':
//		case 'u':
//		case 'I':
//		case 'o':
//		case 'U':
//		case 'e':
//		case 'a':
//			printf("vowels");
//			break;
//		default:
//		    printf("cont");
//	    	break;
//	}
//		return 0;
//	}


#include<stdio.h>
//int main(){
//	int a,i,sum=0;
//	scanf("%d",&a);
//	for(i=1;i<=a;i++){
//		sum+=i;
//	}
//	printf("%d",sum);
//	
//}

//int main(){
//	int a,b,c;
//	scanf("%d %d %d",&a,&b,&c);
//	if(a>b && a>c){
//		printf("a is grestest%d",a);
//	}
//	else if(b>c && b>a){
//		printf("b is grestest%d",b);
//	}
//	else{
//		printf("c is grestest%d",c);
//	}
//	return 0;
//}



//int main(){
//	int n;
//	scanf("%d",&n);
//	if(n%4==0 && n%400==0 || n%400==0){
//		printf("leap year");
//	}else{
//		printf("not leap year");
//	}
//	return 0;
//}



//int main(){
//	int a;
//	scanf("%d",&a);
//	if(a>0){
//		printf("positive");
//	}else if(a==0){
//		printf("zero");
//	}else{
//		printf("negetive");
//	}
//}



//int main(){
//	char a;
//	scanf("%c",&a);
//	//a=97 A=65 Z=122 z=90
//	if(a>='a' && a<='z' || a>='A' && a<='Z'){
//		printf("alzebra");
//	}else{
//		printf("no");
//	}
//	return 0;
//}



//int main(){
//	int a,i,fact=1;
//	scanf("%d",&a);
//	for (i=1;i<=a;i++){
//		fact*=i;
//	}
//	printf("%d",fact);
//}




//int main(){
//	int a,i;
//	scanf("%d",&a);
//	for(i=1;i<=10;i++){
//		printf("5 * %d =%d\n",i,i*a);
//	}
//	return 0;
//}



//int main(){
//	int a,i=0;
//	scanf("%d",&a);
//	while(i<a){
//		i++;
//		printf("%d\n",i);
//	}
//	
//}



//int main(){
//	int a,i=1;
//	scanf("%d",&a);
//	do {
//		printf("%d\n",i);
//		i++;
//	}
//	while(i<=a);
//	return 0;
//}



//int main(){
//	int i;
//	for(i=65;i<=90;i++){
//		printf("%c\n",i);
//	}
//}



//int main(){
//	int a,count=0;
//	scanf("%d",&a);
//	while(a!=0){
//		a=a/10;
//		count++;
//	}
//	printf("%d",count);
//}



//int main(){
//	int a,b,reverse=0;
//	scanf("%d",&a);
//	while(a!=0){
//		b=a%10;
//		reverse=reverse*10+b;
//		a=a/10;
//	}
//	printf("%d",reverse);
//	
//}



//#include<math.h>                 //power use double  lf
//int main(){
//	int a,b;
//	scanf("%d""%d",&a,&b);
//	printf("%.2lf",pow(a,b));
//}



//int main(){
//	int a,b,pow=1;
//	scanf("%d""%d",&a,&b);
//	while(b!=0){
//		pow=pow*a;
//		b--;
//	}printf("%d",pow);
//}


//int main(){
//	int i,a;
//	scanf("%d",&a);
//	for(i=2;i<a;i++){
//		if(a%i==0){
//			printf("not prime");
//		}else{
//			printf("prime");
//		}
//		
//	}
//	return 0;
//}



//int main(){
//	int i,a,t1=0,t2=1,t3;
//	scanf("%d",&a);
//	for(i=1;i<=a;i++){
//		printf("%d,",t1);
//		t3=t1+t2;
//		t1=t2;
//		t2=t3;
//	}
//}



//int main(){
//	int i, a,b,rev=0;
//	scanf("%d",&a);
//	for(i=0;i<a;i++){
//		b=a%10;
//		rev=rev*10+b;
//		a=a/10;
//	}if(rev=a){
//		printf("yes");
//	}else{
//		printf("no");
//	}
//}




























