.globl f
f:
addi sp, sp, -256 //increment stack pointer to make space for function frame
sw s0, 252(sp) //store previous frame pointer on the stack
addi s0, sp, 256 //set new framepointer to start of new frame (stack pointer +256)
sw a5, -64(sp) //store 
mv t0, a0
sw a5, -68(sp)
mv t1, a0
add a0, t0, t1
mv a0, a5
lw s0, 28(sp)
addi sp, sp, 256
jr ra
