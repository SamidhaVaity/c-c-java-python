import pandas as pd 
import numpy as np
import matplotlib.pyplot as plt 
from sklearn.neighbors import KNeighborsClassifier
from sklearn.model_selection import train_test_split 

def WinePredictor():
    data = pd.read_csv('WinePredictor.csv')

    print("Columns of Dataset")
    print(data.columns)

    print("First 5 records of dataset")
    print(data.head())

    print("Dimension of diabetes data : {}".format(data.shape))

    X_train, X_test, y_train, y_test = train_test_split(data.loc[:,data.columns!='Class'], data['Class'],test_size = 0.3)

    training_accuracy = []
    test_accuracy = []

    #try n_neighbors from 1 to 10
    neighbors_settings = range(1,11)

    for n_neighbors in neighbors_settings:
        #build the model
        knn = KNeighborsClassifier(n_neighbors=n_neighbors)
        knn.fit(X_train, y_train)
        #record train set accuracy
        training_accuracy.append(knn.score(X_train, y_train))
        # record teest set accuracy
        test_accuracy.append(knn.score(X_test, y_test))

    plt.plot(neighbors_settings, training_accuracy, label ="Training accuracy")
    plt.plot(neighbors_settings, test_accuracy, label ="Test accuracy")
    plt.ylabel("Accuracy")
    plt.xlabel("n_neighbors")
    plt.legend()
    plt.savefig('Knn_compare_model')
    plt.show()

    knn = KNeighborsClassifier(n_neighbors = 3)

    knn.fit(X_train, y_train)

    print('Accuracy of K_NN Classifier on training set : {:.2f}'.format(knn.score(X_train,y_train)))

    print('Accuracy of K_NN Classifier on test set : {:.2f}'.format(knn.score(X_test,y_test)))


def main():
    print("----Marvellous Infosystem by Piyush Khairnar------")

    print("-----Wine Predictor using K nearest neighbour------")

    WinePredictor()

if __name__=="__main__":
    main()
