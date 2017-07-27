//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QzoneModel.h"

@class NSString, NSURLRequest;

@interface QzhwStatContext : QzoneModel
{
    struct __CFHost *_p_cfDnsHost;
    _Bool _useWns;
    _Bool _useCache;
    _Bool _cacheHasData;
    _Bool _cacheUpdateSuccess;
    NSString *_requestKey;
    double _p_beginTime;
    long long _p_requestStatus;
    long long _p_dnsStatus;
    long long _p_wnsStatus;
    long long _p_cacheStatus;
    long long _uin;
    NSURLRequest *_request;
    NSString *_errorDomain;
    long long _errorCode;
    long long _httpStatusCode;
    NSString *_clientIp;
    NSString *_dnsResult;
    NSString *_apn;
    double _timeCost;
    NSString *_app;
    NSString *_appVersion;
    NSString *_platform;
    long long _sampling;
    long long _wnsCode;
    long long _cacheUpdatePolicy;
    double _cacheUpdateTimeCost;
}

+ (id)dnsResolveThread;
+ (void)dnsResolveThreadEntryPoint:(id)arg1;
@property double cacheUpdateTimeCost; // @synthesize cacheUpdateTimeCost=_cacheUpdateTimeCost;
@property _Bool cacheUpdateSuccess; // @synthesize cacheUpdateSuccess=_cacheUpdateSuccess;
@property long long cacheUpdatePolicy; // @synthesize cacheUpdatePolicy=_cacheUpdatePolicy;
@property _Bool cacheHasData; // @synthesize cacheHasData=_cacheHasData;
@property _Bool useCache; // @synthesize useCache=_useCache;
@property long long wnsCode; // @synthesize wnsCode=_wnsCode;
@property _Bool useWns; // @synthesize useWns=_useWns;
@property long long sampling; // @synthesize sampling=_sampling;
@property(copy) NSString *platform; // @synthesize platform=_platform;
@property(copy) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy) NSString *app; // @synthesize app=_app;
@property double timeCost; // @synthesize timeCost=_timeCost;
@property(copy) NSString *apn; // @synthesize apn=_apn;
@property(copy) NSString *dnsResult; // @synthesize dnsResult=_dnsResult;
@property(copy) NSString *clientIp; // @synthesize clientIp=_clientIp;
@property long long httpStatusCode; // @synthesize httpStatusCode=_httpStatusCode;
@property long long errorCode; // @synthesize errorCode=_errorCode;
@property(copy) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
@property long long uin; // @synthesize uin=_uin;
@property struct __CFHost *p_cfDnsHost; // @synthesize p_cfDnsHost=_p_cfDnsHost;
@property long long p_cacheStatus; // @synthesize p_cacheStatus=_p_cacheStatus;
@property long long p_wnsStatus; // @synthesize p_wnsStatus=_p_wnsStatus;
@property long long p_dnsStatus; // @synthesize p_dnsStatus=_p_dnsStatus;
@property long long p_requestStatus; // @synthesize p_requestStatus=_p_requestStatus;
@property double p_beginTime; // @synthesize p_beginTime=_p_beginTime;
@property(copy) NSString *requestKey; // @synthesize requestKey=_requestKey;
- (void).cxx_destruct;
- (void)doDnsResolve;
- (_Bool)isFinish;
- (void)dnsResolveFinished:(struct __CFHost *)arg1 type:(int)arg2 error:(const CDStruct_87dc826d *)arg3;
- (void)dnsResolveStart;
- (void)releaseDnsResolveResource;
- (void)dealloc;

@end
