	.section	.rodata
.LC0:
	.string "ld\n"
	.text
	.globl main
main:
	subq	$32, %rsp
	movq	$10, %r8
	movq	%r8, -8(%rbp)
	movq	$11, %r8
	movq	%r8, -16(%rbp)
	movq	$1, %r8
	movq	%r8, -24(%rbp)
	movq	-24(%rbp), %r8
	movq	-8(%rbp), %r9
	addq	%r9, %r8
	movq	-16(%rbp), %r9
	addq	%r9, %r8
	movq	%r8, -32(%rbp)
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
.L1:
	jmp	.L2
	movq	-8(%rbp), %r8
	decq	%r8
	movq	%r8, -8(%rbp)
.L2:
	jmp	.L3
	movq	-8(%rbp), %r8
	incq	%r8
.L3:
	movq	%r8, -8(%rbp)
	movq	-8(%rbp), %r8
	movq	-16(%rbp), %r9
	cmpq	%r9, %r8
	jl	.L7
.L4:
	jmp	.L4
	movq	-8(%rbp), %r8
	movq	$100, %r9
	cmpq	%r9, %r8
	jg	.L7
.L5:
	jmp	.L5
	movq	-8(%rbp), %r8
	movq	$5, %r9
	cmpq	%r9, %r8
	jl	.L7
.L6:
	jmp	.L6
	movq	-8(%rbp), %r8
	movq	$7, %r9
	cmpq	%r9, %r8
	jg	.L7
.L7:
	jmp	.L9
	movq	-8(%rbp), %r8
	movq	$3, %r9
	cmpq	%r9, %r8
	je	.L8
.L8:
	jmp	.L9
	movq	$3, %r8
	movq	-8(%rbp), %r9
	imulq	%r8, %r9
.L9:
	movq	%r9, -8(%rbp)
	leave
	ret
