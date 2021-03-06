//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBPlatformPrefetchedURLStore, FBSimpleNetworkerRequest, NSMutableArray, NSMutableDictionary, NSString;
@protocol FBPlatformWebViewManifestDelegate;

@interface FBPlatformWebViewManifest : NSObject
{
    double _lastRefreshTimestamp;
    _Bool _disallowPrioritizedRefresh;
    FBPlatformPrefetchedURLStore *_urlStore;
    NSMutableDictionary *_methodManifest;
    NSMutableDictionary *_urlMap;
    id <FBPlatformWebViewManifestDelegate> _delegate;
    NSMutableArray *_actionManifestsPendingFetch;
    NSString *_lastManifestUrlString;
    FBSimpleNetworkerRequest *_pendingManifestRefreshRequest;
    FBSimpleNetworkerRequest *_pendingDialogDownloadRequest;
}

+ (id)urlMarkedByManifestFromURL:(id)arg1 withVersion:(id)arg2;
+ (_Bool)isManifestURL:(id)arg1;
+ (id)manifestArchivePath;
+ (id)manifestDirectoryPath;
+ (void)setSharedManifest:(id)arg1;
+ (id)sharedManifest;
@property(retain, nonatomic) FBSimpleNetworkerRequest *pendingDialogDownloadRequest; // @synthesize pendingDialogDownloadRequest=_pendingDialogDownloadRequest;
@property(retain, nonatomic) FBSimpleNetworkerRequest *pendingManifestRefreshRequest; // @synthesize pendingManifestRefreshRequest=_pendingManifestRefreshRequest;
@property(copy, nonatomic) NSString *lastManifestUrlString; // @synthesize lastManifestUrlString=_lastManifestUrlString;
@property(retain, nonatomic) NSMutableArray *actionManifestsPendingFetch; // @synthesize actionManifestsPendingFetch=_actionManifestsPendingFetch;
@property(nonatomic) __weak id <FBPlatformWebViewManifestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *urlMap; // @synthesize urlMap=_urlMap;
@property(retain, nonatomic) NSMutableDictionary *methodManifest; // @synthesize methodManifest=_methodManifest;
@property(retain, nonatomic) FBPlatformPrefetchedURLStore *urlStore; // @synthesize urlStore=_urlStore;
- (void).cxx_destruct;
- (void)serializeToDisk;
- (void)deleteManifestFromDisk;
- (id)verifiedURLForManifest;
- (void)fetchNextActionManifestWithSession:(id)arg1;
- (void)cancelAllActionManifestFetches;
- (void)fetchAllActionManifestsAndPrioritizeMethod:(id)arg1 withSession:(id)arg2;
- (void)reprocessURLMap;
- (void)processManifestJSON:(id)arg1;
- (id)manifestForMethod:(id)arg1;
- (_Bool)refreshAndPrioritizeMethod:(id)arg1 withSession:(id)arg2;
- (void)allowPrioritizedRefresh;
- (void)processNetworkResponse:(id)arg1 data:(id)arg2;
- (id)cachedResponseForURL:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

