//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPlayerReportStepState.h"

@class NSString;

@interface QLPlayerFinishStepState : QLPlayerReportStepState
{
    NSString *_lastReportFlowid;
}

@property(copy, nonatomic) NSString *lastReportFlowid; // @synthesize lastReportFlowid=_lastReportFlowid;
- (void).cxx_destruct;
- (id)reportDict;
- (void)reportStepDictInfo:(id)arg1;
- (void)reportStepExit:(id)arg1 withInfo:(id)arg2;
- (void)reportStepLoadedFailed:(id)arg1 withInfo:(id)arg2;
- (void)reportStepLoadedSuccess:(id)arg1 withInfo:(id)arg2;

@end

