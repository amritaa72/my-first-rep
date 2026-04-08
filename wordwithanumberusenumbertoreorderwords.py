def order(sentence):
    s=''
    d={}
    l=sentence.split()
    for word in l:
        for i in word:
            if (i.isdigit()==True):
                d[int(i)]=word
            else:
                continue
    for y in range(len(d)):
        if y== (len(d)-1):
            s+=d[y+1]
        else:
            s+=d[y+1]+' '
    #print(d)
    
    #for t in range(len(d)):
    #    print(d[t+1])
    
    #print(s)
    return s
