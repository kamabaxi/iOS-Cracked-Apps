//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWalletBaseViewController.h"

#import "QQRedPointTableViewControllerDelegate.h"
#import "QQWalletUserCenterCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString;

@interface QQDealManagerViewController : QQWalletBaseViewController <UITableViewDataSource, UITableViewDelegate, QQRedPointTableViewControllerDelegate, QQWalletUserCenterCellDelegate>
{
    int userAttr;
    NSMutableArray *_datasource;
    long long _redPointId;
    _Bool _isLoading;
}

- (void)requestRedPointInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

