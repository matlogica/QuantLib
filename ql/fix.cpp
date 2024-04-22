#include <ql/quantlib.hpp>

void test() {
    using namespace QuantLib;

      //unitofmeasure.obj : error LNK2001: unresolved external symbol "
      //public: class QuantLib::Currency const & __cdecl QuantLib::CommodityCurve::currency(void)const;
      // " (?currency@CommodityCurve@QuantLib@@QEBAAEBVCurrency@2@XZ) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]

        CommodityCurve* cl; cl->currency();


//      unitofmeasure.obj : error LNK2001: unresolved external symbol "public: class QuantLib::UnitOfMeasure const & __cdecl QuantLib::CommodityCurve::unitOfMeasure(void)const " (?unitOfMeasure@CommodityCurve@QuantLib@@QEBAAEBVUnitOfMeasure@2@XZ) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]
//      unitofmeasure.obj : error LNK2001: unresolved external symbol "public: class QuantLib::CommodityType const & __cdecl QuantLib::CommodityCurve::commodityType(void)const " (?commodityType@CommodityCurve@QuantLib@@QEBAAEBVCommodityType@2@XZ) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]


//      paymentterm.obj : error LNK2001: unresolved external symbol "public: __cdecl QuantLib::CommodityPricingHelper::CommodityPricingHelper(void)" (??0CommodityPricingHelper@QuantLib@@QEAA@XZ) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]
    CommodityPricingHelper *pr;


//      pool.obj : error LNK2001: unresolved external symbol "public: class idouble __cdecl QuantLib::Basket::densityTrancheLoss(class QuantLib::Date const &,class idouble)const " (?densityTrancheLoss@Basket@QuantLib@@QEBA?AVidouble@@AEBVDate@2@V3@@Z) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]
        Basket* b; b->densityTrancheLoss(Date(), 1.0);


      //bicubicsplineinterpolation.obj : error LNK2001: unresolved external symbol "public: __cdecl QuantLib::CorrelationTermStructure::CorrelationTermStructure(class QuantLib::Date const &,class QuantLib::Calendar const &,enum QuantLib::BusinessDayConvention,class QuantLib::DayCounter const &)" (??0CorrelationTermStructure@QuantLib@@QEAA@AEBVDate@1@AEBVCalendar@1@W4BusinessDayConvention@1@AEBVDayCounter@1@@Z) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]
      CorrelationTermStructure* cts; cts = new CorrelationTermStructure(Date(), Calendar(), BusinessDayConvention(), DayCounter());

      //volatilities_i_7.obj : error LNK2001: unresolved external symbol "public: class idouble __cdecl QuantLib::ZabrInterpolatedSmileSection<struct QuantLib::ZabrShortMaturityLognormal>::gamma(void)const " (?gamma@?$ZabrInterpolatedSmileSection@UZabrShortMaturityLognormal@QuantLib@@@QuantLib@@QEBA?AVidouble@@XZ) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]
      ZabrInterpolatedSmileSection<struct QuantLib::ZabrShortMaturityLognormal> *zabr; zabr->gamma();

//      volatilities_i_8.obj : error LNK2001: unresolved external symbol "public: class idouble __cdecl QuantLib::ZabrInterpolatedSmileSection<struct QuantLib::ZabrShortMaturityNormal>::gamma(void)const " (?gamma@?$ZabrInterpolatedSmileSection@UZabrShortMaturityNormal@QuantLib@@@QuantLib@@QEBA?AVidouble@@XZ) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]
//      volatilities_i_9.obj : error LNK2001: unresolved external symbol "public: class idouble __cdecl QuantLib::ZabrInterpolatedSmileSection<struct QuantLib::ZabrLocalVolatility>::gamma(void)const " (?gamma@?$ZabrInterpolatedSmileSection@UZabrLocalVolatility@QuantLib@@@QuantLib@@QEBA?AVidouble@@XZ) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]
//      volatilities_i_10.obj : error LNK2001: unresolved external symbol "public: class idouble __cdecl QuantLib::ZabrInterpolatedSmileSection<struct QuantLib::ZabrFullFd>::gamma(void)const " (?gamma@?$ZabrInterpolatedSmileSection@UZabrFullFd@QuantLib@@@QuantLib@@QEBA?AVidouble@@XZ) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]


//      sensitivityanalysis.obj : error LNK2001: unresolved external symbol "struct std::pair<class idouble,class idouble> __cdecl QuantLib::parallelAnalysis(class std::vector<class std::vector<class QuantLib::Handle<class QuantLib::SimpleQuote>,class std::allocator<class QuantLib::Handle<class QuantLib::SimpleQuote> > >,class std::allocator<class std::vector<class QuantLib::Handle<class QuantLib::SimpleQuote>,class std::allocator<class QuantLib::Handle<class QuantLib::SimpleQuote> > > > > const &,class std::vector<class std::shared_ptr<class QuantLib::Instrument>,class std::allocator<class std::shared_ptr<class QuantLib::Instrument> > > const &,class std::vector<class idouble,class std::allocator<class idouble> > const &,class idouble,enum QuantLib::SensitivityAnalysis,class idouble)" (?parallelAnalysis@QuantLib@@YA?AU?$pair@Vidouble@@V1@@std@@AEBV?$vector@V?$vector@V?$Handle@VSimpleQuote@QuantLib@@@QuantLib@@V?$allocator@V?$Handle@VSimpleQuote@QuantLib@@@QuantLib@@@std@@@std@@V?$allocator@V?$vector@V?$Handle@VSimpleQuote@QuantLib@@@QuantLib@@V?$allocator@V?$Handle@VSimpleQuote@QuantLib@@@QuantLib@@@std@@@std@@@2@@3@AEBV?$vector@V?$shared_ptr@VInstrument@QuantLib@@@std@@V?$allocator@V?$shared_ptr@VInstrument@QuantLib@@@std@@@2@@3@AEBV?$vector@Vidouble@@V?$allocator@Vidouble@@@std@@@3@Vidouble@@W4SensitivityAnalysis@1@3@Z) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]

//        parallelAnalysis(std::vector<std::vector<Handle<SimpleQuote>>>(), std::vector<std::shared_ptr<Instrument>>(), std::vector<idouble>(), 1.0, SensitivityAnalysis(), 1.0);


//      haganirregularswaptionengine.obj : error LNK2001: unresolved external symbol "public: class idouble __cdecl QuantLib::HaganIrregularSwaptionEngine::LGMPrice(class QuantLib::HaganIrregularSwaptionEngine::Basket &,class std::shared_ptr<class QuantLib::Exercise> &)const " (?LGMPrice@HaganIrregularSwaptionEngine@QuantLib@@QEBA?AVidouble@@AEAVBasket@12@AEAV?$shared_ptr@VExercise@QuantLib@@@std@@@Z) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]
        HaganIrregularSwaptionEngine * h; Basket b; std::shared_ptr<Exercise> e; h->LGMPrice(b, e);


//      volcube.obj : error LNK2001: unresolved external symbol "public: class QuantLib::Period const & __cdecl QuantLib::VolatilityCube::maxIndexTenor(void)const " (?maxIndexTenor@VolatilityCube@QuantLib@@QEBAAEBVPeriod@2@XZ) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]
//      volcube.obj : error LNK2001: unresolved external symbol "public: class QuantLib::Period const & __cdecl QuantLib::VolatilityCube::minIndexTenor(void)const " (?minIndexTenor@VolatilityCube@QuantLib@@QEBAAEBVPeriod@2@XZ) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]
        VolatilityCube* vc; vc->maxIndexTenor(); vc->minIndexTenor();

      //zerocouponswap.obj : error LNK2001: unresolved external symbol "public: __cdecl QuantLib::ZeroCouponSwap::ZeroCouponSwap(enum QuantLib::Swap::Type,class idouble,class QuantLib::Date const &,class QuantLib::Date const &,class idouble)" (??0ZeroCouponSwap@QuantLib@@QEAA@W4Type@Swap@1@Vidouble@@AEBVDate@1@21@Z) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]
      ZeroCouponSwap *zcs; zcs = new ZeroCouponSwap(Swap::Type(), 1.0, Date(), Date(), 1.0);

//      makeyoyinflationcapfloor.obj : error LNK2001: unresolved external symbol "public: class QuantLib::MakeYoYInflationCapFloor & __cdecl QuantLib::MakeYoYInflationCapFloor::withFirstCapletExcluded(void)" (?withFirstCapletExcluded@MakeYoYInflationCapFloor@QuantLib@@QEAAAEAV12@XZ) [C:\Users\dmitr\AppData\Local\Temp\tmpj7ge6kj_\build\_aadc_core.vcxproj]
        MakeYoYInflationCapFloor* myo; myo->withFirstCapletExcluded();
 
}