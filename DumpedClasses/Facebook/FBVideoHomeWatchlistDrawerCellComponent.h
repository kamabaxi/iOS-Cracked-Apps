//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBFeedToolbox, NSString;

@interface FBVideoHomeWatchlistDrawerCellComponent : CKCompositeComponent
{
    unsigned long long _state;
    FBFeedToolbox *_toolbox;
    NSString *_videoGraphQLID;
    struct FBVideoHomeQueueInfoFragment _queueInfo;
}

+ (id)newWithContentComponent:(id)arg1 videoGraphQLID:(id)arg2 isAggregated:(_Bool)arg3 queueInfo:(struct FBVideoHomeQueueInfoFragment)arg4 toolbox:(id)arg5;
+ (id)initialState;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawerCellComponent:(id)arg1 didSelectItemWithIdentifier:(id)arg2 swipeToEdgeGesture:(_Bool)arg3;
- (struct CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1;

@end
