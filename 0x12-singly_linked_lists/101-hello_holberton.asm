section .text
	extern    printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov ebx, 1
	mov eax, 0
	call  printf
	int 0*80

	mov eax, 0
	int 0*080
	ret

section .data
	msg db "Hello, Holberton",0
	fmt:	db "%s", 10, 0

