	.file	"test.c"
	.text
	.globl	sex
	.type	sex, @function
sex:
	endbr64
	pushq	%rbp
	movq	%rsp, %rbp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	popq	%rbp
	ret
	.size	sex, .-sex
	.section	.rodata
.LC0:
	.string	"%d"
	.text
	.globl	main
	.type	main, @function
main:
	endbr64
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
	movl	$3, -24(%rbp)
	movl	$4, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %ecx
	sall	%cl, -24(%rbp)
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	sex
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-24(%rbp), %eax
	movl	-20(%rbp), %edx
	movl	%eax, %ecx
	sall	%cl, %edx
	movl	%edx, %eax
	movl	%eax, -12(%rbp)
	movl	-20(%rbp), %eax
	cltq
	salq	$2, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$8, %rax
	movl	$2, (%rax)
	movl	$0, -28(%rbp)
	jmp	.L4
.L5:
	addl	$10, -28(%rbp)
	addl	$1, -28(%rbp)
.L4:
	cmpl	$10, -28(%rbp)
	jg	.L5
	movq	-8(%rbp), %rax
	addq	$12, %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	addq	$8, %rax
	negl	%edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	addq	$8, %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	addq	$12, %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jge	.L6
	movq	-8(%rbp), %rax
	addq	$8, %rax
	movl	$4, (%rax)
.L6:
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
