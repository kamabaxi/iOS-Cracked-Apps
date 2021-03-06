//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAPanGesView.h"

#import "FALiveSongListViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CADisplayLink, FALCBlankView, FALiveSongListViewCell, FASLiveRoomSongListSong, NSDictionary, NSMutableArray, NSString, NSTimer, UIButton, UILabel, UITableView, UIToolbar, UIView;

@interface FALiveSongListView : FAPanGesView <UITableViewDelegate, UITableViewDataSource, FALiveSongListViewCellDelegate>
{
    _Bool _needToLoadList;
    _Bool _hadOnceSuccessData;
    _Bool _isLoadingList;
    _Bool _isLoadingCountdown;
    _Bool _needReportDiversionEventAfterGetData;
    _Bool _hasAddLineView;
    long long _starKgid;
    long long _roomId;
    id <FALiveSongListDelegate> _delegate;
    UIView *_contentView;
    UIView *_bgView;
    UILabel *_titleLabel;
    UIButton *_vodSongBtn;
    UITableView *_table;
    NSMutableArray *_dataSource;
    long long _totalInvited;
    FALCBlankView *_blankView;
    UILabel *_inviteLabel;
    FALiveSongListViewCell *_maybeCountdownCell;
    long long _curCountdownMSec;
    long long _maxCountdownMSec;
    CADisplayLink *_displayLink;
    NSDictionary *_countDownSocketDic;
    FASLiveRoomSongListSong *_countdownSong;
    NSTimer *_countdownLoadDataTimer;
    long long _diversionChannelId;
    UIToolbar *_toolBar;
}

@property(retain, nonatomic) UIToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(nonatomic) _Bool hasAddLineView; // @synthesize hasAddLineView=_hasAddLineView;
@property(nonatomic) long long diversionChannelId; // @synthesize diversionChannelId=_diversionChannelId;
@property(nonatomic) _Bool needReportDiversionEventAfterGetData; // @synthesize needReportDiversionEventAfterGetData=_needReportDiversionEventAfterGetData;
@property(retain, nonatomic) NSTimer *countdownLoadDataTimer; // @synthesize countdownLoadDataTimer=_countdownLoadDataTimer;
@property(retain, nonatomic) FASLiveRoomSongListSong *countdownSong; // @synthesize countdownSong=_countdownSong;
@property(retain, nonatomic) NSDictionary *countDownSocketDic; // @synthesize countDownSocketDic=_countDownSocketDic;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) long long maxCountdownMSec; // @synthesize maxCountdownMSec=_maxCountdownMSec;
@property(nonatomic) long long curCountdownMSec; // @synthesize curCountdownMSec=_curCountdownMSec;
@property(retain, nonatomic) FALiveSongListViewCell *maybeCountdownCell; // @synthesize maybeCountdownCell=_maybeCountdownCell;
@property(retain, nonatomic) UILabel *inviteLabel; // @synthesize inviteLabel=_inviteLabel;
@property(nonatomic) _Bool isLoadingCountdown; // @synthesize isLoadingCountdown=_isLoadingCountdown;
@property(nonatomic) _Bool isLoadingList; // @synthesize isLoadingList=_isLoadingList;
@property(retain, nonatomic) FALCBlankView *blankView; // @synthesize blankView=_blankView;
@property(nonatomic) long long totalInvited; // @synthesize totalInvited=_totalInvited;
@property(nonatomic) _Bool hadOnceSuccessData; // @synthesize hadOnceSuccessData=_hadOnceSuccessData;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
@property(retain, nonatomic) UIButton *vodSongBtn; // @synthesize vodSongBtn=_vodSongBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <FALiveSongListDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) long long starKgid; // @synthesize starKgid=_starKgid;
@property(nonatomic) _Bool needToLoadList; // @synthesize needToLoadList=_needToLoadList;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)songListCellSupportAction:(id)arg1;
- (void)stopCountDown;
- (void)vodSongAction;
- (void)configTable;
- (void)reportDiversionEventWithChannelNow:(long long)arg1;
- (void)stopTimer;
- (void)sendCountdownNoti:(id)arg1;
- (void)updateTableHeader;
- (void)updateList;
- (void)updateCountdown:(id)arg1;
- (void)beginToCountdown:(long long)arg1 curCountdown:(long long)arg2;
- (void)supportBtnTouch:(id)arg1;
- (void)scrollToRow:(long long)arg1 animated:(_Bool)arg2;
- (id)findSongInDatasourceWithSocketInfo:(id)arg1;
- (void)toUpdateCountdownData;
- (void)foundReadySongInfoWhenGetData:(_Bool)arg1;
- (void)traverseListWhenGetData:(_Bool)arg1;
- (void)reportDiversionEventWithChannel:(long long)arg1;
- (void)resetSongList;
- (long long)contentHeight;
- (void)setViewHiddenWithAnimation:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)temporaryDisappear;
- (void)reappearWithoutReload:(id)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)stopLogic;
- (void)songListHandleInviteCount:(id)arg1;
- (void)songListHandleGiftSupportCount:(id)arg1;
- (void)songListHandleFansVodSong:(id)arg1;
- (void)songListHandleAnchorVodSong:(id)arg1;
- (void)songListHandleDeleteSong:(id)arg1;
- (void)songListHandleSung:(id)arg1;
- (void)songListHandleBeginSing:(id)arg1;
- (void)songListHandleTouchSingBtn:(id)arg1;
- (void)getData;
- (void)dealloc;
- (void)changeToFullScreenStyle;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

