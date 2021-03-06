//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTNetErrorDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIScrollViewDelegate.h"

@class CTDiscoverCityHeaderView, CTDiscoverCityInfoModel, CTDiscoverDestinationDataCenter, CTDiscoverDestinationDetailsRelatedCitySectionCell, CTDiscoverDestinationDetailsSpecialFlightModel, CTDiscoverDestinationDetailsSpecialSaleModel, CTDiscoverHotelPromotionInfoModel, CTDiscoverHotelbabModel, CTDiscoverServiceManager, CTDsicoverProductSectionCellB, NSArray, NSMutableArray, NSMutableDictionary, NSString, UICollectionReusableView, UICollectionView, UILabel, UIScrollView, UIView;

@interface CTDiscoverDestinationDetailsViewController : CTRootViewController <CTNetErrorDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate>
{
    NSMutableDictionary *viewHeightForEachSection;
    NSMutableArray *checkPoints;
    NSMutableArray *loggedProductList;
    NSMutableArray *loggedProductListCount;
    UIScrollView *_mainScrollView;
    UICollectionView *_mainCollectionView;
    UIView *_navgationBarView;
    UILabel *_navigationBarTitleLabel;
    CTDiscoverCityInfoModel *_cityInfoModel;
    CTDiscoverCityHeaderView *_headerView;
    UICollectionReusableView *_header;
    CTDiscoverHotelPromotionInfoModel *_hotelPromotionCellData;
    CTDiscoverHotelbabModel *_hotelBabCellData;
    CTDiscoverDestinationDetailsSpecialSaleModel *_specialSales;
    CTDiscoverDestinationDetailsSpecialFlightModel *_specialFlight;
    CTDiscoverDestinationDataCenter *_dataCenter;
    CTDiscoverServiceManager *_serviceManager;
    NSMutableArray *_catalogList;
    NSArray *_vacationList;
    NSArray *_hotelList;
    NSArray *_groupList;
    NSArray *_roadTripList;
    NSArray *_playList;
    NSArray *_spotList;
    NSArray *_playandspotList;
    NSArray *_guidesList;
    NSArray *_partnersList;
    NSArray *_relatedCityList;
    CTDsicoverProductSectionCellB *_vacationSectionCell;
    CTDsicoverProductSectionCellB *_hotelSectionCell;
    CTDsicoverProductSectionCellB *_groupSectionCell;
    CTDsicoverProductSectionCellB *_roadTripSectionCell;
    CTDsicoverProductSectionCellB *_playSectionCell;
    CTDsicoverProductSectionCellB *_spotSectionCell;
    CTDsicoverProductSectionCellB *_playandspotSectionCell;
    CTDiscoverDestinationDetailsRelatedCitySectionCell *_relatedCitySectionCell;
}

@property(retain, nonatomic) CTDiscoverDestinationDetailsRelatedCitySectionCell *relatedCitySectionCell; // @synthesize relatedCitySectionCell=_relatedCitySectionCell;
@property(retain, nonatomic) CTDsicoverProductSectionCellB *playandspotSectionCell; // @synthesize playandspotSectionCell=_playandspotSectionCell;
@property(retain, nonatomic) CTDsicoverProductSectionCellB *spotSectionCell; // @synthesize spotSectionCell=_spotSectionCell;
@property(retain, nonatomic) CTDsicoverProductSectionCellB *playSectionCell; // @synthesize playSectionCell=_playSectionCell;
@property(retain, nonatomic) CTDsicoverProductSectionCellB *roadTripSectionCell; // @synthesize roadTripSectionCell=_roadTripSectionCell;
@property(retain, nonatomic) CTDsicoverProductSectionCellB *groupSectionCell; // @synthesize groupSectionCell=_groupSectionCell;
@property(retain, nonatomic) CTDsicoverProductSectionCellB *hotelSectionCell; // @synthesize hotelSectionCell=_hotelSectionCell;
@property(retain, nonatomic) CTDsicoverProductSectionCellB *vacationSectionCell; // @synthesize vacationSectionCell=_vacationSectionCell;
@property(retain, nonatomic) NSArray *relatedCityList; // @synthesize relatedCityList=_relatedCityList;
@property(retain, nonatomic) NSArray *partnersList; // @synthesize partnersList=_partnersList;
@property(retain, nonatomic) NSArray *guidesList; // @synthesize guidesList=_guidesList;
@property(retain, nonatomic) NSArray *playandspotList; // @synthesize playandspotList=_playandspotList;
@property(retain, nonatomic) NSArray *spotList; // @synthesize spotList=_spotList;
@property(retain, nonatomic) NSArray *playList; // @synthesize playList=_playList;
@property(retain, nonatomic) NSArray *roadTripList; // @synthesize roadTripList=_roadTripList;
@property(retain, nonatomic) NSArray *groupList; // @synthesize groupList=_groupList;
@property(retain, nonatomic) NSArray *hotelList; // @synthesize hotelList=_hotelList;
@property(retain, nonatomic) NSArray *vacationList; // @synthesize vacationList=_vacationList;
@property(retain, nonatomic) NSMutableArray *catalogList; // @synthesize catalogList=_catalogList;
@property(retain, nonatomic) CTDiscoverServiceManager *serviceManager; // @synthesize serviceManager=_serviceManager;
@property(retain, nonatomic) CTDiscoverDestinationDataCenter *dataCenter; // @synthesize dataCenter=_dataCenter;
@property(retain, nonatomic) CTDiscoverDestinationDetailsSpecialFlightModel *specialFlight; // @synthesize specialFlight=_specialFlight;
@property(retain, nonatomic) CTDiscoverDestinationDetailsSpecialSaleModel *specialSales; // @synthesize specialSales=_specialSales;
@property(retain, nonatomic) CTDiscoverHotelbabModel *hotelBabCellData; // @synthesize hotelBabCellData=_hotelBabCellData;
@property(retain, nonatomic) CTDiscoverHotelPromotionInfoModel *hotelPromotionCellData; // @synthesize hotelPromotionCellData=_hotelPromotionCellData;
@property(retain, nonatomic) UICollectionReusableView *header; // @synthesize header=_header;
@property(retain, nonatomic) CTDiscoverCityHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) CTDiscoverCityInfoModel *cityInfoModel; // @synthesize cityInfoModel=_cityInfoModel;
@property(retain, nonatomic) UILabel *navigationBarTitleLabel; // @synthesize navigationBarTitleLabel=_navigationBarTitleLabel;
@property(retain, nonatomic) UIView *navgationBarView; // @synthesize navgationBarView=_navgationBarView;
@property(retain, nonatomic) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property(retain, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
- (void).cxx_destruct;
- (void)determineIfTriggerBuriedPoints:(id)arg1 offset:(double)arg2;
- (void)calculatePoint:(id)arg1 positionInArray:(int)arg2;
- (void)triggerBuriedPoint:(double)arg1;
- (void)calculateTriggerOffset;
- (unsigned long long)figureoutProductCount:(unsigned long long)arg1 productList:(id)arg2 BU:(id)arg3;
- (id)determineIfIsProduct:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)configRelatedCitySectionCell:(id)arg1 indexPath:(id)arg2;
- (id)configProductSectionCell:(id)arg1 indexPath:(id)arg2;
- (id)configPartnerCell:(id)arg1 dataModel:(id)arg2 indexPath:(id)arg3;
- (id)configGuideCell:(id)arg1 dataModel:(id)arg2 indexPath:(id)arg3;
- (id)configPlayfunCell:(id)arg1 dataModel:(id)arg2 indexPath:(id)arg3;
- (id)configHotelPromotionCell:(id)arg1 dataModel:(id)arg2 indexPath:(id)arg3;
- (id)configHotelBabCell:(id)arg1 dataModel:(id)arg2 indexPath:(id)arg3;
- (id)configSpecialFlightCell:(id)arg1 dataModel:(id)arg2 indexPath:(id)arg3;
- (id)configProductCell:(id)arg1 dataModel:(id)arg2 indexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reloadData;
- (void)delegateRefreshBtnClicked:(id)arg1;
- (void)initCatalogList:(id)arg1;
- (void)requestDestinationDetailsData;
- (void)topViewAnimation:(double)arg1;
- (void)navigationViewAnimation:(double)arg1;
- (void)clickOnBackButton:(id)arg1;
- (void)setNavigationBarTitleLabelText;
- (void)addHeaderView;
- (void)didReceiveMemoryWarning;
- (void)initData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCityInfo:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

