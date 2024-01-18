import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier


def MarvellousWinePredictor(data_path):

    # step1
    data = pd.read_csv(data_path, index_col = 0)

    print("Size of Actual dataset", len(data))

    # step2
    feature_names = ['Alcohol','Malic acid','Ash','Alcalinity of ash','Magnesium','Total phenols','Flavanoids','Nonflavanoid phenols','Proanthocyanins','Color intensity','Hue','OD280/OD315 od diluted wines','Proline']

    print("Names of Features", feature_names)

    X_train, X_test, y_train,y_test=train_test_split(data.loc[:,data.columns!='Class'], data['Class'], stratify=data['Class'], random_state = 66)

    tree = DecisionTreeClassifier(random_state = 0)
    tree.fit(X_train, y_train)

    print("Accuracy on training set:{:.3f}".format(tree.score(X_train,y_train)))

    print("Accuracy on test set :{:.3f}".format(tree.score(X_test,y_test)))

    tree = DecisionTreeClassifier(max_depth = 3, random_state=0)
    tree.fit(X_train, y_train)

    print("Accuracy on training set:{:.3f}".format(tree.score(X_train,y_train)))

    print("Accuracy on test set :{:.3f}".format(tree.score(X_test,y_test)))

    print("Feature importances:\n{}".format(tree.feature_importances_))

    def plot_feature_importances_data(model):
        plt.figure(figsize=(6,3))
        n_features = 13
        plt.barh(range(n_features),model.feature_importances_,align='center')
        winw_features = [x for i,x in enumerate(data.columns) if i!=13]
        plt.yticks(np.arange(n_features), wine_features)
        plt.xlabel("Feature importance")
        plt.ylabel("Feature")
        plt.ylim(-1, n_features)
        plt.show()

    plot_feature_importances_data(tree)

    

def main():
    print("---Marvellous Infosystems by Piyush Khairnar----")

    print("Machine Leaning Application")

    print("Play predictor application using k Nearest knighbor algorithm")

    MarvellousWinePredictor("WinePredictor.csv")

if __name__ == "__main__":
    main()