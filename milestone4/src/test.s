	.section	.rodata
.LC0:
	.string	"%ld"
	.text
	.globl	main
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
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movq	%rax, 16(%rbp)
	subq	$32, %rsp
	movl	$4, -24(%rbp)
	movl	$4, -20(%rbp)
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
	movl	$32, %edi
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
