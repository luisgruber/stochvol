// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/stochvol.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// svsample_cpp
Rcpp::List svsample_cpp(const Rcpp::NumericVector& y_in, const int draws, const int burnin, const Rcpp::NumericMatrix& X_in, const double bmu, const double Bmu, const double a0, const double b0, const double Bsigma, const int thin, const int timethin, const Rcpp::List& startpara_in, const Rcpp::NumericVector& startvol_in, const bool keeptau, const bool quiet, const int para, const int MHsteps, const double B011, const double B022, const double mhcontrol, const bool gammaprior, const bool truncnormal, const double offset, const bool dontupdatemu, const Rcpp::NumericVector& priordf_in, const Rcpp::NumericVector& priorbeta_in, const double priorlatent0);
RcppExport SEXP _stochvol_svsample_cpp(SEXP y_inSEXP, SEXP drawsSEXP, SEXP burninSEXP, SEXP X_inSEXP, SEXP bmuSEXP, SEXP BmuSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP BsigmaSEXP, SEXP thinSEXP, SEXP timethinSEXP, SEXP startpara_inSEXP, SEXP startvol_inSEXP, SEXP keeptauSEXP, SEXP quietSEXP, SEXP paraSEXP, SEXP MHstepsSEXP, SEXP B011SEXP, SEXP B022SEXP, SEXP mhcontrolSEXP, SEXP gammapriorSEXP, SEXP truncnormalSEXP, SEXP offsetSEXP, SEXP dontupdatemuSEXP, SEXP priordf_inSEXP, SEXP priorbeta_inSEXP, SEXP priorlatent0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type y_in(y_inSEXP);
    Rcpp::traits::input_parameter< const int >::type draws(drawsSEXP);
    Rcpp::traits::input_parameter< const int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X_in(X_inSEXP);
    Rcpp::traits::input_parameter< const double >::type bmu(bmuSEXP);
    Rcpp::traits::input_parameter< const double >::type Bmu(BmuSEXP);
    Rcpp::traits::input_parameter< const double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< const double >::type Bsigma(BsigmaSEXP);
    Rcpp::traits::input_parameter< const int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< const int >::type timethin(timethinSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type startpara_in(startpara_inSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type startvol_in(startvol_inSEXP);
    Rcpp::traits::input_parameter< const bool >::type keeptau(keeptauSEXP);
    Rcpp::traits::input_parameter< const bool >::type quiet(quietSEXP);
    Rcpp::traits::input_parameter< const int >::type para(paraSEXP);
    Rcpp::traits::input_parameter< const int >::type MHsteps(MHstepsSEXP);
    Rcpp::traits::input_parameter< const double >::type B011(B011SEXP);
    Rcpp::traits::input_parameter< const double >::type B022(B022SEXP);
    Rcpp::traits::input_parameter< const double >::type mhcontrol(mhcontrolSEXP);
    Rcpp::traits::input_parameter< const bool >::type gammaprior(gammapriorSEXP);
    Rcpp::traits::input_parameter< const bool >::type truncnormal(truncnormalSEXP);
    Rcpp::traits::input_parameter< const double >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< const bool >::type dontupdatemu(dontupdatemuSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type priordf_in(priordf_inSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type priorbeta_in(priorbeta_inSEXP);
    Rcpp::traits::input_parameter< const double >::type priorlatent0(priorlatent0SEXP);
    rcpp_result_gen = Rcpp::wrap(svsample_cpp(y_in, draws, burnin, X_in, bmu, Bmu, a0, b0, Bsigma, thin, timethin, startpara_in, startvol_in, keeptau, quiet, para, MHsteps, B011, B022, mhcontrol, gammaprior, truncnormal, offset, dontupdatemu, priordf_in, priorbeta_in, priorlatent0));
    return rcpp_result_gen;
END_RCPP
}
// svlsample_cpp
Rcpp::List svlsample_cpp(const Rcpp::NumericVector& y, const int draws, const int burnin, const Rcpp::NumericMatrix& X, const int thinpara, const int thinlatent, const int thintime, const Rcpp::List& theta_init, const Rcpp::NumericVector& h_init, const double prior_phi_a, const double prior_phi_b, const double prior_rho_a, const double prior_rho_b, const double prior_sigma2_shape, const double prior_sigma2_rate, const double prior_mu_mu, const double prior_mu_sigma, const double prior_beta_mu, const double prior_beta_sigma, const bool verbose, const double offset, const double stdev, const bool gammaprior, const Rcpp::CharacterVector& strategy);
RcppExport SEXP _stochvol_svlsample_cpp(SEXP ySEXP, SEXP drawsSEXP, SEXP burninSEXP, SEXP XSEXP, SEXP thinparaSEXP, SEXP thinlatentSEXP, SEXP thintimeSEXP, SEXP theta_initSEXP, SEXP h_initSEXP, SEXP prior_phi_aSEXP, SEXP prior_phi_bSEXP, SEXP prior_rho_aSEXP, SEXP prior_rho_bSEXP, SEXP prior_sigma2_shapeSEXP, SEXP prior_sigma2_rateSEXP, SEXP prior_mu_muSEXP, SEXP prior_mu_sigmaSEXP, SEXP prior_beta_muSEXP, SEXP prior_beta_sigmaSEXP, SEXP verboseSEXP, SEXP offsetSEXP, SEXP stdevSEXP, SEXP gammapriorSEXP, SEXP strategySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int >::type draws(drawsSEXP);
    Rcpp::traits::input_parameter< const int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type thinpara(thinparaSEXP);
    Rcpp::traits::input_parameter< const int >::type thinlatent(thinlatentSEXP);
    Rcpp::traits::input_parameter< const int >::type thintime(thintimeSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type theta_init(theta_initSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type h_init(h_initSEXP);
    Rcpp::traits::input_parameter< const double >::type prior_phi_a(prior_phi_aSEXP);
    Rcpp::traits::input_parameter< const double >::type prior_phi_b(prior_phi_bSEXP);
    Rcpp::traits::input_parameter< const double >::type prior_rho_a(prior_rho_aSEXP);
    Rcpp::traits::input_parameter< const double >::type prior_rho_b(prior_rho_bSEXP);
    Rcpp::traits::input_parameter< const double >::type prior_sigma2_shape(prior_sigma2_shapeSEXP);
    Rcpp::traits::input_parameter< const double >::type prior_sigma2_rate(prior_sigma2_rateSEXP);
    Rcpp::traits::input_parameter< const double >::type prior_mu_mu(prior_mu_muSEXP);
    Rcpp::traits::input_parameter< const double >::type prior_mu_sigma(prior_mu_sigmaSEXP);
    Rcpp::traits::input_parameter< const double >::type prior_beta_mu(prior_beta_muSEXP);
    Rcpp::traits::input_parameter< const double >::type prior_beta_sigma(prior_beta_sigmaSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const double >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< const double >::type stdev(stdevSEXP);
    Rcpp::traits::input_parameter< const bool >::type gammaprior(gammapriorSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type strategy(strategySEXP);
    rcpp_result_gen = Rcpp::wrap(svlsample_cpp(y, draws, burnin, X, thinpara, thinlatent, thintime, theta_init, h_init, prior_phi_a, prior_phi_b, prior_rho_a, prior_rho_b, prior_sigma2_shape, prior_sigma2_rate, prior_mu_mu, prior_mu_sigma, prior_beta_mu, prior_beta_sigma, verbose, offset, stdev, gammaprior, strategy));
    return rcpp_result_gen;
END_RCPP
}
// update_sv
void update_sv(const Rcpp::NumericVector& data, Rcpp::NumericVector& curpara, Rcpp::NumericVector& h, double& h0, Rcpp::NumericVector& mixprob, Rcpp::IntegerVector& r, const bool centered_baseline, const double C0, const double cT, const double Bsigma, const double a0, const double b0, const double bmu, const double Bmu, const double B011inv, const double B022inv, const bool Gammaprior, const bool truncnormal, const double MHcontrol, const int MHsteps, const int parameterization, const bool dontupdatemu, const double priorlatent0);
static SEXP _stochvol_update_sv_try(SEXP dataSEXP, SEXP curparaSEXP, SEXP hSEXP, SEXP h0SEXP, SEXP mixprobSEXP, SEXP rSEXP, SEXP centered_baselineSEXP, SEXP C0SEXP, SEXP cTSEXP, SEXP BsigmaSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP bmuSEXP, SEXP BmuSEXP, SEXP B011invSEXP, SEXP B022invSEXP, SEXP GammapriorSEXP, SEXP truncnormalSEXP, SEXP MHcontrolSEXP, SEXP MHstepsSEXP, SEXP parameterizationSEXP, SEXP dontupdatemuSEXP, SEXP priorlatent0SEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type curpara(curparaSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type h(hSEXP);
    Rcpp::traits::input_parameter< double& >::type h0(h0SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type mixprob(mixprobSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const bool >::type centered_baseline(centered_baselineSEXP);
    Rcpp::traits::input_parameter< const double >::type C0(C0SEXP);
    Rcpp::traits::input_parameter< const double >::type cT(cTSEXP);
    Rcpp::traits::input_parameter< const double >::type Bsigma(BsigmaSEXP);
    Rcpp::traits::input_parameter< const double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< const double >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< const double >::type bmu(bmuSEXP);
    Rcpp::traits::input_parameter< const double >::type Bmu(BmuSEXP);
    Rcpp::traits::input_parameter< const double >::type B011inv(B011invSEXP);
    Rcpp::traits::input_parameter< const double >::type B022inv(B022invSEXP);
    Rcpp::traits::input_parameter< const bool >::type Gammaprior(GammapriorSEXP);
    Rcpp::traits::input_parameter< const bool >::type truncnormal(truncnormalSEXP);
    Rcpp::traits::input_parameter< const double >::type MHcontrol(MHcontrolSEXP);
    Rcpp::traits::input_parameter< const int >::type MHsteps(MHstepsSEXP);
    Rcpp::traits::input_parameter< const int >::type parameterization(parameterizationSEXP);
    Rcpp::traits::input_parameter< const bool >::type dontupdatemu(dontupdatemuSEXP);
    Rcpp::traits::input_parameter< const double >::type priorlatent0(priorlatent0SEXP);
    update_sv(data, curpara, h, h0, mixprob, r, centered_baseline, C0, cT, Bsigma, a0, b0, bmu, Bmu, B011inv, B022inv, Gammaprior, truncnormal, MHcontrol, MHsteps, parameterization, dontupdatemu, priorlatent0);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _stochvol_update_sv(SEXP dataSEXP, SEXP curparaSEXP, SEXP hSEXP, SEXP h0SEXP, SEXP mixprobSEXP, SEXP rSEXP, SEXP centered_baselineSEXP, SEXP C0SEXP, SEXP cTSEXP, SEXP BsigmaSEXP, SEXP a0SEXP, SEXP b0SEXP, SEXP bmuSEXP, SEXP BmuSEXP, SEXP B011invSEXP, SEXP B022invSEXP, SEXP GammapriorSEXP, SEXP truncnormalSEXP, SEXP MHcontrolSEXP, SEXP MHstepsSEXP, SEXP parameterizationSEXP, SEXP dontupdatemuSEXP, SEXP priorlatent0SEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_stochvol_update_sv_try(dataSEXP, curparaSEXP, hSEXP, h0SEXP, mixprobSEXP, rSEXP, centered_baselineSEXP, C0SEXP, cTSEXP, BsigmaSEXP, a0SEXP, b0SEXP, bmuSEXP, BmuSEXP, B011invSEXP, B022invSEXP, GammapriorSEXP, truncnormalSEXP, MHcontrolSEXP, MHstepsSEXP, parameterizationSEXP, dontupdatemuSEXP, priorlatent0SEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// update_svl
void update_svl(const Rcpp::NumericVector& y, const Rcpp::NumericVector& y_star, const Rcpp::NumericVector& d, double& phi, double& rho, double& sigma2, double& mu, Rcpp::NumericVector& h, Rcpp::NumericVector& ht, const Rcpp::NumericVector& prior_phi, const Rcpp::NumericVector& prior_rho, const Rcpp::NumericVector& prior_sigma2, const Rcpp::NumericVector& prior_mu, const double stdev, const bool gammaprior, const Rcpp::IntegerVector& strategy);
static SEXP _stochvol_update_svl_try(SEXP ySEXP, SEXP y_starSEXP, SEXP dSEXP, SEXP phiSEXP, SEXP rhoSEXP, SEXP sigma2SEXP, SEXP muSEXP, SEXP hSEXP, SEXP htSEXP, SEXP prior_phiSEXP, SEXP prior_rhoSEXP, SEXP prior_sigma2SEXP, SEXP prior_muSEXP, SEXP stdevSEXP, SEXP gammapriorSEXP, SEXP strategySEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type y_star(y_starSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type d(dSEXP);
    Rcpp::traits::input_parameter< double& >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< double& >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double& >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< double& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type h(hSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type ht(htSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type prior_phi(prior_phiSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type prior_rho(prior_rhoSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type prior_sigma2(prior_sigma2SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type prior_mu(prior_muSEXP);
    Rcpp::traits::input_parameter< const double >::type stdev(stdevSEXP);
    Rcpp::traits::input_parameter< const bool >::type gammaprior(gammapriorSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type strategy(strategySEXP);
    update_svl(y, y_star, d, phi, rho, sigma2, mu, h, ht, prior_phi, prior_rho, prior_sigma2, prior_mu, stdev, gammaprior, strategy);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _stochvol_update_svl(SEXP ySEXP, SEXP y_starSEXP, SEXP dSEXP, SEXP phiSEXP, SEXP rhoSEXP, SEXP sigma2SEXP, SEXP muSEXP, SEXP hSEXP, SEXP htSEXP, SEXP prior_phiSEXP, SEXP prior_rhoSEXP, SEXP prior_sigma2SEXP, SEXP prior_muSEXP, SEXP stdevSEXP, SEXP gammapriorSEXP, SEXP strategySEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_stochvol_update_svl_try(ySEXP, y_starSEXP, dSEXP, phiSEXP, rhoSEXP, sigma2SEXP, muSEXP, hSEXP, htSEXP, prior_phiSEXP, prior_rhoSEXP, prior_sigma2SEXP, prior_muSEXP, stdevSEXP, gammapriorSEXP, strategySEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _stochvol_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("void(*update_sv)(const Rcpp::NumericVector&,Rcpp::NumericVector&,Rcpp::NumericVector&,double&,Rcpp::NumericVector&,Rcpp::IntegerVector&,const bool,const double,const double,const double,const double,const double,const double,const double,const double,const double,const bool,const bool,const double,const int,const int,const bool,const double)");
        signatures.insert("void(*update_svl)(const Rcpp::NumericVector&,const Rcpp::NumericVector&,const Rcpp::NumericVector&,double&,double&,double&,double&,Rcpp::NumericVector&,Rcpp::NumericVector&,const Rcpp::NumericVector&,const Rcpp::NumericVector&,const Rcpp::NumericVector&,const Rcpp::NumericVector&,const double,const bool,const Rcpp::IntegerVector&)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _stochvol_RcppExport_registerCCallable() { 
    R_RegisterCCallable("stochvol", "_stochvol_update_sv", (DL_FUNC)_stochvol_update_sv_try);
    R_RegisterCCallable("stochvol", "_stochvol_update_svl", (DL_FUNC)_stochvol_update_svl_try);
    R_RegisterCCallable("stochvol", "_stochvol_RcppExport_validate", (DL_FUNC)_stochvol_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_stochvol_svsample_cpp", (DL_FUNC) &_stochvol_svsample_cpp, 27},
    {"_stochvol_svlsample_cpp", (DL_FUNC) &_stochvol_svlsample_cpp, 24},
    {"_stochvol_update_sv", (DL_FUNC) &_stochvol_update_sv, 23},
    {"_stochvol_update_svl", (DL_FUNC) &_stochvol_update_svl, 16},
    {"_stochvol_RcppExport_registerCCallable", (DL_FUNC) &_stochvol_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_stochvol(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
