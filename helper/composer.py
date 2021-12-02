import glob
import sys, os, base64, datetime, hashlib, hmac 
import shutil



def run(lab):
    for x in glob.glob('./'+lab+'/problems/*'):
        names = []
        for z in glob.glob(x + "/statement-sections/english/name.tex"):
            with open(z, 'r') as readfile:
                names.append(readfile.readline().split('.')[0])
                
        if len(names) == 1:
            found = False
            for y in glob.glob(x + "/solutions/*.cpp"): 
                found = True
                shutil.copy2(y, '/Users/bsnbk/Documents/kbtu/pp1/lab-solutions/'+lab + '/' + names[0]+'.cpp') 
                break
            if found == False:
                print(names[0])
        else:
            print("err  or")
    


run('lab3')
run('lab4')
run('lab5')
run('lab6')
run('lab7')
run('lab8')
run('lab11')

