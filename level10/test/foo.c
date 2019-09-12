
int function(int a, int b)
{
	return (a + b);
}

//64 --> r
func1:
	push rbp
	mov	rbp, rsp
	
	mov	rax, rdi 
	add rax, rsi

	mov rsp, rbp
	pop rbp
	ret
	

//32 --> e
push 42
push 2


sub esp, 0x8
mov	[esp], 2
mov [esp + 4], 42
call func2 // -> push eip ; jmp func2

func2:				-------------------------------> 
x	push ebp
	mov	ebp, esp

	sub esp, 0x10
	
	mov eax, [ebp + 0x8]
	add eax, [ebp + 0xc]

	mov esp, ebp
	pop ebp
	ret	// -> pop eip ; jmp eip


////////////////////////
//	ebp main -----
...
...
42
2
eip (backup)
ebp (backup) <-- ebp






			< -->esp

