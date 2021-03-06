//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBViewerContextClassProvidable-Protocol.h"

@class FBDelayer, FBDiscardableStoreOpener, FBMChatContextManager, FBMessengerSyncEngineManager, FBSyncPresenceUpdater, FBSyncStore, MNMQTTPersonSyncEventProcessor, MNMQTTPresenceUpdateListeningAnnouncer, MNUserSettings, NSString;
@protocol OS_dispatch_queue;

@interface FBDiodeModuleStartupManager : NSObject <FBViewerContextClassProvidable>
{
    FBDiscardableStoreOpener *_storeOpener;
    FBMessengerSyncEngineManager *_syncEngineManager;
    FBSyncStore *_syncStore;
    MNMQTTPersonSyncEventProcessor *_personSyncProcessor;
    FBMChatContextManager *_chatContextManager;
    MNUserSettings *_userSettings;
    MNMQTTPresenceUpdateListeningAnnouncer *_presenceMqttUpdateAnnouncer;
    FBSyncPresenceUpdater *_presenceUpdater;
    NSObject<OS_dispatch_queue> *_serialStartupQueue;
    FBDelayer *_startupDelayer;
}

- (void).cxx_destruct;
- (void)executeBlockAfterStartupComplete:(CDUnknownBlockType)arg1;
- (void)cleanupSession;
- (void)_startSync:(CDUnknownBlockType)arg1;
- (void)startupWithFinishedBlock:(CDUnknownBlockType)arg1;
- (id)initWithSyncEngineManager:(id)arg1 storeOpener:(id)arg2 syncStore:(id)arg3 presenceMqttUpdateAnnouncer:(id)arg4 chatContextManager:(id)arg5 userSettings:(id)arg6 presenceUpdater:(id)arg7;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

