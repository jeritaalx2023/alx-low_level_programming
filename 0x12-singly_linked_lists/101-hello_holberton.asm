section .text
	extern    printf
	global main
main:

	mov ecx, msg
	mov ebx, 1
	mov eax, 4
	call  printf
	int 0*80

	mov eax, 1
	int 0*080

section .data
	msg db "Hello, Holberton",0
	fmt:	db "%s", 10, 0

