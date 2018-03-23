#!/usr/bin/python

#Remove unbalanced parentheses in a given expression
def remove(s,index):
    s=s[:index]+s[index+1:]
    return s
    
def main():
         s=raw_input("string : ")
         start,stop=0,0
         while s[start:].find('(') != -1:
             
             index=s[start:].find('(')+start
            
             
             while s[stop:index].find(')')!=-1:
                 s=remove(s,s[stop:].find(')')+stop)
                 index-=1
              
             if s[stop:].find(')') == -1:
                 s=remove(s,index)
              
                 
             else:
                 stop=s[stop:].find(')')+stop+1
                 start=index+1
                
         while s[stop:].find(')')!= -1:
             s=remove(s,s[stop:].find(')')+stop)
             
         print "formatted string : ",s
if __name__=="__main__":
        main()
