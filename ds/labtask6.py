tos = 0
arr = [] 

def push(x):
    global tos
    if (tos>=7):
        print("Stack Overflow")
    
    else:
        arr[tos] = x
        tos += 1


def pop():
    global tos
    if(tos<=0):
        print("Stack empty")
    
    else:
        y = arr[tos]
        tos -= 1
        return y
    



word = input()

print(word);

# for(int i=0;i<length;i++):
 #   // if(word[i] == "+" || word[i] == "-" || word[i] == "*" ||word[i] == "/" ){
for i in range(len(word)):
    if(int(word[i]) >=0 or int(word[i]) <=9 ):
        print(word[i])
        push(word[i])

    else:
        val2 = pop()
        val1 = pop()
        print(val1,val2)
        x = int(val2)
        y = int(val1)

        if word[i] == "+":
            push(x+y)
        elif word[i] == "-":
            push(x-y)
        elif word[i] == "*":
            push(x*y)
        elif word[i] == "/":
            push(x/y)
    
    
    


# print("ans is : %d\n"%(arr[0]));

# 53+82-*
