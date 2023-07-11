#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - print error message
 *
 * @error_message: message to print
 */
void print_error(const char *error_message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", error_message);
	exit(98);
}

/**
 * display_elf_header - display function
 *
 * @elf_header: header to be displayed
 */
void display_elf_header(const Elf64_Ehdr *elf_header)
{
	int i = 0;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (; i < EI_NIDENT; i++)
		printf("%02x ", elf_header->e_ident[i]);
	printf("\n");

	printf("  Class:                             ");
	if (elf_header->e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (elf_header->e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("Unknown\n");

	printf("  Data:                              ");
	if (elf_header->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (elf_header->e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("Unknown\n");

	printf("  Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);

	printf("  OS/ABI:                            ");
	switch (elf_header->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM architecture\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Stand-alone (embedded) application\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}

	printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);

	printf("  Type:                              ");
	switch (elf_header->e_type)
	{
	case ET_NONE:
		printf("No file type\n");
		break;
	case ET_REL:
		printf("Relocatable file\n");
		break;
	case ET_EXEC:
		printf("Executable file\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("Core file\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}

	printf("  Entry point address:               0x%lx\n", elf_header->e_entry);
}

/**
 * mian - program that displays the information
 * contained in the ELF header at the start of an ELF file.
 *
 * @argc: number of arguments
 * @argv: arguments list
 * Return: 0 on success, anything otherwise
 */
int main(int argc, char *argv[])
{
	int file_descriptor;
	ssize_t bytes_read;
	Elf64_Ehdr elf_header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");
	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
		print_error("Failed to open the file");
	bytes_read = read(file_descriptor, &elf_header, sizeof(Elf64_Ehdr));
	if (bytes_read == -1)
		print_error("Failed to read the ELF header");
	if (bytes_read != sizeof(Elf64_Ehdr))
		print_error("Invalid ELF header size");
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
	    elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
	    elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
	    elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}
	display_elf_header(&elf_header);

	close(file_descriptor);
	return (0);
}