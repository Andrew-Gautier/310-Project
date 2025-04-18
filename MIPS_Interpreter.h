#ifndef _ARM_INTERP_H_
#define _ARM_INTERP_H_

#pragma warning(disable : 4996)

#include "global_data.h"
#include "MIPS_Instruction.h"


// buffer size constant
#define BUFF_SIZE 100
void moddedBinary2assembly(char* buff);
void moddedAssembly2machine(char* buff);
void moddedHex2assembly(char* buff);
char* getParamString(struct Param* param, char* buffer, size_t size);
char* getAssemblyString(void);
void moddedBinary2assembly(char* buff);
char* setAssm(void);
char* makeParam(struct Param* param);
/*
	Purpose: runs the test bench for the program
	Params: none
	Return: none
*/
void testBench(void);

/*
	Purpose: dummy function to test code
	Params: none
	Return: none
*/
void test(void);

/*
	Purpose: initializes anything that needs to be initialized
	Params: none
	Return: none
*/
void initAll(void);


/*
	Purpose: menu for assembly to machine conversion
	Params: char* buff - buffer to be used for reading/writing
	Return: none
*/
void assembly2machine(char* buff);


/*
	Purpose: menu for machine to assembly conversion
	Params: char* buff - buffer to be used for reading/writing
	Return: none
*/
void machine2assembly(char* buff);


/*
	Purpose: menu for binary to assembly conversion
	Params: char* buff - buffer to be used for reading/writing
	Return: none
*/
void binary2assembly(char* buff);


/*
	Purpose: menu for hex to assembly conversion
	Params: char* buff - buffer to be used for reading/writing
	Return: none
*/
void hex2assembly(char* buff);

#endif