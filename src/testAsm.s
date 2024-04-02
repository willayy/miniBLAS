.globl	testret2asm
testret2asm:
	pushq   %rbp
	movq    %rsp, %rbp
	movl    $2, %eax
	popq    %rbp
	ret
	

