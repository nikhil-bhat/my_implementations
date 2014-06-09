'''
Created on 06-Jun-2014

@author: linux_dev

'''
from bs4 import BeautifulSoup
from time import sleep
import urllib
def strip_brackets(string):
    
        string = "" + str(string)
        #print "input: ",string
        d = 0
        k = 0
        out = ''
        for i in string:
            #check for tag when not in parantheses mode
            if d < 1:
                if i == '>':
                    k-=1
                    
                if i =="<":
                    k +=  1
                
            #check for parentheses
            if k < 1:
                if i == '(':
                        d += 1
    
                if d > 0:
                        out += ' '
                else:
                        out += i
    
                if i == ')' :
                        d -= 1
            else:
                out +=i
        
        #print "output: ",out
        return out


def gotonexturl(url):
    sleep(1)
    Soup=BeautifulSoup(urllib.urlopen(url).read())
    print Soup.title.text,"\n"
    divContent=Soup.find(id="mw-content-text")
    para=divContent.find_all('p')
    sanitized=strip_brackets(para[0])
    soup=BeautifulSoup(sanitized)

    try:
        soup.span.decompose()
        soup.sup.decompose()
        soup.table.decompose()
        pass
    except:
        pass
    
    print "going to the next url"
    new1=soup.find('a',href=True)
    newurl="http://en.wikipedia.org"+new1['href']
    if newurl=="http://en.wikipedia.org/wiki/Philosophy":
        print "found philosphy",'\n'
        pass
    else:
        gotonexturl(newurl)
        pass
    pass

      
  
    
if __name__ == '__main__':
    url=raw_input('enter a wikipedia url\n')
    print url
    gotonexturl(url)
    
    
    
        
        
    