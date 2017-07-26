//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WKWebViewConfiguration;

@interface PSDConfiguration : NSObject
{
    _Bool _shouldUseJSCInjectJS;
    NSString *_sdkVersion;
    NSString *_pluginsBundleName;
    NSString *_extraPluginsFilePath;
    id <PSDLoggerProtocol> _logger;
    WKWebViewConfiguration *_wkConfiguration;
}

+ (id)allocPrivate;
+ (id)defaultConfiguration;
@property(nonatomic) _Bool shouldUseJSCInjectJS; // @synthesize shouldUseJSCInjectJS=_shouldUseJSCInjectJS;
@property(retain, nonatomic) WKWebViewConfiguration *wkConfiguration; // @synthesize wkConfiguration=_wkConfiguration;
@property(nonatomic) __weak id <PSDLoggerProtocol> logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSString *extraPluginsFilePath; // @synthesize extraPluginsFilePath=_extraPluginsFilePath;
@property(copy, nonatomic) NSString *pluginsBundleName; // @synthesize pluginsBundleName=_pluginsBundleName;
@property(readonly, copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
- (void).cxx_destruct;
- (id)initPrivate;

@end
