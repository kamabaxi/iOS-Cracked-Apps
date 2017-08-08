//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface FBBackgroundTimeStateBuilder : NSObject
{
    NSDate *_dateStateBegan;
    double _backgroundTimeSpent;
    double _activeTimeSpent;
    double _inactiveTimeSpent;
    double _timeContributionFromAPNS;
    double _timeContributionFromBGTasks;
    double _timeContributionFromBGFetch;
    double _timeContributionFromBGLocation;
    double _timeContributionFromBGURLSession;
    double _timeContributionFromAudio;
    double _timeContributionFromPushKit;
    double _timeContributionFromUnknown;
    NSDictionary *_pushKitTypeToTimeMap;
    NSDictionary *_backgroundTaskNameToTimeMap;
    NSDictionary *_backgroundTaskNameToExpireCountMap;
    long long _foregroundColdStarts;
    long long _backgroundColdStarts;
}

+ (id)backgroundTimeStateFromExistingBackgroundTimeState:(id)arg1;
+ (id)backgroundTimeState;
- (void).cxx_destruct;
- (id)withBackgroundColdStarts:(long long)arg1;
- (id)withForegroundColdStarts:(long long)arg1;
- (id)withBackgroundTaskNameToExpireCountMap:(id)arg1;
- (id)withBackgroundTaskNameToTimeMap:(id)arg1;
- (id)withPushKitTypeToTimeMap:(id)arg1;
- (id)withTimeContributionFromUnknown:(double)arg1;
- (id)withTimeContributionFromPushKit:(double)arg1;
- (id)withTimeContributionFromAudio:(double)arg1;
- (id)withTimeContributionFromBGURLSession:(double)arg1;
- (id)withTimeContributionFromBGLocation:(double)arg1;
- (id)withTimeContributionFromBGFetch:(double)arg1;
- (id)withTimeContributionFromBGTasks:(double)arg1;
- (id)withTimeContributionFromAPNS:(double)arg1;
- (id)withInactiveTimeSpent:(double)arg1;
- (id)withActiveTimeSpent:(double)arg1;
- (id)withBackgroundTimeSpent:(double)arg1;
- (id)withDateStateBegan:(id)arg1;
- (id)build;

@end
