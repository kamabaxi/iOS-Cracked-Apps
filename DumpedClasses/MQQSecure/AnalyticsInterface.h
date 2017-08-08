//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AnalyticsInterface : NSObject
{
}

+ (void)setAtsEnable:(_Bool)arg1;
+ (void)setAccessTest:(_Bool)arg1;
+ (_Bool)setRefresAPN:(_Bool)arg1;
+ (_Bool)setEnableCrashStatics:(_Bool)arg1;
+ (_Bool)setEnableBeaconReport:(_Bool)arg1;
+ (_Bool)setCleanBeforeMixUpload:(_Bool)arg1;
+ (_Bool)setAnalyticsServer:(id)arg1;
+ (_Bool)registAnaUploadConfirmer:(id)arg1;
+ (_Bool)setDayMaxSpeedTrackCount:(int)arg1;
+ (_Bool)setStrategyForMaxPkgSize:(int)arg1 dbMaxSize:(int)arg2;
+ (_Bool)enableModuleFunctionBeforeSeverStrategy:(_Bool)arg1;
+ (_Bool)setDayMaxUpFlow:(long long)arg1;
+ (_Bool)cleanNetFlowData;
+ (long long)getToDayUsedNetFlow;
+ (long long)getCurrentMonthTotalNetFlow;
+ (_Bool)enableNetFlowRecord:(_Bool)arg1;
+ (_Bool)onAppResuemed;
+ (_Bool)setImmeidateUploadStartEvent:(_Bool)arg1;
+ (_Bool)onAppEnterBackGround;
+ (_Bool)onAppLaunch;
+ (_Bool)setDBPath:(id)arg1;
+ (_Bool)setDBPathAndReBuild:(id)arg1 error:(id)arg2;
+ (void)setGatewayIp:(id)arg1;
+ (void)setBundleVersion:(id)arg1;
+ (void)setBundleId:(id)arg1;
+ (void)setContact:(id)arg1;
+ (void)setChannelId:(id)arg1;
+ (id)getQQ;
+ (void)setQQ:(id)arg1;
+ (id)getSessionid;
+ (void)setSessionid:(id)arg1;
+ (id)getQIMEI;
+ (void)setQIMEI:(id)arg1;
+ (void)setUserDefinedId:(id)arg1;
+ (void)setGameCPAppId:(id)arg1;
+ (void)setAppId:(id)arg1;
+ (void)setUserId:(id)arg1;
+ (void)setGUID:(id)arg1;
+ (void)setAppKey:(id)arg1;
+ (void)localEventUpload;
+ (void)heartEventUpload;
+ (_Bool)onMergeRealTimeUserAction:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5;
+ (_Bool)onMergeUserAction:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5;
+ (void)setUserRealEventDurationSecond:(int)arg1;
+ (_Bool)setRealTimeEventUploadDuration:(int)arg1;
+ (_Bool)setRealTimeEventUploaMaxCount:(int)arg1;
+ (_Bool)onDirectUserAction:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5;
+ (_Bool)onUserAction:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5;
+ (_Bool)testSpeedHost:(id)arg1;
+ (_Bool)testSpeedDomain:(id)arg1;
+ (_Bool)testSpeedIp:(id)arg1;
+ (_Bool)registRealTimeEventDataUploadNotifier:(id)arg1;
+ (_Bool)registMixDataUploadNotifier:(id)arg1;
+ (id)getRealTimeEventDataUploader;
+ (id)getMixDataUploader;
+ (_Bool)enableAnalyticsWithoutNetwork:(id)arg1 gatewayIP:(id)arg2;
+ (_Bool)enableAnalytics:(id)arg1 gatewayIP:(id)arg2;
+ (void)setSynchServerTimerDelay:(int)arg1;
+ (_Bool)enableEventRecord:(_Bool)arg1;
+ (id)getSDKVersion;
+ (int)getSDKStatus;
+ (void)setLogLevel:(int)arg1;

@end
