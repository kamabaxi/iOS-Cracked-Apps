//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RqdNetRequestDelegate-Protocol.h"

@class NSMutableArray, NSString, RqdExtensionSandboxManager, RqdNetRequest;

@interface RqdExtensionExceptionManager : NSObject <RqdNetRequestDelegate>
{
    _Bool _uploading;
    _Bool _wcsessionExist;
    NSString *_appGroupIdentifier;
    RqdExtensionSandboxManager *_sandboxManager;
    NSMutableArray *_uploadingFiles;
    RqdNetRequest *_httpRequest;
}

+ (id)sharedManager;
@property(retain, nonatomic) RqdNetRequest *httpRequest; // @synthesize httpRequest=_httpRequest;
@property(nonatomic) _Bool wcsessionExist; // @synthesize wcsessionExist=_wcsessionExist;
@property(retain, nonatomic) NSMutableArray *uploadingFiles; // @synthesize uploadingFiles=_uploadingFiles;
@property(retain, nonatomic) RqdExtensionSandboxManager *sandboxManager; // @synthesize sandboxManager=_sandboxManager;
@property(nonatomic, getter=isUploading) _Bool uploading; // @synthesize uploading=_uploading;
@property(copy, nonatomic) NSString *appGroupIdentifier; // @synthesize appGroupIdentifier=_appGroupIdentifier;
- (void).cxx_destruct;
- (void)handleWatchKitExtensionRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (_Bool)deleteAllExceptions;
- (id)allExceptions;
- (id)exceptionFromFileURL:(id)arg1;
- (_Bool)saveException:(id)arg1;
- (void)upload:(id)arg1 bundleid:(id)arg2;
- (void)checkAndUpload;
- (id)packetExtraValues:(id)arg1;
- (id)packageDataWithException:(id)arg1;
@property(readonly, nonatomic, getter=isAppGroupAvailable) _Bool appGroupAvailable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
