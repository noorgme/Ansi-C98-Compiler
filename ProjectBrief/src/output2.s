.globl f
f:
addi sp, sp, -256
sw s0, 28(sp)
addi s0, sp, 256
sw a0, -72(s0)
lw a4, -72(s0)
sw a1, -64(s0)
lw a5, -64(s0)
sw a2, -68(s0)
sgt a5, a4, a5
xori a5, a5, 1
andi a5, a5, 0xff
sw a5, -72(s0)
lw a5, -72(sp)
mv a0, a5
lw s0, 28(sp)
addi sp, sp, 256
jr ra
