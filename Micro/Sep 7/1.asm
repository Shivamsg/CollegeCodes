LDA 5000H
ANI 0FH;ac 1  p 1
CPI 09H;ac 0
jc numb
jnc char
numb: adi 30h
jmp start
char: adi 37h;ac 1  p 0
jmp start
start: sta 5001h
hlt