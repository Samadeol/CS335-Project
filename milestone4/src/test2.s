	.section	.rodata
.LC0:
	.string "%ld\n"
	.text
	.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$40, %rsp
	movq	$5, %r8
	movq	%r8, -8(%rbp)
	movq	$5, %r8
	movq	$8, %r9
	pushq	%r9
	movq	-48(%rbp), %r9
	imulq	%r9, %r8
	movq	%r8, %rdi
	call	malloc@PLT
	movq	%rax, %r8
	movq	$0, %r8
	movq	-48(%rbp), %r9
	imulq	%r8, %r9
	movq	$5, %r8
	movq	-16(%rbp), %r10
	addq	$5, %r10
	movq	%r8, (%r10)
	movq	$1, %r8
	movq	-48(%rbp), %r10
	imulq	%r8, %r10
	movq	$3, %r8
	movq	-16(%rbp), %r11
	addq	$8, %r11
	movq	%r8, (%r11)
	movq	$2, %r8
	movq	-48(%rbp), %r11
	imulq	%r8, %r11
	movq	$6, %r8
	movq	-16(%rbp), %r12
	addq	$11, %r12
	movq	%r8, (%r12)
	movq	$3, %r8
	movq	-48(%rbp), %r12
	imulq	%r8, %r12
	movq	$2, %r8
	negq	%r8
	movq	-16(%rbp), %r13
	addq	$14, %r13
	movq	%r8, (%r13)
	movq	$4, %r8
	movq	-48(%rbp), %r13
	imulq	%r8, %r13
	movq	$3, %r8
	movq	-16(%rbp), %r14
	addq	$18, %r14
	movq	%r8, (%r14)
	movq	$0, %r8
	movq	%r8, -24(%rbp)
	movq	$0, %r8
	movq	%r8, -32(%rbp)
.L1:
	movq	-32(%rbp), %r8
	movq	-8(%rbp), %r14
	cmpq	%r14, %r8
	jl	.L3
	jmp	.L9
.L2:
	movq	-32(%rbp), %r8
	incq	%r8
	movq	%r8, -32(%rbp)
	jmp	.L1
.L3:
	movq	$1, %r8
	movq	%r8, -40(%rbp)
.L4:
	movq	-40(%rbp), %r8
	movq	-8(%rbp), %r14
	movq	-32(%rbp), %r15
	subq	%r15, %r14
	cmpq	%r14, %r8
	jl	.L6
	jmp	.L8
.L5:
	movq	-40(%rbp), %r8
	incq	%r8
	movq	%r8, -40(%rbp)
	jmp	.L4
.L6:
	movq	-40(%rbp), %r8
	movq	$1, %r14
	subq	%r14, %r8
	movq	-48(%rbp), %r14
	imulq	%r8, %r14
	movq	-16(%rbp), %r8
	addq	$34, %r8
	movq	(%r8), %r15
	movq	-40(%rbp), %r8
	pushq	%r8
	movq	-48(%rbp), %r8
	pushq	%r9
	movq	-56(%rbp), %r9
	imulq	%r9, %r8
	movq	-16(%rbp), %r9
	addq	$37, %r9
	pushq	%r8
	movq	(%r9), %r8
	cmpq	%r8, %r15
	jg	.L7
	jmp	.L5
.L7:
	movq	-40(%rbp), %r8
	movq	$1, %r9
	subq	%r9, %r8
	movq	-48(%rbp), %r9
	imulq	%r8, %r9
	movq	-16(%rbp), %r8
	addq	$42, %r8
	movq	(%r8), %r15
	movq	%r15, -24(%rbp)
	movq	-40(%rbp), %r8
	movq	$1, %r15
	subq	%r15, %r8
	movq	-48(%rbp), %r15
	imulq	%r8, %r15
	movq	-40(%rbp), %r8
	pushq	%r8
	movq	-48(%rbp), %r8
	pushq	%r9
	movq	-80(%rbp), %r9
	imulq	%r9, %r8
	movq	-16(%rbp), %r9
	addq	$49, %r9
	pushq	%r8
	movq	(%r9), %r8
	movq	-16(%rbp), %r9
	addq	$47, %r9
	movq	%r8, (%r9)
	movq	-40(%rbp), %r8
	movq	-48(%rbp), %r9
	imulq	%r8, %r9
	movq	-24(%rbp), %r8
	pushq	%r8
	movq	-16(%rbp), %r8
	addq	$52, %r8
	pushq	%r8
	movq	-104(%rbp), %r8
	movq	%r8, (%r8)
	jmp	.L5
.L8:
	movq	-32(%rbp), %r8
	pushq	%r8
	movq	-48(%rbp), %r8
	pushq	%r9
	movq	-120(%rbp), %r9
	imulq	%r9, %r8
	movq	-16(%rbp), %r9
	addq	$55, %r9
	pushq	%r8
	movq	(%r9), %r8
	movq	%r8, %rsi
	leaq	.LC0(%rip), %rdi
	movq	$0, %rax
	call	printf@PLT
	jmp	.L2
.L9:
	movq	$0, %rax
	leave
	ret
