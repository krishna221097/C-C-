	.file	"array1.c"
	.section	.rodata
.LC0:
	.string	"values:"
.LC1:
	.string	"%d\t"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$36, %esp
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	movl	$1, -32(%ebp)
	movl	$2, -28(%ebp)
	movl	$3, -24(%ebp)
	movl	$4, -20(%ebp)
	movl	$5, -16(%ebp)
	subl	$12, %esp
	pushl	$.LC0
	call	printf
	addl	$16, %esp
	movl	$0, -36(%ebp)
	jmp	.L2
.L3:
	movl	-36(%ebp), %eax
	movl	-32(%ebp,%eax,4), %edx
	movl	-36(%ebp), %eax
	movl	-32(%ebp,%eax,4), %eax
	imull	%eax, %edx
	movl	-36(%ebp), %eax
	movl	%edx, -32(%ebp,%eax,4)
	movl	-36(%ebp), %eax
	movl	-32(%ebp,%eax,4), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC1
	call	printf
	addl	$16, %esp
	addl	$1, -36(%ebp)
.L2:
	cmpl	$4, -36(%ebp)
	jle	.L3
	movl	$0, %eax
	movl	-12(%ebp), %ecx
	xorl	%gs:20, %ecx
	je	.L5
	call	__stack_chk_fail
.L5:
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.3.1-14ubuntu2) 5.3.1 20160413"
	.section	.note.GNU-stack,"",@progbits
