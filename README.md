# Advanced-Programming-Roy-Yinon
Advanced Programming project
# The KNN algorithm:
We used the KNN (k nearest neighbors) to classify irises by finding the k nearest neighbors and classify by the most of them.
At this project we also have 3 distance funcs that we use to find the k nearest neighbors (euclidean, chebyshev and manhattan).
To get the closest k neighbors (Iris) we used the distance function to find the ditances from the unclassified Iris to all of the classified and then 
we got the minimum distance k times.
# How to run the project:
At lines:5,7,11,13 and 15, there is a places to write the paths of files according to the appropriate comments (each comment for the previous line).
After writing the right paths, you should compile all the files together, and then run the program with one argument for the "k" of the KNN algorithm.

# The compilation:
In order to compile the project you should use the command:
g++ *.cpp -std=c++11 -o main.exe

And after compiling you should run the project with the command:
./main.exe k
when k is the k from the knn algorithm.
