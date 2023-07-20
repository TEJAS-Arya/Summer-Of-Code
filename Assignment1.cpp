import numpy as np

arr=np.random.randint(20, size=16)
arr=arr.reshape((4,4))
print(arr)
# i)
i=0
diag_elements=[]
for i in range(4):
    diag_elements.append(arr[i][i])
diag_elements
    
    
#ii)

trace=sum(diag_elements)
trace
arr.max(axis=1)
arr.min(axis=1)
#part B
arr2=np.random.uniform(size=16)
arr2
arr2=arr2.reshape((4,4))
arr
arr2
arr*(arr2)
# Ques3
import pandas as pd
df=pd.read_csv('Data - STOCK_US_XNYS_CSV.csv')
df.tail()
df.head()
df.head(15)
type(df['Date'])
# Ques1
from math import sqrt
class array:
    def __init__(self):
        self.arr=np.array([])
        
        
    def get_array(self):
        
        n=int(input("Enter the number of elements in the array:"))
        dim=int(sqrt(n))
        emp=np.empty(n)
        for i in range(n):
            element=int(input(f"Enter the {i+1}th element of the array:"))
            emp[i]=element
        emp=emp.reshape((dim,dim))
        emp.sort()
       # print(emp)
        return(emp)
            
ar=array()
sorted_array=ar.get_array()
print(sorted_array)
import shutil
shutil.copy()
