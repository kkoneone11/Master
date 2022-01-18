一、 
   1.思路：遍历数组，一个个找直到两数相加等于target 
   2.新的学习点 
(1)malloc(2)int *a=(void *)malloc创建数组 
   3.遇到问题、原因、解决: 
   returnsize没有分类2和0；
   思维不够
   问同学 
   
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int *a=(int *)malloc(sizeof(int)*2); 
	//malloc创建一个动态数组，这样操作之后就不用a[]这样要固定一个值可以是变量
	//但是要注意强制类型转换
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
	 //当nums中无法组成target时返回0 
}




二、 
   1.思路：遇到的左括号要和相应的右括号匹配而且要求对称，这就符合栈的先入后出，先出现的左括号
    可以先放栈，遇到右括号就与栈顶的匹配，成功就出栈而且必须为偶数 
   2.新的学习: 
   (1)bool isvaild函数(2) memset初始化 
   3.遇到问题、原因、解决: 
   if加了;；没有考虑到用栈；for循环中变量数值变化；没有考虑到纯单向的情况
   基础不够扎实，想的情况不够多
   问同学、调试、参考答案 
bool isValid(char * s)
//bool isvaild函数是用来判断TRUE和FALSE的，返回的就是这两个 
{
  int len=strlen(s);
  //保证s为偶数 
  int i,top=-1;
  //top=-1的好处是如果遇到直接是右括号就可以false
  if(len%2==0)
  {
  	char *stack=(char *)malloc(strlen(s));
  	memset(stack,0,strlen(s));//初始化 
  	//void *memset(void *s, int c, unsigned long n)
	//将变量s中前n个字节的数据用c来替换
		
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
					//for循环中一次循环top会保留上一次top的值，如果上次是3这次就是2
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
    //有可能全为左 
    {
        return false;
    }
   return true; 
}






三、 
   1.思路：计算字符串长度然后遍历，若是有大写的就给他换成小写输出，用到ASCII码关系表
   2.新的学习: 
   3.遇到问题、原因、解决:
   	忘记了return；
	习惯不够好没有先写return
	查漏 
char * toLowerCase(char * s){
    	int len=strlen(s);
	for(int i=0;i<len;i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
	} 
    return s;//忘记return
}
