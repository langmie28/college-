#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct 
{
	char id[4];
	char name[50];
	int score[3];
	double avg;
}student;
void calc_avg(student *s) {                                               
    s->avg = (s->score[0] + s->score[1] + s->score[2]) / 3.0; 
}
void jiemian(){
	printf("---------学生成绩管理系统狼灭版本---------\n");
	printf("1.输入学生成绩\n");
	printf("2.输出学生成绩\n");
	printf("3.修改学生成绩\n");
	printf("4.统计不及格率\n");
	printf("5.最高分学生成绩\n");
	printf("6.选择法按平均分排序\n");
	printf("7.冒泡法按平均分排序\n");
	printf("8.插入学生信息\n");
	printf("9.删除学生信息\n");
	printf("0.退出系统\n");
	printf("请选择功能\n");
	printf("==========================================\n");
}
//1 输入 
student *in(student *students,int *count,int *capacity){
    char *a;
    int newcap,c;
	if(*count>=*capacity){
		newcap=(*capacity)*2;
		student *tmp=(student*)realloc(students,newcap*sizeof(student));
	  if(tmp==NULL){
		printf("扩展内存失败，无法添加更多信息\n");
		return students; 
	  }
			students=tmp;
	        *capacity=newcap;
	        printf("扩展存储成功!!!");
	        return students; 
   }

	printf("请输入学号(至多三位,不可重复):");
	if(scanf("%3s",&students[*count].id)!=1){
		while ((c=getchar())!='\n'&&(c=getchar())!=EOF);
		printf("学号输入错误\n");
		return students; 
	}
	printf("请输入姓名(10字以内)\n");
	scanf("%s", students[*count].name);
	 printf("请输入三门课成绩（以空格分隔）: ");   
    for (int i = 0; i < 3; i++) {                
        if (scanf("%d", &students[*count].score[i]) != 1) { 
            while (getchar() != '\n'&&getchar()!=EOF);            
            printf("成绩输入错误，放弃本次输入\n");
            return students;                      
        }
    }
    calc_avg(&students[*count]);                  
    (*count)++;                                   
    printf("学生已添加(当前学生数量：%d)\n", *count); 
    return students; 
}
//2 输出成绩
void out(student *students,int count){
	if(count==0){
		printf("无信息显示\n");
		return;
	}
	printf("当前共有%d名学生信息:\n",count);
	for(int i=0;i<count;i++){
		printf("%d: ID=%s,姓名=%s,成绩=[%d,%d,%d],平均成绩=%.2f\n",
		i+1,
		students[i].id,students[i].name,
		students[i].score[0],
		students[i].score[1],
		students[i].score[2],
		students[i].avg);
	}
}
//3 修改
void  check(student *students,int count){
	char a[4];
	int b;
	int c;
	int f=0;
	printf("输入要查找学生的学号\n");
	scanf("%s",a);
	printf("输入要改正的科目（1，2，3）\n");
	scanf("%d",&b); 
	printf("输入要改正的成绩\n");
	scanf("%d",&c); 
    for (int i=0; i<count; i++) {
        if (strcmp(students[i].id, a) == 0) { 
            students[i].score[b-1] = c; 
            calc_avg(&students[i]);
            printf("已修改学号为 %s 的学生信息为：ID=%s，姓名=%s，成绩=[%d, %d, %d]，平均=%.2f\n",
                   a, students[i].id, students[i].name,
                   students[i].score[0], students[i].score[1], students[i].score[2], students[i].avg);
            f = 1;
            break; 
        }
    }

    if (!f) {
        printf("查无此人\n");
    }
}

//4 统计不及格率
void tongji(student *students,int count){
	if(count==0){
		printf("无数据统计\n");
		return;
	}
	int sum=0;
	for(int i=0;i<count;i++){
		if(students[i].avg<60.0){
			sum++;
		}
	}
	double rate=(double)sum/count*100.0;
	printf("不及格人数为%d,不及格率为%.2f%%\n",sum,rate);
} 
//5 最高分学生
student *maxstudent(student *students,int count){
	if(count==0) return NULL;
	int a=0;
	
	for(int i=1;i<count;i++){
		if(students[i].avg>students[a].avg){
			a=i;
		}
	}
	return &students[a];
}
//6选择排序
void paixua(student *students,int count){
	for(int i=0;i<count-1;i++){
		int min=i;
		for(int j=i+1;j<count;j++){
			if(students[j].avg<students[min].avg){
				min=j;
			}
		}
		if(min!=i){
		student tmp=students[i];
		students[i]=students[min];
		students[min]=tmp;
	    }
	}
	printf("排序完成（选择法）\n");
	
} 
//7冒泡排序
void paixub(student *students,int count){
	for(int i=0;i<count-1;i++){
		int s=0;
		for(int j=0;j<count-i-1;j++){
			if(students[j].avg>students[j+1].avg){
				student tmp=students[j];
				students[j]=students[j+1];
				students[j+1]=tmp;
				s=1;
			}
		}
		if(!s) break;
	}
	printf("排序完成（冒泡法）\n");
}
//8插入学生信息
student *charu(student *students,int *count,int *capacity){
	if(+count==0){
		printf("无数据，用1方式添加数据\n");
		return in(students,count,capacity);
	}
	student news;
	printf("请输入插入学生编号\n");
	scanf("%d",&news.id);
	printf("请输入插入学生姓名\n");
	scanf("%s",news.name); 
	printf("请输入插入学生成绩(以空格分隔)\n");
	for(int i=0;i<3;i++){
		if (scanf("%d", &news.score[i]) != 1) {
            while (getchar() != '\n');
            printf("成绩输入错误，放弃插入。\n");
            return students;
        }
	}
	calc_avg(&news);
	if(*count+1>*capacity){
		int newcap=(*capacity)*2;
		if(newcap<(*count+1)){
			newcap=*count+1;
		}
		student *tmp=(student*)realloc(students,newcap*sizeof(student));
		if(tmp==NULL){
			printf("内存扩展失败\n");
			return students;
		}
		students=tmp;
		*capacity=newcap;
	}else{
		student *tmp = (student *)realloc(students, (*capacity) * sizeof(student));
	    if (tmp != NULL){
	    	students = tmp;	
		}
	}
	int p=*count;
	for(int i=0;i<*count;i++){
		if(students[i].avg>=news.avg){
			p=i;
			break;
		}
	}
	for (int j = *count; j > p; j--) {
        students[j] = students[j - 1];
    }
    students[p] = news;
    (*count)++;
    printf("已插入新学生，插入位置：%d（1 表示第一个），当前学生数：%d\n", p+1, *count);
    return students;
}
//9删除学生信息 
student *deletestudent(student *students,int *count,int *capacity){
	int n;
	char d[4];
	printf("输入删除第几个学生\n");
	scanf("%d",&n);
	printf("输入删除学生的学号\n");
	scanf("%3s",d);
	if(*count<n){
		printf("无法删除\n"); 
	}
	int a=0;
	for(int i=0;i<*count;i++){
		if(strcmp(students[i].id,d)==0){
			a=i;
			break;
		}
	}
	if(a==0){
		printf("未找到该学生\n");
		return students;
	}
	for(int i=a;i<*count-1;i++){
		students[i]=students[i+1];
	}
	(*count)--;
	return students;
}
int main(){
	int capacity=10;
	int count=0;
	int choice,c;
	student *students=(student*)malloc(capacity*sizeof(student));
	if(students==NULL){
		printf("内存分配失败");
		return 1;
	}
	
	while(1){
		jiemian();
		if(scanf("%d",&choice)!=1){
			while ((c=getchar())!='\n'&&(c=getchar())!=EOF);
		    printf("输入错误，重新输入\n");
		    continue;
		}
		
		switch(choice){
			case 1:
				students=in(students,&count,&capacity);
				break;
			case 2:
				out(students,count);
				break;
			case 3:
				check(students,count);
				break;
			case 4:
				tongji(students,count);
				break;
			case 5:{
				 student *p = maxstudent(students, count); 
                if (p != NULL) {
                    printf("最高平均分学生：ID=%s, 姓名=%s, 三科: %d %d %d, 平均=%.2f\n",
                           p->id, p->name, p->score[0], p->score[1], p->score[2], p->avg); 
                } else {
                    printf("当前无学生数据。\n");
                }
                break;
			}
			   
            case 6:{
            		paixua(students,count);
				out(students,count);
				break;
				
			}
			case 7:{
				paixub(students,count);
				out(students,count);
				break;
			}
			case 8:
				students = charu(students, &count, &capacity);
				break;
			case 9:
				students = deletestudent(students, &count, &capacity);
				break;
			case 0:
				free(students);
                printf("退出程序。\n");
                return 0;
            default:
                printf("无效选择，请重试。\n");
		    }
		}
		return 0;
    }

