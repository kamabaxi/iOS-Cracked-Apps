//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseInfoProvider.h"

@class NSString;

@interface GWNewFindMessageListProvider : GWBaseInfoProvider
{
    NSString *_memberid;
    NSString *_sendTimes;
    NSString *_maxnum;
    NSString *_pageNo;
}

@property(copy, nonatomic) NSString *pageNo; // @synthesize pageNo=_pageNo;
@property(copy, nonatomic) NSString *maxnum; // @synthesize maxnum=_maxnum;
@property(copy, nonatomic) NSString *sendTimes; // @synthesize sendTimes=_sendTimes;
@property(copy, nonatomic) NSString *memberid; // @synthesize memberid=_memberid;
- (void).cxx_destruct;
- (void)saveCache:(id)arg1;
- (void)requestWithMessageListHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
