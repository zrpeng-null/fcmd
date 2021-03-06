#ifndef _FCMD_CFG_H_
#define _FCMD_CFG_H_
/*******************************************************************************
* 用户函数命令头文件包含，函数声明
*/

#include "cmd_mem.h"
 


 


/*******************************************************************************
 * 自定义函数命令表
 */
CmdTbl_t CmdTbl[] =
{
    //系统命令, SYSTEM_CMD_NUM和系统命令个数保持一致
    "ls",  0, 
    "addr",0, 
    "help",0, 


    //用户命令
	"void md(int addr, int elem_cnt, int elem_size)", (void(*)(void))md,
	"int cmp(void *addr1, void *addr2, int elem_cnt, int elem_size)", (void(*)(void))cmp,
	"void memset(void *s, int c, size_t n)", (void(*)(void))memset,
	"void *memcpy(void *s1, const void *s2, size_t n)", (void(*)(void))memcpy,
	"void *malloc(size_t size)", (void(*)(void))malloc,
	"void free(void *ptr)", (void(*)(void))free,
	"long strtol(const char *nptr, char **endptr, int base)", (void(*)(void))strtol,
	"char *strstr(const char *s1, const char *s2)", (void(*)(void))strstr,
	"FILE *fopen(const char *file,const char *mode)", (void(*)(void))fopen,
	"int fclose(File *fp)", (void(*)(void))fclose,
	"size_t fwrite(const void *p,size_t size,size_t nmemb, FILE *fp)", (void(*)(void))fwrite,
	"size_t fread(void *p, size_t size, size_t nmenb, FILE *fp)", (void(*)(void))fread,

	"int printf(const char *fmt, ...)", (void(*)(void))printf,
	
};
uint8_t CmdTblSize = sizeof(CmdTbl) / sizeof(CmdTbl[0]);

#endif
