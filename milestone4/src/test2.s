	.section	.rodata
.LC0:
	.string "%ld\n"
	.text
	.globl main
.L1:
_HelloWorld.fib:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$0, %rsp
	movq	24(%rbp), %r8
	movq	$1, %r9
	cmpq	%r9, %r8
	jle	.L2
	jmp	.L1
.L2:
	movq	$1, %r8
	movq	%r8, %rax
	leave
	ret
	jmp	.L3
	movq	24(%rbp), %r8
	movq	$1, %r9
	subq	%r9, %r8
	pushq	%r8
	movq	16(%rbp), %r8
	pushq	%r8
	call	_HelloWorld.fib
	addq	$16, %rsp
	movq	24(%rbp), %r8
	movq	$2, %r9
	subq	%r9, %r8
	pushq	%r8
	movq	16(%rbp), %r8
	pushq	%r8
	call	_HelloWorld.fib
	addq	$16, %rsp
	movq
	movq
	addq	%r8, %r8
	movq	%r8, %rax
	leave
	ret
.L3:
	leave
	ret
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$40, %rsp
	movq	$1, %r8
	movq	%r8, -8(%rbp)
	movq	$2, %r8
	movq	%r8, -16(%rbp)
	movq	$10, %r8
	movq	%r8, -24(%rbp)
	movq	$4, %r8
	movq	%r8, -32(%rbp)
.L4:
	movq	-32(%rbp), %r8
	movq	$5, %r9
	cmpq	%r9, %r8
	jl	.L6
	jmp	.L14
.L5:
	movq	-32(%rbp), %r8
	incq	%r8
	movq	%r8, -32(%rbp)
	jmp	.L4
.L6:
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
	jg	.L7
	jmp	.L8
.L7:
	jmp	.L14
	jmp	.L9
.L8:
	movq	$1, %r8
	movq	%r8, -16(%rbp)
	movq	-24(%rbp), %r8
	incq	%r8
	movq	%r8, -24(%rbp)
.L9:
	movq	$2, %r8
	movq	%r8, -40(%rbp)
.L10:
	movq	-40(%rbp), %r8
	movq	$9, %r9
	cmpq	%r9, %r8
	jl	.L12
	jmp	.L5
.L11:
	movq	-40(%rbp), %r8
	incq	%r8
	movq	%r8, -40(%rbp)
	jmp	.L10
.L12:
	movq	-40(%rbp), %r8
	movq	$3, %r9
	cmpq	%r9, %r8
	jg	.L13
	jmp	.L11
.L13:
	jmp	.L5
	jmp	.L11
	jmp	.L5
.L14:
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
	movq	$5, %r8
	pushq	%r8
	movq	16(%rbp), %r8
	pushq	%r8
	call	_HelloWorld.fib
	addq	$16, %rsp
	movq
	leaq	.LC0(%rip), %rdi
	movq	$0, %rax
	call	printf@PLT
	movq	$0, %rax
	leave
	ret
