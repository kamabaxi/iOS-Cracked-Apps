//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBProfileDiscoveryBucketListSessionLogger, FBUserSession, UIView;
@protocol FBNavigationCoordinator;

@interface FBProfileDiscoverySectionsTapResponder : NSObject
{
    UIView *_profilePictureThumbnailView;
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBUserSession *_session;
    FBProfileDiscoveryBucketListSessionLogger *_analytics;
}

- (void).cxx_destruct;
- (void)didTapSeeAllBuckets:(id)arg1 sectionIndex:(unsigned long long)arg2 sectionViewStyle:(id)arg3 sectionTotalBuckets:(unsigned long long)arg4 title:(id)arg5;
- (id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 analytics:(id)arg3;

@end
