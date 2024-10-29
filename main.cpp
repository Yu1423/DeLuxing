#include <sys/time.h>
#include <fstream>
#include <glob.h>
#include <iomanip>
#include "Kmeans.cpp"
#include "gurobi_c.h"
#include "DeLuxing.hpp"


#define TOLERANCE 1e-5
#define NCLUSTER 50
#define BETA1 50000000
#define BETA2 50
#define PRINTDEC 2


using namespace std;






int main(){
	
	GRBenv* env;
	GRBmodel *lp;
	GRBloadenv(&env, NULL);
	GRBsetintparam(env, "OutputFlag", 0);
	cout << setprecision(PRINTDEC) << std::fixed;

    	GRBreadmodel(env, "RC207.lp", &lp);
    	double UB = 1641.3708;
	vector<int> Idxdel;
	deLuxing(lp, UB, NCLUSTER, BETA1, BETA2, Idxdel, TOLERANCE, true);
	GRBfreemodel(lp);
	GRBfreeenv(env);
}
