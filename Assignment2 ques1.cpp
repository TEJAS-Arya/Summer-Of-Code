import numpy as np
import matplotlib.pyplot as plt
# from sklearn.metrics import mean_squared_error
years=np.array([1,3,5])
salary=np.array([300,480,570])
plt.scatter(years, salary)
plt.xlabel('No. of years experience ')
plt.ylabel('Salary')
plt.title('no. of years of experience and corresponding salary of employees')
# plt.show()
def compute_cost(x_data, y_data, w, b):
    y_predict=w*x_data+b
    total_cost=np.sum(np.square(y_predict-y_data))
    return total_cost

def compute_gradient(x_data, y_data, w, b):
    m=len(x_data)
    y_predict=w*x_data+b
    j=(1/2*m)*(np.sum(np.square(y_predict-y_data)))
    djdw=(1/m)*(np.sum(y_predict-y_data)*X)
    djdb=(1/m)*(np.sum(y_predict-y_data))
    return djdw,djdb
    

totalcost=compute_cost(years, salary, 200, 100)
djdw,djdb=compute_gradient(years, salary, 200, 100)
print(djdw,djdb)
print(totalcost)
