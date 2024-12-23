# include<stdio.h>
# include<string.h>
struct Student{
	int id;
	char fullName[100];
	int age;
	char phone[20];
};
void softArr(struct Student students[5],int n);
void printArr(struct Student students[5], int n);
int main(){
	struct Student students[5]={
		{1,"Dang Tuan Minh",17,"0374473926"},
    	{2,"Pham Thi Loan",18,"0395336228"},
    	{3,"Dang Manh Truong",19,"037456966"},
    	{4,"Nguyen Khoa Nam",15,"0369259569"},
    	{5,"Le Thi Giang",14,"0341012333"},
    };
    int n=5;
    int id;
    softArr(students,n);
    printArr(students,n);
    return 0;
}
void softArr(struct Student students[5],int n){
	int i,j;
	for(i = 0;i < n - 1;i++){
		for (j = 0;j < n - i - 1;j++) {
			if(strcmp(students[j+1].fullName,students[j].fullName) < 0) {
				struct Student temp = students[j];
			    students[j] =students[j + 1];
			    students[j + 1]=temp;
			}
		}
	}
}
void printArr(struct Student students[5], int n){
	printf("In thong tin cac sinh vien sau khi xoa\n");
    printf("\n");
    int i;
	for(i = 0;i < n;i++) {
        printf("\n--thong tin sinh vien %d\n",i+1);
		printf("Id sinh vien %d:%d\n",i+1,students[i].id);
		printf("Ho va ten sinh vien %d:%s\n",i+1,students[i].fullName);
	    printf("Tuoi sinh vien sinh vien %d:%d\n",i+1,students[i].age);
	    printf("So dien thoai sinh vien %d:%s\n",i+1,students[i].phone);
    }
	return 0;   
}
