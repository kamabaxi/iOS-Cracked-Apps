//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMultiMemberSelectorBaseViewController.h"

#import "DiscussListViewDelegate.h"
#import "TroopListViewDelegate.h"

@class MulMemSelDiscussListTableView, MulMemSelSearchResultTableView, MulMemSelTroopAndDiscussListEmptyView, MulMemSelTroopListTableView, NSString, QQRelationSearchEngine, QQTabWithInPageControl, UIView;

@interface QQMultiMemberSelectorTroopAndDiscussViewController : QQMultiMemberSelectorBaseViewController <TroopListViewDelegate, DiscussListViewDelegate>
{
    QQRelationSearchEngine *_searchEngine;
    MulMemSelSearchResultTableView *_mulMemSelSearchResultTableView;
    UIView *_segmentPanel;
    QQTabWithInPageControl *_segmentControl;
    long long _selectedIdx;
    MulMemSelTroopListTableView *_troopListView;
    MulMemSelDiscussListTableView *_discussListView;
    MulMemSelTroopAndDiscussListEmptyView *_emptyView;
}

- (void).cxx_destruct;
- (void)onDidScrollSearchResultView;
- (void)onDidSelectedSearchResultCallback:(id)arg1;
- (void)onHandleSearchResultShowCallback:(id)arg1;
- (void)onHandleMemberListStateUpdateCallback;
- (void)onHandleSearchSourceLoad;
- (void)onDidSelectDiscussCallBack:(id)arg1;
- (void)onDidScrollDiscussView;
- (void)onDidSelectTroopCallBack:(id)arg1;
- (void)onDidScrollTroopView;
- (void)onNotifyGroupInfoPrivilegeFlag:(id)arg1;
- (void)loadSearchSource;
- (void)setTopView:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadEmptyView;
- (void)switchTableView:(_Bool)arg1;
- (void)initSearchResultView;
- (void)loadDiscussListData;
- (void)loadTroopListData;
- (void)initDiscussListView;
- (void)initTroopListView;
- (void)initializeSegmentControl;
- (void)valueChanged:(id)arg1;
- (void)loadView;
- (id)initWithMulMemSelUserInfo:(id)arg1 memCustomSearchBar:(id)arg2 withDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
