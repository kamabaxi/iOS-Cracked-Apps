//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBLiveMapDataModelDelegate-Protocol.h"
#import "FBLiveMapVideoDataModelDelegate-Protocol.h"
#import "MKMapViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CKComponentHostingView, FBFeedShimmeringStoryCardView, FBFeedToolbox, FBLiveMapAnnotationView, FBLiveMapDataModel, FBLiveMapVideoDataModel, FBMemVideo, FBStoryShareHandler, FBUserSession, MKMapView, NSArray, NSObject, NSString;

@interface FBLiveMapViewController : UIViewController <FBLiveMapDataModelDelegate, FBLiveMapVideoDataModelDelegate, MKMapViewDelegate, UIGestureRecognizerDelegate>
{
    FBFeedToolbox *_toolbox;
    FBUserSession *_session;
    FBLiveMapDataModel *_dataModel;
    FBLiveMapVideoDataModel *_videoDataModel;
    NSObject *_scenePath;
    CKComponentHostingView *_hScrollHostingView;
    NSArray *_hScrollAnnotations;
    FBLiveMapAnnotationView *_highlightedAnnotationView;
    _Bool _firstShow;
    UIViewController *_cardMoreActionSheet;
    FBMemVideo *_cardVideo;
    FBStoryShareHandler *_shareHandler;
    FBFeedShimmeringStoryCardView *_shimmeringStoryCardView;
    _Bool _mapChangedFromUserInteraction;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)liveMapVideoDataModel:(id)arg1 didFetchVideoData:(id)arg2;
- (void)liveMapDataModel:(id)arg1 updatedAnnotations:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_updateDidUserInteractWithMapForRegionChange;
- (void)_setDataModelBounds;
- (void)cardMoreAction:(id)arg1 video:(id)arg2;
- (void)hScrollAction:(id)arg1 annotation:(id)arg2;
- (void)_showHScrollWithVideos:(id)arg1;
- (void)_removeHScroll;
- (void)_highlightDot:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_addMapOverlay:(id)arg1;
- (void)_getMapConfig;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) MKMapView *view; // @dynamic view;

@end
