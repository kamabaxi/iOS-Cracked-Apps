//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQSharkRequestDelegate-Protocol.h"

@class MQQAKActionRequest, MQQAKDaysCounter, MQQAKRiskInfoWrapper, MQQAKRiskRequest, MQQLoginUserInfo, NSDate, NSMutableDictionary, NSString;

@interface MQQAccountKeeper : NSObject <MQQSharkRequestDelegate>
{
    long long _currentState;
    _Bool _checkStateForPush;
    int _pushType;
    MQQAKDaysCounter *_daysCounter;
    MQQLoginUserInfo *_userInfo;
    MQQAKRiskInfoWrapper *_riskInfoWrapper;
    NSMutableDictionary *_actionDict;
    MQQAKActionRequest *_actionRequest;
    MQQAKRiskRequest *_riskRequest;
    NSDate *_lastCheckDate;
}

+ (id)defaultKeeper;
@property(retain, nonatomic) NSDate *lastCheckDate; // @synthesize lastCheckDate=_lastCheckDate;
@property(retain, nonatomic) MQQAKRiskRequest *riskRequest; // @synthesize riskRequest=_riskRequest;
@property(retain, nonatomic) MQQAKActionRequest *actionRequest; // @synthesize actionRequest=_actionRequest;
@property(retain, nonatomic) NSMutableDictionary *actionDict; // @synthesize actionDict=_actionDict;
@property(retain, nonatomic) MQQAKRiskInfoWrapper *riskInfoWrapper; // @synthesize riskInfoWrapper=_riskInfoWrapper;
@property(retain, nonatomic) MQQLoginUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) MQQAKDaysCounter *daysCounter; // @synthesize daysCounter=_daysCounter;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (void)handlePushWithState:(long long)arg1;
- (void)handlePush:(int)arg1;
- (void)sharkRequestDidFail:(id)arg1;
- (void)sharkRequestDidFinish:(id)arg1 withInfo:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)accountDidChanged:(id)arg1;
- (long long)protectionDays;
- (id)actionInfoForId:(long long)arg1;
- (id)actionInfoArrayForIdArray:(id)arg1;
- (void)checkAccountState;
- (_Bool)checkAccountStateImmediately;
- (void)loadAccountActions;
- (void)setCurrentState:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
