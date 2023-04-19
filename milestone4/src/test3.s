	.section	.rodata
.LC0:
	.string "%ld\n"
	.text
	.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
	movq	$10, %r8
	movq	%r8, -8(%rbp)
	movq	$5, %r8
	movq	%r8, -16(%rbp)
	movq	-8(%rbp), %r8
	incq	%r8
	movq	%r8, -8(%rbp)
	movq	-16(%rbp), %r8
	decq	%r8
	movq	%r8, -16(%rbp)
	movq	$2, %r8
	movq	-8(%rbp), %r9
	imulq	%r8, %r9
	movq	%r9, -8(%rbp)
	movq	-16(%rbp), %r8
	movq	$2, %r9
	movq	%r9, %rcx
	salq	%rcx, %r8
	movq	%r8, -24(%rbp)
	movq	-8(%rbp), %r8
	movq	$2, %r9
	movq	%r9, %rcx
	sarq	%rcx, %r8
	movq	%r8, -32(%rbp)
	movq	$20, %r8
	movq	%r8, -8(%rbp)
	movq	$2, %r8
	movq	-8(%rbp), %r9
	movq	%r9, %rax
	cltd
	idivq	%r8
	movq	%rax, %r9
	movq	%r9, -8(%rbp)
	movq	$0, %rax
	leave
	ret
