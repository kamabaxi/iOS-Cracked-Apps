//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FALCActivityEntranceDataProvider : NSObject
{
    _Bool _isShowRedView;
    long long _shakeTimes;
}

@property(nonatomic) long long shakeTimes; // @synthesize shakeTimes=_shakeTimes;
@property(nonatomic) _Bool isShowRedView; // @synthesize isShowRedView=_isShowRedView;
- (id)predicateGamelist:(id)arg1;
- (void)getDailyTasksListWithSucceed:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;
- (void)getShakeTimes:(CDUnknownBlockType)arg1;
- (void)getActivityListWithLiveRoomType:(unsigned long long)arg1 SuccessBlock:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)getGameListWithLiveRoomType:(unsigned long long)arg1 SuccessBlock:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;

@end
