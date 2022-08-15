mov ax, 0b800h
mov ds, ax

mov byte [0x00],'H'
mov byte [0x02],'E'
mov byte [0x04],'L'
mov byte [0x06],'L'
mov byte [0x08],'O'
mov byte [0x0a],0x20
mov byte [0x0c],'W'
mov byte [0x0e],'O'
mov byte [0x10],'R'
mov byte [0x12],'L'
mov byte [0x14],'D'
mov byte [0x16],'!'

jmp $

times 510-($-$$) db 0
db 0x55,0xaa