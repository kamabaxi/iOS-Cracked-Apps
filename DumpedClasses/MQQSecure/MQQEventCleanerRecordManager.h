//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBOEventCleanerOp;

@interface MQQEventCleanerRecordManager : NSObject
{
    DBOEventCleanerOp *_database;
}

+ (id)sharedManager;
@property(readonly, nonatomic) DBOEventCleanerOp *database; // @synthesize database=_database;
- (void)dealloc;
- (id)init;

@end
