# define _CRT_SECURE_NO_WARNINGS 2
# include <stdio.h>
//
//
//int main()
//{ int arr[10] = {0};
//   //arr ������Ԫ�ص�ַ
//   //printf("%d\n",sizeof(arr));//���Ϊ40������4��sizeof������������������ʾ�������飬
//   sizeof(&arr);//���������������飬������2�����֮�⣬��Ϊ��Ԫ�ص�ַ
//
//  return 0;
//}
 /* int main()
  {
    int a = 10;
	int* p = &a;
	int* *pp = &p;
	int** *p = &pp
  }*/

//void print(int* *ch,int sz)//����ָ��
//{ int i = 0;
//  for(i=0; i<sz; i++)
//	{
//	  printf("%s\n",ch[i]);//*(ch+i)
//	
//	}
//  
//
//}
//int main()
//{   // int arr[10];
//    //char ch[5];
//	//ָ������
//	//int *arr[5];
//	char* ch[3] = {"abcdef","zhangsan","lisi"};
//	int i = 0;
//	int sz = sizeof(ch)/sizeof(ch[0]);
//	print(ch,sz);
//	//for(i=0; i<sz; i++)
//	//{
//	//  printf("%s\n",ch[i]);//*(ch+i)
//	//
//	//}
//
//  return 0;
//}


//int main()
//{ 
//	int arr1[]= {1,2,3,4};
//	int arr2[]= {2,3,4,5};
//	int arr3[] = {3,4,5,6};
//     //ָ������
//	int* arr[3] = {arr1, arr2, arr3};
//
//	int i = 0;
//	int j = 0;
//	for(i=0; i<3; i++)
//	{
//	 for(j=0; j<4; j++)
//	 {
//	   printf("%d",arr[i][j]);
//	         //*(*(arr+i)+j)
//
//	 }
//	printf("\n");
//	}
//
//
//
// return 0;
//}


//typedef struct Stu//�ṹ������
//{
//  char name[20];
//  short int age;
//  char sex[5]; 
//
//}Stu;
//
//int main ()
//{
//	Stu s = {"zhangsan",20,"��"}; //����һ���ṹ�����s������ʼ��
//	printf("%s %d %s\n", s.name,s.age,s.sex);
//	strcpy(s.name,"lisi");//�޸Ļ���ʱ��strcpy
//	printf("%s %d %s\n", s.name,s.age,s.sex);
//
//
//  return 0;
//}



//struct S
//{
//   char arr[1000];
//   int num;
//
//};
//
//void print1(struct S ss)
//{
//  printf("%s %d\n",ss.arr,ss.num);
//}
//void print2(struct S *ps)//ͨ�������ô�ӡ���Ż���Ч�ʸ�
//{
//  printf("%s %d\n",ps->arr,ps->num);//->ͨ��ps����ĵ�ַ���ҵ������ڶ���ĳ�Ա
//
//
//}
//int main()//�ṹ�崫��
//{
//	struct S s = {"zhishi",100};//����һ���ṹ�������s������ʼ��
//	print1(s);
//	print2(&s);//
//
//	return 0;
//
//}



//int main()//��ѭ�� ��degug�£���release�²���ѭ��
//{   int i = 0;
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    printf("%p\n", &i);
//    printf("%p\n", arr);
//     
//
// /*    for(i=0; i<=12; i++)//vs��<=11����vc6.0��10 11 12 ������
//	 {
//	    arr[i] = 0;
//	    printf("hehe\n");
//	 
//	 }*/
//	return 0;
//}



//void test2()
//{
//   printf("hehe\n");
//}
//
//void test1()
//{
//   test2();
//}
//
//void test()
//{
//   test1();
//}
//int main()//��ջ����
//{
//   test();
//
//  return 0;
//}



//int main()//1��n�Ľ׳����
//{  
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d",&n);
//	for(i=1; i<=n; i++)
//	{
//	   ret *=i;
//	  sum += ret;
//	}
//   printf("%d\n",sum);
//  return 0;
//}