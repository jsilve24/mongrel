// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// conjugateLinearModel
List conjugateLinearModel(const Eigen::Map<Eigen::MatrixXd> Y, const Eigen::Map<Eigen::MatrixXd> X, const Eigen::Map<Eigen::MatrixXd> Theta, const Eigen::Map<Eigen::MatrixXd> Gamma, const Eigen::Map<Eigen::MatrixXd> Xi, const double upsilon, int n_samples);
RcppExport SEXP _mongrel_conjugateLinearModel(SEXP YSEXP, SEXP XSEXP, SEXP ThetaSEXP, SEXP GammaSEXP, SEXP XiSEXP, SEXP upsilonSEXP, SEXP n_samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Xi(XiSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(conjugateLinearModel(Y, X, Theta, Gamma, Xi, upsilon, n_samples));
    return rcpp_result_gen;
END_RCPP
}
// optimMaltipooCollapsed
List optimMaltipooCollapsed(const Eigen::ArrayXXd Y, const double upsilon, const Eigen::MatrixXd Theta, const Eigen::MatrixXd X, const Eigen::MatrixXd K, const Eigen::MatrixXd U, Eigen::MatrixXd init, Eigen::VectorXd ellinit, int n_samples, bool calcGradHess, double b1, double b2, double step_size, double epsilon, double eps_f, double eps_g, int max_iter, bool verbose, int verbose_rate, String decomp_method, double eigvalthresh, double jitter, bool calcPartialHess);
RcppExport SEXP _mongrel_optimMaltipooCollapsed(SEXP YSEXP, SEXP upsilonSEXP, SEXP ThetaSEXP, SEXP XSEXP, SEXP KSEXP, SEXP USEXP, SEXP initSEXP, SEXP ellinitSEXP, SEXP n_samplesSEXP, SEXP calcGradHessSEXP, SEXP b1SEXP, SEXP b2SEXP, SEXP step_sizeSEXP, SEXP epsilonSEXP, SEXP eps_fSEXP, SEXP eps_gSEXP, SEXP max_iterSEXP, SEXP verboseSEXP, SEXP verbose_rateSEXP, SEXP decomp_methodSEXP, SEXP eigvalthreshSEXP, SEXP jitterSEXP, SEXP calcPartialHessSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type K(KSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type U(USEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type init(initSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type ellinit(ellinitSEXP);
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< bool >::type calcGradHess(calcGradHessSEXP);
    Rcpp::traits::input_parameter< double >::type b1(b1SEXP);
    Rcpp::traits::input_parameter< double >::type b2(b2SEXP);
    Rcpp::traits::input_parameter< double >::type step_size(step_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type eps_f(eps_fSEXP);
    Rcpp::traits::input_parameter< double >::type eps_g(eps_gSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type verbose_rate(verbose_rateSEXP);
    Rcpp::traits::input_parameter< String >::type decomp_method(decomp_methodSEXP);
    Rcpp::traits::input_parameter< double >::type eigvalthresh(eigvalthreshSEXP);
    Rcpp::traits::input_parameter< double >::type jitter(jitterSEXP);
    Rcpp::traits::input_parameter< bool >::type calcPartialHess(calcPartialHessSEXP);
    rcpp_result_gen = Rcpp::wrap(optimMaltipooCollapsed(Y, upsilon, Theta, X, K, U, init, ellinit, n_samples, calcGradHess, b1, b2, step_size, epsilon, eps_f, eps_g, max_iter, verbose, verbose_rate, decomp_method, eigvalthresh, jitter, calcPartialHess));
    return rcpp_result_gen;
END_RCPP
}
// loglikMongrelCollapsed
double loglikMongrelCollapsed(const Eigen::ArrayXXd Y, const double upsilon, const Eigen::MatrixXd ThetaX, const Eigen::MatrixXd K, const Eigen::MatrixXd A, Eigen::MatrixXd eta, bool sylv);
RcppExport SEXP _mongrel_loglikMongrelCollapsed(SEXP YSEXP, SEXP upsilonSEXP, SEXP ThetaXSEXP, SEXP KSEXP, SEXP ASEXP, SEXP etaSEXP, SEXP sylvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type ThetaX(ThetaXSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type K(KSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< bool >::type sylv(sylvSEXP);
    rcpp_result_gen = Rcpp::wrap(loglikMongrelCollapsed(Y, upsilon, ThetaX, K, A, eta, sylv));
    return rcpp_result_gen;
END_RCPP
}
// gradMongrelCollapsed
Eigen::VectorXd gradMongrelCollapsed(const Eigen::ArrayXXd Y, const double upsilon, const Eigen::MatrixXd ThetaX, const Eigen::MatrixXd K, const Eigen::MatrixXd A, Eigen::MatrixXd eta, bool sylv);
RcppExport SEXP _mongrel_gradMongrelCollapsed(SEXP YSEXP, SEXP upsilonSEXP, SEXP ThetaXSEXP, SEXP KSEXP, SEXP ASEXP, SEXP etaSEXP, SEXP sylvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type ThetaX(ThetaXSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type K(KSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< bool >::type sylv(sylvSEXP);
    rcpp_result_gen = Rcpp::wrap(gradMongrelCollapsed(Y, upsilon, ThetaX, K, A, eta, sylv));
    return rcpp_result_gen;
END_RCPP
}
// hessMongrelCollapsed
Eigen::MatrixXd hessMongrelCollapsed(const Eigen::ArrayXXd Y, const double upsilon, const Eigen::MatrixXd ThetaX, const Eigen::MatrixXd K, const Eigen::MatrixXd A, Eigen::MatrixXd eta, bool sylv);
RcppExport SEXP _mongrel_hessMongrelCollapsed(SEXP YSEXP, SEXP upsilonSEXP, SEXP ThetaXSEXP, SEXP KSEXP, SEXP ASEXP, SEXP etaSEXP, SEXP sylvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type ThetaX(ThetaXSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type K(KSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< bool >::type sylv(sylvSEXP);
    rcpp_result_gen = Rcpp::wrap(hessMongrelCollapsed(Y, upsilon, ThetaX, K, A, eta, sylv));
    return rcpp_result_gen;
END_RCPP
}
// hessVectorProd
Eigen::VectorXd hessVectorProd(const Eigen::ArrayXXd Y, const double upsilon, const Eigen::MatrixXd ThetaX, const Eigen::MatrixXd K, const Eigen::MatrixXd A, Eigen::MatrixXd eta, Eigen::VectorXd v, double r, bool sylv);
RcppExport SEXP _mongrel_hessVectorProd(SEXP YSEXP, SEXP upsilonSEXP, SEXP ThetaXSEXP, SEXP KSEXP, SEXP ASEXP, SEXP etaSEXP, SEXP vSEXP, SEXP rSEXP, SEXP sylvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type ThetaX(ThetaXSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type K(KSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type v(vSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< bool >::type sylv(sylvSEXP);
    rcpp_result_gen = Rcpp::wrap(hessVectorProd(Y, upsilon, ThetaX, K, A, eta, v, r, sylv));
    return rcpp_result_gen;
END_RCPP
}
// lineSearch
Eigen::VectorXd lineSearch(const Eigen::ArrayXXd Y, const double upsilon, const Eigen::MatrixXd ThetaX, const Eigen::MatrixXd K, const Eigen::MatrixXd A, Eigen::MatrixXd eta, int direction, double rho, double c);
RcppExport SEXP _mongrel_lineSearch(SEXP YSEXP, SEXP upsilonSEXP, SEXP ThetaXSEXP, SEXP KSEXP, SEXP ASEXP, SEXP etaSEXP, SEXP directionSEXP, SEXP rhoSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type ThetaX(ThetaXSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type K(KSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< int >::type direction(directionSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(lineSearch(Y, upsilon, ThetaX, K, A, eta, direction, rho, c));
    return rcpp_result_gen;
END_RCPP
}
// optimMongrelCollapsed
List optimMongrelCollapsed(const Eigen::ArrayXXd Y, const double upsilon, const Eigen::MatrixXd ThetaX, const Eigen::MatrixXd K, const Eigen::MatrixXd A, Eigen::MatrixXd init, int n_samples, bool calcGradHess, double b1, double b2, double step_size, double epsilon, double eps_f, double eps_g, int max_iter, bool verbose, int verbose_rate, String decomp_method, String optim_method, double eigvalthresh, double jitter, bool calcPartialHess, double multDirichletBoot, bool useSylv);
RcppExport SEXP _mongrel_optimMongrelCollapsed(SEXP YSEXP, SEXP upsilonSEXP, SEXP ThetaXSEXP, SEXP KSEXP, SEXP ASEXP, SEXP initSEXP, SEXP n_samplesSEXP, SEXP calcGradHessSEXP, SEXP b1SEXP, SEXP b2SEXP, SEXP step_sizeSEXP, SEXP epsilonSEXP, SEXP eps_fSEXP, SEXP eps_gSEXP, SEXP max_iterSEXP, SEXP verboseSEXP, SEXP verbose_rateSEXP, SEXP decomp_methodSEXP, SEXP optim_methodSEXP, SEXP eigvalthreshSEXP, SEXP jitterSEXP, SEXP calcPartialHessSEXP, SEXP multDirichletBootSEXP, SEXP useSylvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type ThetaX(ThetaXSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type K(KSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type init(initSEXP);
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< bool >::type calcGradHess(calcGradHessSEXP);
    Rcpp::traits::input_parameter< double >::type b1(b1SEXP);
    Rcpp::traits::input_parameter< double >::type b2(b2SEXP);
    Rcpp::traits::input_parameter< double >::type step_size(step_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type eps_f(eps_fSEXP);
    Rcpp::traits::input_parameter< double >::type eps_g(eps_gSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type verbose_rate(verbose_rateSEXP);
    Rcpp::traits::input_parameter< String >::type decomp_method(decomp_methodSEXP);
    Rcpp::traits::input_parameter< String >::type optim_method(optim_methodSEXP);
    Rcpp::traits::input_parameter< double >::type eigvalthresh(eigvalthreshSEXP);
    Rcpp::traits::input_parameter< double >::type jitter(jitterSEXP);
    Rcpp::traits::input_parameter< bool >::type calcPartialHess(calcPartialHessSEXP);
    Rcpp::traits::input_parameter< double >::type multDirichletBoot(multDirichletBootSEXP);
    Rcpp::traits::input_parameter< bool >::type useSylv(useSylvSEXP);
    rcpp_result_gen = Rcpp::wrap(optimMongrelCollapsed(Y, upsilon, ThetaX, K, A, init, n_samples, calcGradHess, b1, b2, step_size, epsilon, eps_f, eps_g, max_iter, verbose, verbose_rate, decomp_method, optim_method, eigvalthresh, jitter, calcPartialHess, multDirichletBoot, useSylv));
    return rcpp_result_gen;
END_RCPP
}
// uncollapseMongrelCollapsed
List uncollapseMongrelCollapsed(const Eigen::Map<Eigen::VectorXd> eta, const Eigen::Map<Eigen::MatrixXd> X, const Eigen::Map<Eigen::MatrixXd> Theta, const Eigen::Map<Eigen::MatrixXd> Gamma, const Eigen::Map<Eigen::MatrixXd> Xi, const double upsilon, bool ret_mean);
RcppExport SEXP _mongrel_uncollapseMongrelCollapsed(SEXP etaSEXP, SEXP XSEXP, SEXP ThetaSEXP, SEXP GammaSEXP, SEXP XiSEXP, SEXP upsilonSEXP, SEXP ret_meanSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type Xi(XiSEXP);
    Rcpp::traits::input_parameter< const double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< bool >::type ret_mean(ret_meanSEXP);
    rcpp_result_gen = Rcpp::wrap(uncollapseMongrelCollapsed(eta, X, Theta, Gamma, Xi, upsilon, ret_mean));
    return rcpp_result_gen;
END_RCPP
}
// rMatNormalCholesky_test
Eigen::MatrixXd rMatNormalCholesky_test(Eigen::MatrixXd M, Eigen::MatrixXd LU, Eigen::MatrixXd LV);
RcppExport SEXP _mongrel_rMatNormalCholesky_test(SEXP MSEXP, SEXP LUSEXP, SEXP LVSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type M(MSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type LU(LUSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type LV(LVSEXP);
    rcpp_result_gen = Rcpp::wrap(rMatNormalCholesky_test(M, LU, LV));
    return rcpp_result_gen;
END_RCPP
}
// rInvWishRevCholesky_test
Eigen::MatrixXd rInvWishRevCholesky_test(int v, Eigen::MatrixXd Psi);
RcppExport SEXP _mongrel_rInvWishRevCholesky_test(SEXP vSEXP, SEXP PsiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type v(vSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Psi(PsiSEXP);
    rcpp_result_gen = Rcpp::wrap(rInvWishRevCholesky_test(v, Psi));
    return rcpp_result_gen;
END_RCPP
}
// rMatUnitNormal_test1
Eigen::MatrixXd rMatUnitNormal_test1(int n, int m);
RcppExport SEXP _mongrel_rMatUnitNormal_test1(SEXP nSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(rMatUnitNormal_test1(n, m));
    return rcpp_result_gen;
END_RCPP
}
// rMatUnitNormal_test2
Eigen::MatrixXd rMatUnitNormal_test2(int n);
RcppExport SEXP _mongrel_rMatUnitNormal_test2(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(rMatUnitNormal_test2(n));
    return rcpp_result_gen;
END_RCPP
}
// lmvgamma
double lmvgamma(double a, int p);
RcppExport SEXP _mongrel_lmvgamma(SEXP aSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(lmvgamma(a, p));
    return rcpp_result_gen;
END_RCPP
}
// lmvgamma_deriv
double lmvgamma_deriv(double a, int p);
RcppExport SEXP _mongrel_lmvgamma_deriv(SEXP aSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(lmvgamma_deriv(a, p));
    return rcpp_result_gen;
END_RCPP
}
// eigen_lap_test
Eigen::MatrixXd eigen_lap_test(int n_samples, Eigen::VectorXd m, Eigen::MatrixXd S, double eigvalthresh);
RcppExport SEXP _mongrel_eigen_lap_test(SEXP n_samplesSEXP, SEXP mSEXP, SEXP SSEXP, SEXP eigvalthreshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type m(mSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< double >::type eigvalthresh(eigvalthreshSEXP);
    rcpp_result_gen = Rcpp::wrap(eigen_lap_test(n_samples, m, S, eigvalthresh));
    return rcpp_result_gen;
END_RCPP
}
// cholesky_lap_test
Eigen::MatrixXd cholesky_lap_test(int n_samples, Eigen::VectorXd m, Eigen::MatrixXd S, double eigvalthresh);
RcppExport SEXP _mongrel_cholesky_lap_test(SEXP n_samplesSEXP, SEXP mSEXP, SEXP SSEXP, SEXP eigvalthreshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type m(mSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< double >::type eigvalthresh(eigvalthreshSEXP);
    rcpp_result_gen = Rcpp::wrap(cholesky_lap_test(n_samples, m, S, eigvalthresh));
    return rcpp_result_gen;
END_RCPP
}
// LaplaceApproximation_test
Eigen::MatrixXd LaplaceApproximation_test(int n_samples, Eigen::VectorXd m, Eigen::MatrixXd S, String decomp_method, double eigvalthresh);
RcppExport SEXP _mongrel_LaplaceApproximation_test(SEXP n_samplesSEXP, SEXP mSEXP, SEXP SSEXP, SEXP decomp_methodSEXP, SEXP eigvalthreshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type m(mSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< String >::type decomp_method(decomp_methodSEXP);
    Rcpp::traits::input_parameter< double >::type eigvalthresh(eigvalthreshSEXP);
    rcpp_result_gen = Rcpp::wrap(LaplaceApproximation_test(n_samples, m, S, decomp_method, eigvalthresh));
    return rcpp_result_gen;
END_RCPP
}
// alrInv_default_test
Eigen::MatrixXd alrInv_default_test(Eigen::MatrixXd eta);
RcppExport SEXP _mongrel_alrInv_default_test(SEXP etaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type eta(etaSEXP);
    rcpp_result_gen = Rcpp::wrap(alrInv_default_test(eta));
    return rcpp_result_gen;
END_RCPP
}
// alr_default_test
Eigen::MatrixXd alr_default_test(Eigen::MatrixXd pi);
RcppExport SEXP _mongrel_alr_default_test(SEXP piSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type pi(piSEXP);
    rcpp_result_gen = Rcpp::wrap(alr_default_test(pi));
    return rcpp_result_gen;
END_RCPP
}
// rDirichlet_test
Eigen::MatrixXd rDirichlet_test(int n_samples, Eigen::VectorXd alpha);
RcppExport SEXP _mongrel_rDirichlet_test(SEXP n_samplesSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(rDirichlet_test(n_samples, alpha));
    return rcpp_result_gen;
END_RCPP
}
// MultDirichletBoot_test
Eigen::MatrixXd MultDirichletBoot_test(int n_samples, Eigen::MatrixXd eta, Eigen::ArrayXXd Y, double pseudocount);
RcppExport SEXP _mongrel_MultDirichletBoot_test(SEXP n_samplesSEXP, SEXP etaSEXP, SEXP YSEXP, SEXP pseudocountSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type pseudocount(pseudocountSEXP);
    rcpp_result_gen = Rcpp::wrap(MultDirichletBoot_test(n_samples, eta, Y, pseudocount));
    return rcpp_result_gen;
END_RCPP
}
// MongrelTruncatedEigen_mongrel_test
List MongrelTruncatedEigen_mongrel_test(Eigen::ArrayXXd Y, double upsilon, Eigen::MatrixXd ThetaX, Eigen::MatrixXd K, Eigen::MatrixXd A, Eigen::VectorXd etavec, double r, int nev, int ncv);
RcppExport SEXP _mongrel_MongrelTruncatedEigen_mongrel_test(SEXP YSEXP, SEXP upsilonSEXP, SEXP ThetaXSEXP, SEXP KSEXP, SEXP ASEXP, SEXP etavecSEXP, SEXP rSEXP, SEXP nevSEXP, SEXP ncvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::ArrayXXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type upsilon(upsilonSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type ThetaX(ThetaXSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type K(KSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type etavec(etavecSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type nev(nevSEXP);
    Rcpp::traits::input_parameter< int >::type ncv(ncvSEXP);
    rcpp_result_gen = Rcpp::wrap(MongrelTruncatedEigen_mongrel_test(Y, upsilon, ThetaX, K, A, etavec, r, nev, ncv));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mongrel_conjugateLinearModel", (DL_FUNC) &_mongrel_conjugateLinearModel, 7},
    {"_mongrel_optimMaltipooCollapsed", (DL_FUNC) &_mongrel_optimMaltipooCollapsed, 23},
    {"_mongrel_loglikMongrelCollapsed", (DL_FUNC) &_mongrel_loglikMongrelCollapsed, 7},
    {"_mongrel_gradMongrelCollapsed", (DL_FUNC) &_mongrel_gradMongrelCollapsed, 7},
    {"_mongrel_hessMongrelCollapsed", (DL_FUNC) &_mongrel_hessMongrelCollapsed, 7},
    {"_mongrel_hessVectorProd", (DL_FUNC) &_mongrel_hessVectorProd, 9},
    {"_mongrel_lineSearch", (DL_FUNC) &_mongrel_lineSearch, 9},
    {"_mongrel_optimMongrelCollapsed", (DL_FUNC) &_mongrel_optimMongrelCollapsed, 24},
    {"_mongrel_uncollapseMongrelCollapsed", (DL_FUNC) &_mongrel_uncollapseMongrelCollapsed, 7},
    {"_mongrel_rMatNormalCholesky_test", (DL_FUNC) &_mongrel_rMatNormalCholesky_test, 3},
    {"_mongrel_rInvWishRevCholesky_test", (DL_FUNC) &_mongrel_rInvWishRevCholesky_test, 2},
    {"_mongrel_rMatUnitNormal_test1", (DL_FUNC) &_mongrel_rMatUnitNormal_test1, 2},
    {"_mongrel_rMatUnitNormal_test2", (DL_FUNC) &_mongrel_rMatUnitNormal_test2, 1},
    {"_mongrel_lmvgamma", (DL_FUNC) &_mongrel_lmvgamma, 2},
    {"_mongrel_lmvgamma_deriv", (DL_FUNC) &_mongrel_lmvgamma_deriv, 2},
    {"_mongrel_eigen_lap_test", (DL_FUNC) &_mongrel_eigen_lap_test, 4},
    {"_mongrel_cholesky_lap_test", (DL_FUNC) &_mongrel_cholesky_lap_test, 4},
    {"_mongrel_LaplaceApproximation_test", (DL_FUNC) &_mongrel_LaplaceApproximation_test, 5},
    {"_mongrel_alrInv_default_test", (DL_FUNC) &_mongrel_alrInv_default_test, 1},
    {"_mongrel_alr_default_test", (DL_FUNC) &_mongrel_alr_default_test, 1},
    {"_mongrel_rDirichlet_test", (DL_FUNC) &_mongrel_rDirichlet_test, 2},
    {"_mongrel_MultDirichletBoot_test", (DL_FUNC) &_mongrel_MultDirichletBoot_test, 4},
    {"_mongrel_MongrelTruncatedEigen_mongrel_test", (DL_FUNC) &_mongrel_MongrelTruncatedEigen_mongrel_test, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_mongrel(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
