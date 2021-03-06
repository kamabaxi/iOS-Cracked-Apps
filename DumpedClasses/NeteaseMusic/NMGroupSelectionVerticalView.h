//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMGroupSelectionBaseView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMActionSheetBackgroundView, NMTableHeadView, NMTableViewContainer, NSMutableArray, NSString, UIImage, UIScrollView, UITableView, UITapGestureRecognizer, UIView;

@interface NMGroupSelectionVerticalView : NMGroupSelectionBaseView <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NMActionSheetBackgroundView *_blurView;
    NMTableHeadView *_headView;
    UIScrollView *_bgView;
    UITableView *_tableView;
    NMTableViewContainer *_tableViewContainer;
    UIView *_maskView;
    UITapGestureRecognizer *_cancelGesture;
    double _tableHeight;
    UIImage *_chosenLogo;
    NSMutableArray *_groupSectionHeaderViewArray;
    double _tableMaxHeight;
}

@property(nonatomic) double tableMaxHeight; // @synthesize tableMaxHeight=_tableMaxHeight;
- (void).cxx_destruct;
- (void)setForbidChoosePasser:(_Bool)arg1;
- (void)_calculateTableHeight;
- (id)_generateSectionHeaderView:(id)arg1;
- (id)_getArtistForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)hideGroupSelectionView;
- (void)showGroupSelectionView;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithPlayerGroupArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

