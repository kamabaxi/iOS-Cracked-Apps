//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBViewerContextClassProvidable-Protocol.h"

@class FBTimelineIncomingAppAction, FBUserSession, NSString;

@interface FBTimelineIncomingAppActionHandler : NSObject <FBViewerContextClassProvidable>
{
    FBUserSession *_session;
    FBTimelineIncomingAppAction *_currentAction;
}

@property(readonly, nonatomic) FBTimelineIncomingAppAction *currentAction; // @synthesize currentAction=_currentAction;
- (void).cxx_destruct;
- (_Bool)handleActionWithURL:(id)arg1 navigationCoordinator:(id)arg2 providerMap:(id)arg3;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
