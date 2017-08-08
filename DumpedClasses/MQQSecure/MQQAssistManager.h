//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQSharkRequestDelegate-Protocol.h"

@class MQQAssistRedRequest, NSArray, NSDate, NSMutableDictionary, NSString;

@interface MQQAssistManager : NSObject <MQQSharkRequestDelegate>
{
    _Bool _isRed;
    long long _pushItemCurrentMaxId;
    long long _faqPushItemIndex;
    _Bool _isDictChanged;
    NSArray *_faqItems;
    MQQAssistRedRequest *_redRequest;
    NSDate *_lastUpdateDate;
    NSMutableDictionary *_userDefaultsDict;
    NSArray *_articlePushItems;
}

+ (id)shareManager;
@property(retain, nonatomic) NSArray *articlePushItems; // @synthesize articlePushItems=_articlePushItems;
@property(retain, nonatomic) NSMutableDictionary *userDefaultsDict; // @synthesize userDefaultsDict=_userDefaultsDict;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(retain, nonatomic) MQQAssistRedRequest *redRequest; // @synthesize redRequest=_redRequest;
@property(retain, nonatomic) NSArray *faqItems; // @synthesize faqItems=_faqItems;
@property(nonatomic) long long pushItemCurrentMaxId; // @synthesize pushItemCurrentMaxId=_pushItemCurrentMaxId;
@property(nonatomic) _Bool isRed; // @synthesize isRed=_isRed;
- (void)setFAQPushItemIndex:(long long)arg1;
- (void)synchronize;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)sharkRequestDidFail:(id)arg1;
- (void)sharkRequestDidFinish:(id)arg1 withInfo:(id)arg2;
- (id)refreshPushItems:(id)arg1;
- (void)updateArticlePushItems;
- (_Bool)addPushItems:(id)arg1;
- (void)updateAssistIsRed;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (void)loadLocalPreference;
@property(readonly, nonatomic) NSArray *displayPushItems;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
