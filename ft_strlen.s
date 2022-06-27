global _ft_strlen

section .text
_ft_strlen:
		xor rax, rax
.loop:
		cmp byte [rdi], 0
		je .return
		inc rax
		inc rdi
		jmp .loop
.return:
		ret