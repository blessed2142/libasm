global _ft_strdup
extern _malloc
extern _ft_strcpy
extern _ft_strlen

section .text
_ft_strdup:
		push rdi
		call _ft_strlen
		mov rdi, rax
		call _malloc
		cmp rax, 0
		je .return
		mov rdi, rax
		pop rsi
		call _ft_strcpy
		ret

.return:
		mov rax, 0
		ret