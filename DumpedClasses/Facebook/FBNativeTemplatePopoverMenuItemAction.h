//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NTAction-Protocol.h"

@class NSArray, NSString, NTNativeTemplateBaseContext;
@protocol NTAction, NTImage, NTNativeTemplateModel><FBNativeTemplateModel;

@interface FBNativeTemplatePopoverMenuItemAction : NSObject <NTAction>
{
    NSObject<NTNativeTemplateModel><FBNativeTemplateModel> *_model;
    NSArray<NTAction> *_children;
    NTNativeTemplateBaseContext *_context;
    CDUnknownBlockType _dismissalBlock;
    id <NTImage> _imageProvider;
}

+ (id)newWithModel:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) id <NTImage> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
- (void).cxx_destruct;
- (void)performAction;
- (id)actionSheetButtonItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
