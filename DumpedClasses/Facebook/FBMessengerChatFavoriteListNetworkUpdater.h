//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBCancelable-Protocol.h"
#import "FBNetworkerRequestDelegate-Protocol.h"

@class FBSimpleNetworkerRequest, NSString;
@protocol FBNetworkDispatch;

@interface FBMessengerChatFavoriteListNetworkUpdater : NSObject <FBNetworkerRequestDelegate, FBCancelable>
{
    CDUnknownBlockType _finished;
    FBSimpleNetworkerRequest *_networkerRequest;
    id <FBNetworkDispatch> _networkDispatcher;
}

- (void).cxx_destruct;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)cancel;
- (void)startRequestWithUpdatedFavorites:(id)arg1 finishedBlock:(CDUnknownBlockType)arg2;
- (id)initWithNetworkDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
