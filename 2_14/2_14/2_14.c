# define _CRT_SECURE_NO_WARNINGS 2

# include <stdio.h>
# include <string.h>



//int my_strlen(char* str)//�ǵݹ�ʵ��strlen
//{
//  int count = 0;
//  while(*str != '\0')//ע��\0�������ж�ʱ�õ�����
//  {
//     count ++;
//	    str ++;
//  }
//   return count;
//}

//
//int my_strlen(char* str)//�ݹ�ʵ��strlen����������ʱ����
//{
//  if(*str != '\0')
//	  return 1 + my_strlen(str+1);
//  else
//	  return 0;
//}
//int main()
//{  char arr[]="abcdef";
//   
//
//
//
// printf("%d\n",my_strlen(arr));
// //my_strlen("abcdef");
//// 1+my_strlen("bcdef");
// //1+1+my_strlen("cdef");
// //1+1+1+1+1+my_strlen("");
////1+1+1+1+1+0;
// return 0;
//
//}

//int fac(int n)
//{
//   if(n <= 1)
//	   return 1;
//   else 
//	   return n * fac(n - 1);
//  
//}
//int main()//�ݹ�ʵ�� n�Ľ׳�
//{
//  int n = 0;
//  int ret = 0;
//  scanf("%d",&n);
//  
//  ret = fac(n);
//  printf("%d\n",ret);
//
// return 0;
//}


//int fab(int n)//��n̫��ʱ ����ʱ�������ȱ��
//{
//   if(n <= 2)
//	   return 1;
//   else 
//	   return fab(n - 1) + fab(n - 2);
//  
//}

//int fab(int n)
//{
//   int a = 1;
//   int b = 1;
//   int c = 0;
//  if (n <=2)
//  return  1;
// else
// {   int i = 0;
//	 for( i=0;i<n-2;i++)
//	 {c= a+b;
//      a = b;
//      b = c;
//   }
// }
//  return c;
//}


//int fab(int n)
//{
//   int a = 1;
//   int b = 1;
//   int c = 1;
//   int i = 0;
//	 for( i=0;i<n-2;i++)
//	 {c= a+b;
//      a = b;
//      b = c;
//     }
// 
//  return c;
//}
//
//int main()//쳲�������ʵ��
//{
//  int n = 0;
//  int ret = 0;
//  scanf("%d",&n);
//  
//  ret = fab(n);
//  printf("%d\n",ret);
//
// return 0;
//}


//int main()
//{  int i = 0;
//   int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//   int sz = sizeof(arr)/sizeof(arr[0]);
//   for(i=0; i<=sz; i++)
//	   //printf("%d\n",*(arr+i));
//       //printf("%d\n",arr[i]);
//	  // printf("%d\n",i[arr]);
//        //arr[i]<==>*(arr+i)<==>*(i+arr)<==>i[arr]
//	  // printf("&arr[%d]=%p\n",i,&arr[i]);//��ӡ��ַ
//
//  return 0;
//}


//int main()
//{ int arr[3][5] = {{1},{2},{3}};
//   int i = 0;
//   int j = 0;
//  // for(i=0; i<3; i++)
//     for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)//�����ά���鳤��
//   {
//   //  for(j=0; j<5; j++)
//		for(j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++)//�����ά������
//		{
//			printf("&arr[%d][%d]= %p\n ",i ,j,&arr[i][j]);
//		}
//   
//   }
//
// return 0;
//}

//int main()
//{ int arr[3][5] = {{1},{2},{3}};
//   int i = 0;
//   int j = 0;
//   int* p = &arr[0][0];
//   for(i=0; i<15; i++)
//   {
//   
//		printf("%d ",*(p+i));
//		
//   
//   }
//
// return 0;
//}
void bubble_sort(int arr[],int sz)//ð���㷨
{
   int i = 0;
   int flag = 0;//�Ż���������ģ�����ִ��
    for(i=0; i<sz-1; i++)
	{
	  int j = 0;
	  for(j=0; j<sz-1-i; j++)
	  {
	    if(arr[j]>arr[j+1])
		{
			int tep = arr[j+1];
             arr[j+1] = arr[j];
			 arr[j] = tep;
			 flag = 1;
		}
	  }
	
	
       if(flag==0)
	    break;
   } 
}
void print_arr(int arr[], int sz)
{
  int i = 0;
  for(i=0; i<=sz; i++)
  {
    printf("%d ", arr[i]);
  }

}
int main()//ð������֮����
{   //int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    print_arr(arr,sz);

	return 0;
}