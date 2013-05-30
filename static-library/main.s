	.file	"main.c"
	.section	.rodata
.LC0:
	.string	"In main"
.LC1:
	.string	"Enter a b values:"
.LC2:
	.string	"%d%d"
	.align 4
.LC3:
	.string	"The addition of two numbers %d, %d = %d\n"
	.align 4
.LC4:
	.string	"The subtractiion of two numbers %d, %d = %d\n"
	.align 4
.LC5:
	.string	"The multiplication of  two numbers %d, %d = %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	andl	$-16, %esp
	subl	$32, %esp
	movl	$.LC0, (%esp)
	.cfi_offset 3, -12
	call	puts
	movl	$.LC1, (%esp)
	call	puts
	movl	$.LC2, %eax
	leal	24(%esp), %edx
	movl	%edx, 8(%esp)
	leal	20(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	24(%esp), %edx
	movl	20(%esp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	add
	movl	%eax, 28(%esp)
	movl	24(%esp), %ecx
	movl	20(%esp), %edx
	movl	$.LC3, %eax
	movl	28(%esp), %ebx
	movl	%ebx, 12(%esp)
	movl	%ecx, 8(%esp)
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	24(%esp), %edx
	movl	20(%esp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	sub
	movl	%eax, 28(%esp)
	movl	24(%esp), %ecx
	movl	20(%esp), %edx
	movl	$.LC4, %eax
	movl	28(%esp), %ebx
	movl	%ebx, 12(%esp)
	movl	%ecx, 8(%esp)
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	24(%esp), %edx
	movl	20(%esp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	mul
	movl	%eax, 28(%esp)
	movl	24(%esp), %ecx
	movl	20(%esp), %edx
	movl	$.LC5, %eax
	movl	28(%esp), %ebx
	movl	%ebx, 12(%esp)
	movl	%ecx, 8(%esp)
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	.cfi_restore 3
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
