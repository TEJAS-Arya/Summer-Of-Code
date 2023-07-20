import numpy as np
def compute_gradient_descent(x_train, y_train, w_init, b_init, alpha, num_iters):
    m=len(x_train)       
    for i in range(num_iters):
        y_predict=w_init*x_train+b_init
        j=((1/2)*m)*(np.sum(np.square(y_predict-y_train)))
        djdw=(1/m)*(np.sum((y_predict-y_train)*x_train))
        djdb=(1/m)*(np.sum(y_predict-y_train))
        w_init=w_init-alpha*djdw
        b_init=b_init-alpha*djdb
    print(w_init,b_init)

    
    
years=np.array([1,3,5])
salary=np.array([300,480,570])
compute_gradient_descent(years, salary, 0, 0, 0.01, 1000)
