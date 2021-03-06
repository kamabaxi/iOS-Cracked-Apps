//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabase;

@interface QLDownloadDB : NSObject
{
    FMDatabase *db;
    FMDatabase *serverDB;
}

@property(retain) FMDatabase *serverDB; // @synthesize serverDB;
@property(retain) FMDatabase *db; // @synthesize db;
- (_Bool)updateDownloadServerPerformanceInfo:(id)arg1 withAddress:(id)arg2;
- (id)getDownloadServerPerformanceInfoWithAddress:(id)arg1;
- (id)getDownloadInfo;
- (_Bool)delDownloadInfo:(id)arg1;
- (_Bool)updateDownloadInfo:(id)arg1;
- (_Bool)addBatchInfo2DB:(id)arg1;
- (_Bool)addDownloadInfo2DB:(id)arg1;
- (id)safeString:(id)arg1;
- (_Bool)isDBTable:(id)arg1 hasColumn:(id)arg2;
- (void)openDB;
- (id)downloadListDBFile;
- (id)init;
- (void)dealloc;

@end

