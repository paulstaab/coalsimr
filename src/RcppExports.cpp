// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/coala.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// parse_ms_positions
NumericVector parse_ms_positions(const std::string line);
RcppExport SEXP coala_parse_ms_positions(SEXP lineSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string >::type line(lineSEXP);
    __result = Rcpp::wrap(parse_ms_positions(line));
    return __result;
END_RCPP
}
// parse_ms_output
List parse_ms_output(const List file_names, const NumericVector sample_size, const int loci_number);
RcppExport SEXP coala_parse_ms_output(SEXP file_namesSEXP, SEXP sample_sizeSEXP, SEXP loci_numberSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List >::type file_names(file_namesSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type sample_size(sample_sizeSEXP);
    Rcpp::traits::input_parameter< const int >::type loci_number(loci_numberSEXP);
    __result = Rcpp::wrap(parse_ms_output(file_names, sample_size, loci_number));
    return __result;
END_RCPP
}
// parse_seqgen_output
List parse_seqgen_output(CharacterVector output, const int individuals, const int locus_length, const int locus_number, const int outgroup_size, const bool calc_segsites);
RcppExport SEXP coala_parse_seqgen_output(SEXP outputSEXP, SEXP individualsSEXP, SEXP locus_lengthSEXP, SEXP locus_numberSEXP, SEXP outgroup_sizeSEXP, SEXP calc_segsitesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type output(outputSEXP);
    Rcpp::traits::input_parameter< const int >::type individuals(individualsSEXP);
    Rcpp::traits::input_parameter< const int >::type locus_length(locus_lengthSEXP);
    Rcpp::traits::input_parameter< const int >::type locus_number(locus_numberSEXP);
    Rcpp::traits::input_parameter< const int >::type outgroup_size(outgroup_sizeSEXP);
    Rcpp::traits::input_parameter< const bool >::type calc_segsites(calc_segsitesSEXP);
    __result = Rcpp::wrap(parse_seqgen_output(output, individuals, locus_length, locus_number, outgroup_size, calc_segsites));
    return __result;
END_RCPP
}
// generate_trio_trees
List generate_trio_trees(const List trees, const NumericMatrix llm);
RcppExport SEXP coala_generate_trio_trees(SEXP treesSEXP, SEXP llmSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List >::type trees(treesSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type llm(llmSEXP);
    __result = Rcpp::wrap(generate_trio_trees(trees, llm));
    return __result;
END_RCPP
}
// create_segsites
coala::SegSites create_segsites(NumericMatrix snps, NumericVector positions, NumericVector trio_locus, bool check);
RcppExport SEXP coala_create_segsites(SEXP snpsSEXP, SEXP positionsSEXP, SEXP trio_locusSEXP, SEXP checkSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type snps(snpsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type positions(positionsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type trio_locus(trio_locusSEXP);
    Rcpp::traits::input_parameter< bool >::type check(checkSEXP);
    __result = Rcpp::wrap(create_segsites(snps, positions, trio_locus, check));
    return __result;
END_RCPP
}
// get_snps
NumericMatrix get_snps(const coala::SegSites seg_sites);
RcppExport SEXP coala_get_snps(SEXP seg_sitesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const coala::SegSites >::type seg_sites(seg_sitesSEXP);
    __result = Rcpp::wrap(get_snps(seg_sites));
    return __result;
END_RCPP
}
// get_positions
NumericVector get_positions(const coala::SegSites seg_sites);
RcppExport SEXP coala_get_positions(SEXP seg_sitesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const coala::SegSites >::type seg_sites(seg_sitesSEXP);
    __result = Rcpp::wrap(get_positions(seg_sites));
    return __result;
END_RCPP
}
// set_positions
coala::SegSites set_positions(coala::SegSites seg_sites, const NumericVector positions);
RcppExport SEXP coala_set_positions(SEXP seg_sitesSEXP, SEXP positionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< coala::SegSites >::type seg_sites(seg_sitesSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type positions(positionsSEXP);
    __result = Rcpp::wrap(set_positions(seg_sites, positions));
    return __result;
END_RCPP
}
// get_trio_locus
NumericVector get_trio_locus(const coala::SegSites seg_sites);
RcppExport SEXP coala_get_trio_locus(SEXP seg_sitesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const coala::SegSites >::type seg_sites(seg_sitesSEXP);
    __result = Rcpp::wrap(get_trio_locus(seg_sites));
    return __result;
END_RCPP
}
// set_trio_locus
coala::SegSites set_trio_locus(coala::SegSites seg_sites, const NumericVector trio_locus);
RcppExport SEXP coala_set_trio_locus(SEXP seg_sitesSEXP, SEXP trio_locusSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< coala::SegSites >::type seg_sites(seg_sitesSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type trio_locus(trio_locusSEXP);
    __result = Rcpp::wrap(set_trio_locus(seg_sites, trio_locus));
    return __result;
END_RCPP
}
// calc_four_gamete_stat
NumericMatrix calc_four_gamete_stat(const List seg_sites_list, const IntegerVector individuals, const NumericMatrix locus_length);
RcppExport SEXP coala_calc_four_gamete_stat(SEXP seg_sites_listSEXP, SEXP individualsSEXP, SEXP locus_lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List >::type seg_sites_list(seg_sites_listSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type individuals(individualsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type locus_length(locus_lengthSEXP);
    __result = Rcpp::wrap(calc_four_gamete_stat(seg_sites_list, individuals, locus_length));
    return __result;
END_RCPP
}
// calc_jsfs
NumericMatrix calc_jsfs(const List seg_sites_list, const NumericVector pop1, const NumericVector pop2);
RcppExport SEXP coala_calc_jsfs(SEXP seg_sites_listSEXP, SEXP pop1SEXP, SEXP pop2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List >::type seg_sites_list(seg_sites_listSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type pop1(pop1SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type pop2(pop2SEXP);
    __result = Rcpp::wrap(calc_jsfs(seg_sites_list, pop1, pop2));
    return __result;
END_RCPP
}
// calc_mcmf
NumericVector calc_mcmf(const List seg_sites, const NumericVector individuals, const bool has_trios, const int ploidy);
RcppExport SEXP coala_calc_mcmf(SEXP seg_sitesSEXP, SEXP individualsSEXP, SEXP has_triosSEXP, SEXP ploidySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List >::type seg_sites(seg_sitesSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type individuals(individualsSEXP);
    Rcpp::traits::input_parameter< const bool >::type has_trios(has_triosSEXP);
    Rcpp::traits::input_parameter< const int >::type ploidy(ploidySEXP);
    __result = Rcpp::wrap(calc_mcmf(seg_sites, individuals, has_trios, ploidy));
    return __result;
END_RCPP
}
// calc_nucleotide_div
NumericVector calc_nucleotide_div(const coala::SegSites seg_sites, const NumericVector individuals);
RcppExport SEXP coala_calc_nucleotide_div(SEXP seg_sitesSEXP, SEXP individualsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const coala::SegSites >::type seg_sites(seg_sitesSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type individuals(individualsSEXP);
    __result = Rcpp::wrap(calc_nucleotide_div(seg_sites, individuals));
    return __result;
END_RCPP
}
// unphase_segsites
List unphase_segsites(const List seg_sites_list, const long unsigned int ploidy, const long unsigned int samples_per_ind);
RcppExport SEXP coala_unphase_segsites(SEXP seg_sites_listSEXP, SEXP ploidySEXP, SEXP samples_per_indSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List >::type seg_sites_list(seg_sites_listSEXP);
    Rcpp::traits::input_parameter< const long unsigned int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< const long unsigned int >::type samples_per_ind(samples_per_indSEXP);
    __result = Rcpp::wrap(unphase_segsites(seg_sites_list, ploidy, samples_per_ind));
    return __result;
END_RCPP
}
