.globl f
f:
addi sp, sp, -256
sw s0, 28(sp)
addi s0, sp, 256
sw a0, -64(s0)
lw a4, -64(s0)
sw a1, -68(s0)
lw a5, -68(s0)
lw t1, -64(s0)
sltu t2, a5, 1
or t4, t2, t3
xori a5, t4, 1
mv a0, a5
lw s0, 28(sp)
addi sp, sp, 256
jr ra
