	.section	.rodata
.LC0:
	.string "%ld\n"
	.text
	.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	movq	$10, %r8
	movq	%r8, -8(%rbp)
	movq	$11, %r8
	movq	%r8, -16(%rbp)
	movq	$1, %r8
	movq	-8(%rbp), %r9
	addq	%r8, %r9
	movq	%r9, -8(%rbp)
	movq	-16(%rbp), %r8
	movq	%r8, -8(%rbp)
	movq	-16(%rbp), %r8
	movq	$3, %r9
	addq	%r9, %r8
	movq	%r8, -8(%rbp)
	movq	-8(%rbp), %r8
	movq	$10, %r9
	cmpq	%r9, %r8
	jl	.L1
	jmp	.L2
.L1:
	movq	-8(%rbp), %r8
	movq	$1, %r9
	subq	%r9, %r8
	movq	%r8, -8(%rbp)
	jmp	.L3
.L2:
	movq	-8(%rbp), %r8
	movq	$1, %r9
	addq	%r9, %r8
	movq	%r8, -8(%rbp)
.L3:
	movq	-8(%rbp), %r8
	movq	-16(%rbp), %r9
	cmpq	%r9, %r8
	jl	.L7
	jmp	.L4
.L4:
	movq	-8(%rbp), %r8
	movq	$100, %r9
	cmpq	%r9, %r8
	jg	.L7
	jmp	.L5
.L5:
	movq	-8(%rbp), %r8
	movq	$5, %r9
	cmpq	%r9, %r8
	jl	.L7
	jmp	.L6
.L6:
	movq	-8(%rbp), %r8
	movq	$7, %r9
	cmpq	%r9, %r8
	jg	.L7
	jmp	.L9
.L7:
	movq	-8(%rbp), %r8
	movq	$3, %r9
	cmpq	%r9, %r8
	jne	.L8
	jmp	.L9
.L8:
	movq	$3, %r8
	movq	-8(%rbp), %r9
	imulq	%r8, %r9
	movq	%r9, -8(%rbp)
.L9:
	movq	-8(%rbp), %r8
	movq	%r8, %rsi
	leaq	.LC0(%rip), %rdi
	movq	$0, %rax
	call	printf@PLT
	movq	$0, %rax
	leave
	ret
