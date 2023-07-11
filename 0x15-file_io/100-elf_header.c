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
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header->e_ident[i]);
	printf("\n");

	printf("Class: %d-bit\n",
	       elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);

	printf("Data: %s\n",
	       elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "2's complement, big-endian");

	printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);

	printf("OS/ABI: ");
	switch (elf_header->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX System V ABI");
		break;
	case ELFOSABI_HPUX:
		printf("HP-UX");
		break;
	case ELFOSABI_NETBSD:
		printf("NetBSD");
		break;
	case ELFOSABI_LINUX:
		printf("Linux");
		break;
	case ELFOSABI_SOLARIS:
		printf("Solaris");
		break;
	case ELFOSABI_IRIX:
		printf("IRIX");
		break;
	case ELFOSABI_FREEBSD:
		printf("FreeBSD");
		break;
	case ELFOSABI_TRU64:
		printf("TRU64 UNIX");
		break;
	case ELFOSABI_ARM:
		printf("ARM architecture");
		break;
	case ELFOSABI_STANDALONE:
		printf("Stand-alone (embedded) application");
		break;
	default:
		printf("Unknown");
		break;
	}
	printf("\n");

	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);

	printf("Type: ");
	switch (elf_header->e_type)
	{
	case ET_NONE:
		printf("No file type");
		break;
	case ET_REL:
		printf("Relocatable file");
		break;
	case ET_EXEC:
		printf("Executable file");
		break;
	case ET_DYN:
		printf("Shared object file");
		break;
	case ET_CORE:
		printf("Core file");
		break;
	default:
		printf("Unknown");
		break;
	}
	printf("\n");

	printf("Entry point address: 0x%lx\n", elf_header->e_entry);
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
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr elf_header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Failed to open the file");
	bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
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