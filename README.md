# DeLuxing

DeLuxing is a novel variable-fixing method developed in the paper [_DeLuxing: Deep Lagrangian Underestimate Fixing for
Column-Generation-Based Exact Methods_](https://optimization-online.org/?p=24217), published in *Operations Research*. This method enhances computational efficiency for column generation-based algorithms by fixing most of the enumerated variables (columns). DeLuxing calls Gurobi, a third-party commercial MIP solver, to solve the LPs within the function. Please ensure you have the appropriate Gurobi license to use this functionality.

<br>


**Input**:
* LP model (lp): The linear programming model to be optimized.
* Upper Bound (UB): A given upper bound for the objective.
* Number of Clusters (NClust): The number of clusters for initial variable grouping.
* Threshold Parameters (beta1, beta2):
	* beta1: Controls the use of the K-means method for initial clustering.
	* beta2: Determines when to stop the deep search within each cluster.
* Tolerance: Computational precision.
* Verbose: Output switch to control the level of detail in the computational log.


<br>


**Output**:
* Idxdel: A set of indices for the variables that can be deleted.

<br>


**How to Use**:

* main.cpp, which demonstrates how to use the DeLuxing function.
* A Makefile to compile the example.
* An example "RC207.lp" file.


If you use this library for your research, please cite our paper.
