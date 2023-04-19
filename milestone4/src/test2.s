	.section	.rodata
.LC0:
	.string "%ld\n"
	.text
	.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
	movq	$1, %r8
	movq	%r8, -8(%rbp)
	movq	$2, %r8
	movq	%r8, -16(%rbp)
	movq	$10, %r8
	movq	%r8, -24(%rbp)
	movq	$4, %r8
	movq	%r8, -32(%rbp)
.L1:
	movq	-32(%rbp), %r8
	movq	$5, %r9
	cmpq	%r9, %r8
	jl	.L3
	jmp	.L11
.L2:
	movq	-32(%rbp), %r8
	incq	%r8
	movq	%r8, -32(%rbp)
	jmp	.L1
.L3:
	movq	$9, %r8
	movq	-32(%rbp), %r9
	addq	%r8, %r9
	movq	%r9, -32(%rbp)
	movq	-24(%rbp), %r8
	decq	%r8
	movq	%r8, -24(%rbp)
	movq	-32(%rbp), %r8
	movq	$4, %r9
	cmpq	%r9, %r8
	jg	.L4
	jmp	.L5
.L4:
	jmp	.L11
	jmp	.L6
.L5:
	movq	$1, %r8
	movq	%r8, -16(%rbp)
	movq	-24(%rbp), %r8
	incq	%r8
	movq	%r8, -24(%rbp)
.L6:
	movq	$2, %r8
	movq	%r8, -40(%rbp)
.L7:
	movq	-40(%rbp), %r8
	movq	$9, %r9
	cmpq	%r9, %r8
	jl	.L9
	jmp	.L2
.L8:
	movq	-40(%rbp), %r8
	incq	%r8
	movq	%r8, -40(%rbp)
	jmp	.L7
.L9:
	movq	-40(%rbp), %r8
	movq	$3, %r9
	cmpq	%r9, %r8
	jg	.L10
	jmp	.L8
.L10:
	jmp	.L2
	jmp	.L8
	jmp	.L2
.L11:
	movq	-24(%rbp), %r8
	movq	%r8, %rsi
	leaq	.LC0(%rip), %rdi
	movq	$0, %rax
	call	printf@PLT
	movq	-8(%rbp), %r8
	movq	%r8, %rsi
	leaq	.LC0(%rip), %rdi
	movq	$0, %rax
	call	printf@PLT
	movq	-16(%rbp), %r8
	movq	%r8, %rsi
	leaq	.LC0(%rip), %rdi
	movq	$0, %rax
	call	printf@PLT
	movq	$0, %rdi
	call	malloc@PLT
	movq	%rax, %r8
	movq	%r8, -48(%rbp)
	movq	$5, %r8
	pushq	%r8
	movq	-48(%rbp), %r8
	pushq	%r8
	call	_fin.fib
	addq	$16, %rsp
	movq	%rax, %r8
	movq	%r8, %rsi
	leaq	.LC0(%rip), %rdi
	movq	$0, %rax
	call	printf@PLT
	movq	$0, %rax
	leave
	ret
_fin.fib:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$0, %rsp
	movq	24(%rbp), %r8
	movq	$1, %r9
	cmpq	%r9, %r8
	jle	.L12
	jmp	.L13
.L12:
	movq	$1, %r8
	movq	%r8, %rax
	leave
	ret
	jmp	.L14
.L13:
	movq	$7, %r8
	movq	%r8, %rax
	leave
	ret
.L14:
	leave
	ret
