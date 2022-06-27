global _ft_strcpy

section .text
_ft_strcpy:
		xor rax, rax
.cpy:
		cmp byte [rsi + rax], 0
		je .return
		mov r11b, [rsi + rax]
		mov [rdi + rax], r11b
		inc rax
		jmp .cpy
.return:
		mov byte [rdi + rax], 0
		mov rax, rdi
		ret