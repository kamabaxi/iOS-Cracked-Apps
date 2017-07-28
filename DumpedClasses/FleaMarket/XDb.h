//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AliDB, XCache;

@interface XDb : NSObject
{
    XCache *_indexCaches[9];
    AliDB *_Db;
    unsigned long long _Uid;
    XDb *_Inherent;
}

+ (id)dbPathWith:(id)arg1;
+ (id)cachePath;
@property __weak XDb *Inherent; // @synthesize Inherent=_Inherent;
@property unsigned long long Uid; // @synthesize Uid=_Uid;
@property(retain) AliDB *Db; // @synthesize Db=_Db;
- (void).cxx_destruct;
- (void)onAliDbResult:(id)arg1;
- (void)autoCloseResult:(id)arg1;
- (_Bool)isValid;
- (void)close;
- (id)truelyDb:(int)arg1;
- (id)cacheOf:(int)arg1;
- (_Bool)addCache:(id)arg1 withIndex:(int)arg2;
- (id)init;

@end
