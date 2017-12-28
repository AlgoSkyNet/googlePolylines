// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// encodeSfGeometry
Rcpp::List encodeSfGeometry(Rcpp::List sfc, bool strip);
RcppExport SEXP _googlePolylines_encodeSfGeometry(SEXP sfcSEXP, SEXP stripSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< bool >::type strip(stripSEXP);
    rcpp_result_gen = Rcpp::wrap(encodeSfGeometry(sfc, strip));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_decode_polyline
Rcpp::List rcpp_decode_polyline(Rcpp::StringVector encodedStrings);
RcppExport SEXP _googlePolylines_rcpp_decode_polyline(SEXP encodedStringsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type encodedStrings(encodedStringsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_decode_polyline(encodedStrings));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_encode_polyline
Rcpp::String rcpp_encode_polyline(Rcpp::NumericVector longitude, Rcpp::NumericVector latitude);
RcppExport SEXP _googlePolylines_rcpp_encode_polyline(SEXP longitudeSEXP, SEXP latitudeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type longitude(longitudeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type latitude(latitudeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_encode_polyline(longitude, latitude));
    return rcpp_result_gen;
END_RCPP
}
// polyline_to_wkt
Rcpp::StringVector polyline_to_wkt(Rcpp::List sfencoded);
RcppExport SEXP _googlePolylines_polyline_to_wkt(SEXP sfencodedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfencoded(sfencodedSEXP);
    rcpp_result_gen = Rcpp::wrap(polyline_to_wkt(sfencoded));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_googlePolylines_encodeSfGeometry", (DL_FUNC) &_googlePolylines_encodeSfGeometry, 2},
    {"_googlePolylines_rcpp_decode_polyline", (DL_FUNC) &_googlePolylines_rcpp_decode_polyline, 1},
    {"_googlePolylines_rcpp_encode_polyline", (DL_FUNC) &_googlePolylines_rcpp_encode_polyline, 2},
    {"_googlePolylines_polyline_to_wkt", (DL_FUNC) &_googlePolylines_polyline_to_wkt, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_googlePolylines(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
