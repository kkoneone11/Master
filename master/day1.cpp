һ�� 
   1.˼·���������飬һ������ֱ��������ӵ���target 
   2.�µ�ѧϰ�� 
(1)malloc(2)int *a=(void *)malloc�������� 
   3.�������⡢ԭ�򡢽��: 
   returnsizeû�з���2��0��
   ˼ά����
   ��ͬѧ 
   
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int *a=(int *)malloc(sizeof(int)*2); 
	//malloc����һ����̬���飬��������֮��Ͳ���a[]����Ҫ�̶�һ��ֵ�����Ǳ���
	//����Ҫע��ǿ������ת��
	 for(int i=0;i<numsSize;++i) 
	 {
	 	for(int j=i+1;j<numsSize;++j)
	 	{
	 		if(nums[i]+num[j]=target)
	 		{
	 			a[0]=i;
				a[1]=j;
				 *returnSize=2;
				 return a; 
			} 
		 }
	 }
	 *returnSize=0;
	 return 0;
	 //��nums���޷����targetʱ����0 
}




���� 
   1.˼·��������������Ҫ����Ӧ��������ƥ�����Ҫ��Գƣ���ͷ���ջ�����������ȳ��ֵ�������
    �����ȷ�ջ�����������ž���ջ����ƥ�䣬�ɹ��ͳ�ջ���ұ���Ϊż�� 
   2.�µ�ѧϰ: 
   (1)bool isvaild����(2) memset��ʼ�� 
   3.�������⡢ԭ�򡢽��: 
   if����;��û�п��ǵ���ջ��forѭ���б�����ֵ�仯��û�п��ǵ�����������
   ����������ʵ��������������
   ��ͬѧ�����ԡ��ο��� 
bool isValid(char * s)
//bool isvaild�����������ж�TRUE��FALSE�ģ����صľ��������� 
{
  int len=strlen(s);
  //��֤sΪż�� 
  int i,top=-1;
  //top=-1�ĺô����������ֱ���������žͿ���false
  if(len%2==0)
  {
  	char *stack=(char *)malloc(strlen(s));
  	memset(stack,0,strlen(s));//��ʼ�� 
  	//void *memset(void *s, int c, unsigned long n)
	//������s��ǰn���ֽڵ�������c���滻
		
		for(int i=0;i<len;i++)
		{
			switch(s[i])
			{
				case'(':
					stack[++top]=s[i];
					break;
				case'[':
					stack[++top]=s[i];
					break;
				case'{':
					stack[++top]=s[i];
					break;
				case')':
					if(top<0||stack[top--]!='(')
					//forѭ����һ��ѭ��top�ᱣ����һ��top��ֵ������ϴ���3��ξ���2
					 return false; 
					 break;
				case']':
					if(top<0||stack[top--]!='[')
					return false;
					break;
				case'}':
					if(top<0||stack[top--]!='{')
					return false;
					break;
			}
		}
	} 
    else
    {
        return false;
    }
    if(top>0)
    //�п���ȫΪ�� 
    {
        return false;
    }
   return true; 
}






���� 
   1.˼·�������ַ�������Ȼ������������д�д�ľ͸�������Сд������õ�ASCII���ϵ��
   2.�µ�ѧϰ: 
   3.�������⡢ԭ�򡢽��:
   	������return��
	ϰ�߲�����û����дreturn
	��© 
char * toLowerCase(char * s){
    	int len=strlen(s);
	for(int i=0;i<len;i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
	} 
    return s;//����return
}
