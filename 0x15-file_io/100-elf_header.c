#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void display_error(char *msg) {
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

int main(int argc, char **argv) {
	char *filename;
	Elf64_Ehdr header;
	int fd, i;

	if (argc != 2) {
		display_error("Usage: elf_header elf_filename");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1) {
		display_error("Error: cannot open file");
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header)) {
		display_error("Error: cannot read ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3) {
		display_error("Error: not an ELF file");
	}

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	printf("  Class: %s\n", header.e_ident[EI_CLASS] == ELFCLASS32
	       ? "ELF32" : "ELF64");
	printf("  Data: %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB
	       ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version: %d\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI: %d\n", header.e_ident[EI_OSABI]);
	printf("  ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type: %d\n", header.e_type);
	printf("  Entry point address: %lx\n", header.e_entry);

	close(fd);
	return 0;
}
