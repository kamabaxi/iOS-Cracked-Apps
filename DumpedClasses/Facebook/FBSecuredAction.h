//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSecuredActionChallengeRegistry, FBSecuredActionWebChallengeController, UIViewController;
@protocol FBNetworkDispatch, FBSecuredActionChallengeControlling, FBWebViewProcessPoolContaining;

@interface FBSecuredAction : NSObject
{
    id <FBNetworkDispatch> _networkDispatch;
    UIViewController *_presentingViewController;
    FBSecuredActionChallengeRegistry *_registry;
    id <FBSecuredActionChallengeControlling> _challengeController;
    FBSecuredActionWebChallengeController *_webChallengeController;
    id <FBWebViewProcessPoolContaining> _processPool;
    CDUnknownBlockType _webChallengeCreationBlock;
}

- (void).cxx_destruct;
- (void)_batchRequestFailed:(id)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)_batchRequestSucceeded:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_challengeHasData:(id)arg1 data:(id)arg2 request:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)_showChallenge:(unsigned long long)arg1 forRequest:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_webChallengeValidated:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_showWebChallenge:(id)arg1 successURL:(id)arg2 request:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)_requestFailed:(id)arg1 request:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4 allowRetry:(_Bool)arg5;
- (void)_sendRequest:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3 allowRetry:(_Bool)arg4;
- (void)sendRequest:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithNetworkDispatch:(id)arg1 presentingViewController:(id)arg2 registry:(id)arg3 processPool:(id)arg4 webChallengeCreationBlock:(CDUnknownBlockType)arg5;
- (id)initWithNetworkDispatch:(id)arg1 presentingViewController:(id)arg2 processPool:(id)arg3;

@end
