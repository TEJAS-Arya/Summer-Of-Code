import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LogisticRegression

df = pd.read_csv('D:\VSCODE\machine learning\corrected train set.csv')
# print(df.tail())
# print(df.head())
# df.dropna(inplace=True)
# df.interpolate(inplace=True)
y = df['failure']
# print(y)
X = df.iloc[:, 5:-2]
X['loading'] =df['loading']
# print(y)
# print(X)

# print(X.keys())
keys=X.keys()
for key in keys:
    mean_value = X[key].mean()
    X[key].fillna(mean_value, inplace=True)
# 
# X.dropna(inplace=True)
# for key in keys:
#     has_nan = X['attribute_2'].isna().any().any()
#     print(has_nan)
clf = LogisticRegression(max_iter=1000)
clf.fit(X, y)

df1=pd.read_csv('D:\VSCODE\machine learning\week 1 test.csv')
x_test=df1.iloc[:, 5:-1]
x_test['loading']=df1['loading']
# print(x_test.keys())
# x_test.dropna(inplace=True)
keys1=x_test.keys()
for key in keys1:
    mean_value = X[key].mean()
    x_test[key].fillna(mean_value, inplace=True)
y_pred=clf.predict(x_test)
# if 1 in y_pred:
#     print(True)
# else:
#     print(False)

