/**
 * File: 100-elf_header.c
 *Auth: ...
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/staff.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf: check if a file is an elf file
 * @e_ident: pointer to an array containing the elf magic numbers
 *
 * Description: if the file is not elf - exit code
 */
void check_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 && e_ident[i] != 'E' && e_ident[i] != 'L' && e_ident[i] != 'F')
		{
			dprint(STDERR_FILENO, "Error: Not an ELF File\n");
			exit(16);
		}
	}
}
