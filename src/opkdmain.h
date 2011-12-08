extern dlsode_(void (*f)(const int * neq, const double *t, const double *y, double *ydot), \
	       const int *neq, double *y, double *t, const double *tout, \
	       const int *itol, const double *rtol, const double *atol,	\
	       const int *itask, int *istate, const int *iopt,		\
	       double *rwork, const int *lrw, int *iwork, const int *liw,\
	       void (*jac)(const int *neq, const double *t, const double *y, const int *ml, const int *mu, double *pd, const int *nrowpd), \
	       const int *mf);

extern dlsodes_(void (*f)(const int *neq, const double *t, const double *y, double *ydot),\
		const int *neq, double *y, double *t, const double *tout, \
		const int *itol, const double *rtol, const double *atol, \
		const int *itask, int *istate, const int *iopt,		\
		double *rwork, const int *lrw, int *iwork, const int *liw, \
		void (*jac)(const int *neq, const double *t, const double *y, const int *j, const int *ian, const int *jan, double *pdj), \
		const int *mf);
