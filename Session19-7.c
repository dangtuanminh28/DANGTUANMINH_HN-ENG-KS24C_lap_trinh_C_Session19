#include <stdio.h>
#include <string.h>
typedef struct Sinhvien{
	int id;
	char name[50];
	int age;
	char phone[50];
}sinhvien;
void xoa(sinhvien *std,int *addindex,int *length) {
	for (int i=*addindex-1; i<*length; i++) {
		std[i]=std[i+1];
	} 
	*length--;
}
void print(sinhvien *std,int *length) {
	for (int i=0; i<*length;i++) {
		printf ("Id:%d\n",std[i].id);
		printf ("Ten:%s\n",std[i].name);
		printf ("Id:%d\n",std[i].age);
		printf ("Id:%s\n",std[i].phone); 
	} 
}  
int main() {
	int addindex, length=5; 
	sinhvien user[5]={
		{1,"Dang Tuan Minh",17,"0374473926"},
    	{2,"Pham Thi Loan",18,"0395336228"},
    	{3,"Dang Manh Truong",19,"037456966"},
    	{4,"Nguyen Khoa Nam",15,"0369259569"},
    	{5,"Le Thi Giang",14,"0341012333"},
	};
	print(user,&length); 
	printf("Nhap vi tri muon xoa:");
	scanf("%d",&addindex);
	xoa(user,&addindex,&length);
	print(user,&length);  
	return 0;
}
