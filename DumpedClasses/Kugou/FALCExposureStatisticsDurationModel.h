//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FALCExposureStatisticsDurationModel : NSObject
{
    _Bool _isReport;
    NSString *_eventName;
    NSString *_otherEventName;
}

@property(nonatomic) _Bool isReport; // @synthesize isReport=_isReport;
@property(copy, nonatomic) NSString *otherEventName; // @synthesize otherEventName=_otherEventName;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (void)reportStatistics;
- (void)endStatisticsDuration;
- (void)startStatisticsDuration;

@end
