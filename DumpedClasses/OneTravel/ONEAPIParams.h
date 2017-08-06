//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFHTTPRequestOperationManager, AFHTTPSessionManager, NSDictionary, NSMutableDictionary, ONEDNSHostHelper;

@interface ONEAPIParams : NSObject
{
    _Bool _isUseDNSAntiHijack;
    _Bool _needPublicParams;
    _Bool _isUseAutoRetry;
    _Bool _isForceHTTPDNS;
    _Bool _isUseMinsystem;
    NSMutableDictionary *_params;
    NSMutableDictionary *_getParams;
    NSMutableDictionary *_postParams;
    NSMutableDictionary *_headers;
    CDUnknownBlockType _httpReqTweakBlock;
    double _timeoutInterval;
    long long _originalRetryCount;
    long long _retriesRemainingCount;
    long long _intervalInSeconds;
    CDUnknownBlockType _retryDelayCalcBlock;
    ONEDNSHostHelper *_dnsHelper;
    unsigned long long _AFVersion;
    AFHTTPRequestOperationManager *_httpReqManager;
    AFHTTPSessionManager *_sessionManager;
}

+ (id)publicParams;
+ (void)setPublicParamsBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) AFHTTPSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) AFHTTPRequestOperationManager *httpReqManager; // @synthesize httpReqManager=_httpReqManager;
@property(nonatomic) unsigned long long AFVersion; // @synthesize AFVersion=_AFVersion;
@property(nonatomic) _Bool isUseMinsystem; // @synthesize isUseMinsystem=_isUseMinsystem;
@property(retain, nonatomic) ONEDNSHostHelper *dnsHelper; // @synthesize dnsHelper=_dnsHelper;
@property(nonatomic) _Bool isForceHTTPDNS; // @synthesize isForceHTTPDNS=_isForceHTTPDNS;
@property(copy, nonatomic) CDUnknownBlockType retryDelayCalcBlock; // @synthesize retryDelayCalcBlock=_retryDelayCalcBlock;
@property(nonatomic) long long intervalInSeconds; // @synthesize intervalInSeconds=_intervalInSeconds;
@property(nonatomic) long long retriesRemainingCount; // @synthesize retriesRemainingCount=_retriesRemainingCount;
@property(nonatomic) long long originalRetryCount; // @synthesize originalRetryCount=_originalRetryCount;
@property(nonatomic) _Bool isUseAutoRetry; // @synthesize isUseAutoRetry=_isUseAutoRetry;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(copy, nonatomic) CDUnknownBlockType httpReqTweakBlock; // @synthesize httpReqTweakBlock=_httpReqTweakBlock;
@property(retain, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSMutableDictionary *postParams; // @synthesize postParams=_postParams;
@property(retain, nonatomic) NSMutableDictionary *getParams; // @synthesize getParams=_getParams;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(nonatomic) _Bool needPublicParams; // @synthesize needPublicParams=_needPublicParams;
- (void).cxx_destruct;
- (id)description;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setPostParamsDic:(id)arg1;
- (void)setGetParamsDic:(id)arg1;
- (void)addPostParamsDic:(id)arg1;
- (void)addGetParamsDic:(id)arg1;
- (void)addPostParamValue:(id)arg1 forKey:(id)arg2;
- (void)addGetParamValue:(id)arg1 forKey:(id)arg2;
- (void)setParamsDic:(id)arg1;
- (void)addParamsDic:(id)arg1;
- (void)addParamValue:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSDictionary *publicParams;
@property(nonatomic) _Bool isUseDNSAntiHijack; // @synthesize isUseDNSAntiHijack=_isUseDNSAntiHijack;
- (_Bool)isAutoRetryed;
- (void)setDefaultConfig;
- (id)init;
- (id)allParamsForComponent;

@end
