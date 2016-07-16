#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
int n1;
long n2;
long long n3;
char c;
float f;
double d;

if(scanf("%d %ld %lld %c %f %lf",&n1,&n2,&n3,&c,&f,&d)){
printf("%d\n%ld\n%lld\n%c\n%f\n%lf\n",n1,n2,n3,c,f,d);}
return 0;
}
