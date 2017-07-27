//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSLock, NSMutableArray, NSMutableDictionary, NSString;

@interface ShoppingAdManager : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *m_packDataDic;
    NSLock *m_lock;
    NSMutableArray *_adPostionCache;
}

+ (int)sendSSOData:(id)arg1 Cmd:(id)arg2;
+ (int)sendAdGetReqWithPosition:(id)arg1 Count:(id)arg2 isBack:(_Bool)arg3;
+ (void)setAdGetSign;
+ (id)getReportAdType:(id)arg1;
+ (void)pullAdWithPosition:(id)arg1 Count:(id)arg2 callBack:(CDUnknownBlockType)arg3;
+ (void)pullAdWithPosition:(id)arg1 Count:(id)arg2;
+ (void)doAdReportWithDic:(id)arg1;
+ (id)getInstance;
+ (_Bool)isInWhiteListWithMsg:(id)arg1;
+ (void)adReporteWithMsg:(id)arg1 Type:(unsigned int)arg2 Param:(id)arg3;
+ (id)getReportAdType:(unsigned int)arg1 Msg:(id)arg2 Param:(id)arg3;
+ (void)adReporteWithMsg:(id)arg1 Type:(int)arg2 uin:(long long)arg3;
+ (void)adReporteWithMsg:(id)arg1 Param:(id)arg2;
@property(readonly, nonatomic) NSMutableArray *adPostionCache; // @synthesize adPostionCache=_adPostionCache;
- (void).cxx_destruct;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)removeSeq:(int)arg1;
- (id)getGdtPackBySeq:(int)arg1;
- (void)addSeq:(int)arg1 Action:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
