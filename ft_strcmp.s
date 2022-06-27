global _ft_strcmp

section .text
_ft_strcmp:
.loop:
		mov r11b, byte [rsi]
		mov r12b, byte [rdi]
		cmp r12b, r11b
		je .add
		jne .ne
.add:
		cmp r12b, 0
		je .ret
		inc rdi
		inc rsi
		jmp .loop
.ret:
		cmp byte [rsi], 0
		je .zero
.zero:
		mov rax, 0
		ret
.ne:
		movzx rax, r12b
		movzx r13, r11b
		sub rax, r13
		ret