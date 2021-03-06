//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol QYPPPubCacheDelegate;

@interface QYPPPubCache : NSObject
{
    id <QYPPPubCacheDelegate> _delegate;
    NSMutableDictionary *_memoryCache;
}

+ (id)sharedCache;
@property(retain, nonatomic) NSMutableDictionary *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(nonatomic) __weak id <QYPPPubCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)__saveToDiskWithDict:(id)arg1;
- (id)__loadFromDisk;
- (void)clearCache;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;
- (long long)checkCacheWithPubModel:(id)arg1;
- (void)saveWithFeedModel:(id)arg1;
- (void)handleCommitFeedSuccess:(id)arg1;
- (void)addPubSuccessObserver;

@end

