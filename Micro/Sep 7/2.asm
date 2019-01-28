LDA 5000H
CPI 3aH;s1 c1
jc numb
jnc char
numb: sui 30h;s0 c0
jmp start
char: sui 37h
start: sta 5001h
hlt