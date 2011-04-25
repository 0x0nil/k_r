#include <stdio.h>

/* 转移字符后面的字符是转义字符系列中未曾出现的某
 * 一个字符时，编译器会给出警告，程序运行的时候输出
 * 的是本来的那个字符
 * */

int main(int argc,char *argv[])
{
	printf("test\ctest\n");
	return 0;
}
