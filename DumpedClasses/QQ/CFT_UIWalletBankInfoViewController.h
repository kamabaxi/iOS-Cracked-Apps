//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UICustomNaviBarViewController.h"

@class NSDictionary, NSString, UITableView;

@interface CFT_UIWalletBankInfoViewController : CFT_UICustomNaviBarViewController
{
    UITableView *_tableView;
    NSDictionary *bankInfo;
    NSString *bankType;
    NSString *bindSerial;
}

@property(copy, nonatomic) NSString *bindSerial; // @synthesize bindSerial;
@property(copy, nonatomic) NSString *bankType; // @synthesize bankType;
@property(retain, nonatomic) NSDictionary *bankInfo; // @synthesize bankInfo;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)dealloc;
- (void)goToDeleteCardConfirmVC;
- (id)initWithBankInfo:(id)arg1;

@end
