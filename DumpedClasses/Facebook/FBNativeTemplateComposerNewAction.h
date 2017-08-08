//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NTAction-Protocol.h"

@class FBMemModelObject, FBMemTaggableActivity, FBMemTaggableActivityIcon, FBNativeTemplateContext, NSString;
@protocol FBQueriedProfileFieldsProtocol, FBShareable, NTAction, NTNativeTemplateModel><FBNativeTemplateModel;

@interface FBNativeTemplateComposerNewAction : NSObject <NTAction>
{
    _Bool _isThrowbackPost;
    FBNativeTemplateContext *_context;
    NSObject<NTNativeTemplateModel><FBNativeTemplateModel> *_model;
    FBMemModelObject<FBQueriedProfileFieldsProtocol> *_author;
    FBMemModelObject<FBQueriedProfileFieldsProtocol> *_target;
    NSString *_placeID;
    NSString *_placeName;
    NSString *_placeholder;
    NSString *_prefilledText;
    id <FBShareable> _shareable;
    FBMemTaggableActivity *_taggableActivity;
    FBMemTaggableActivityIcon *_taggableActivityIcon;
    NSString *_taggableObjectID;
    NSString *_taggableObjectName;
    NSString *_trackingParam;
    NSString *_nectarModule;
    id <NTAction> _cancelAction;
    id <NTAction> _postAction;
    id <NTAction> _successfulFinishAction;
    id <NTAction> _cancelFinishAction;
}

+ (Class)controllerClass;
+ (id)newWithModel:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) id <NTAction> cancelFinishAction; // @synthesize cancelFinishAction=_cancelFinishAction;
@property(readonly, nonatomic) id <NTAction> successfulFinishAction; // @synthesize successfulFinishAction=_successfulFinishAction;
@property(readonly, nonatomic) id <NTAction> postAction; // @synthesize postAction=_postAction;
@property(readonly, nonatomic) id <NTAction> cancelAction; // @synthesize cancelAction=_cancelAction;
@property(readonly, copy, nonatomic) NSString *nectarModule; // @synthesize nectarModule=_nectarModule;
@property(readonly, copy, nonatomic) NSString *trackingParam; // @synthesize trackingParam=_trackingParam;
@property(readonly, nonatomic) _Bool isThrowbackPost; // @synthesize isThrowbackPost=_isThrowbackPost;
@property(readonly, copy, nonatomic) NSString *taggableObjectName; // @synthesize taggableObjectName=_taggableObjectName;
@property(readonly, copy, nonatomic) NSString *taggableObjectID; // @synthesize taggableObjectID=_taggableObjectID;
@property(readonly, nonatomic) FBMemTaggableActivityIcon *taggableActivityIcon; // @synthesize taggableActivityIcon=_taggableActivityIcon;
@property(readonly, nonatomic) FBMemTaggableActivity *taggableActivity; // @synthesize taggableActivity=_taggableActivity;
@property(readonly, nonatomic) id <FBShareable> shareable; // @synthesize shareable=_shareable;
@property(readonly, copy, nonatomic) NSString *prefilledText; // @synthesize prefilledText=_prefilledText;
@property(readonly, copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, copy, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
@property(readonly, copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(readonly, nonatomic) FBMemModelObject<FBQueriedProfileFieldsProtocol> *target; // @synthesize target=_target;
@property(readonly, nonatomic) FBMemModelObject<FBQueriedProfileFieldsProtocol> *author; // @synthesize author=_author;
@property(readonly, nonatomic) NSObject<NTNativeTemplateModel><FBNativeTemplateModel> *model; // @synthesize model=_model;
@property(readonly, nonatomic) FBNativeTemplateContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)performAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
