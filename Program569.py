from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import r2_score
import pandas as pd 
import matplotlib.pyplot as plt

def MarvellousLinearRegression():
    # data load
    data = pd.read_csv("Advertising.csv")

    print(data.head())

    # data cleaning
    #data.columns.str.match("Unnamed")
    #data.loc[:,~data.columns.str.match("Unnamed")]
    #data.drop("Unnamed : 0",axis=1)
    #print(data.head())

    x = data.drop(columns = 'sales')

    y  = data['sales']

    #Step 4 : Data Training

    xtrain, xtest, ytrain, ytest = train_test_split(x, y, test_size = 0.5)

    linmodel = LinearRegression()

    linmodel.fit(xtrain,ytrain)

    c = linmodel.intercept_
    print(c)

    m = linmodel.coef_
    print(m)

    y_pred_train = linmodel.predict(xtrain)
    print(y_pred_train) 

    plt.scatter(ytrain, y_pred_train)
    plt.xlabel("Actual Sales")
    plt.ylabel("Predicted sales")
    plt.show()

    Training_data = r2_score(ytrain, y_pred_train)
    print("Accuracy for traning set :",Training_data)

    y_pred_test = linmodel.predict(xtest)

    plt.scatter(ytest, y_pred_test)
    plt.xlabel("Actual Sales")
    plt.ylabel("Predicted sales")
    plt.show()

    Testing_data = r2_score(ytest, y_pred_test)
    print("Accuracy for testing set :",Testing_data)



def main():

    print("-----Marvellous Infosystems------")

    print("-----Advertisement Prediction-----")

    MarvellousLinearRegression()

if __name__=="__main__":
    main()