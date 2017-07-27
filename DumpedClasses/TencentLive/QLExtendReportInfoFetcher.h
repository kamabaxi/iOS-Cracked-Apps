//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UITextField;

@interface QLExtendReportInfoFetcher : UIView
{
    UITextField *_contentTextView;
    UIButton *_okButton;
    UIButton *_cancelButton;
    CDUnknownBlockType _okBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _fetchCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType fetchCompletionBlock; // @synthesize fetchCompletionBlock=_fetchCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType okBlock; // @synthesize okBlock=_okBlock;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UITextField *contentTextView; // @synthesize contentTextView=_contentTextView;
- (void).cxx_destruct;
- (void)fetchExtendReportInfo:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2;
- (_Bool)checkCoverageUploadEnable;
- (void)dismissFromSuperView;
- (void)showContentFetchDialog;
- (void)onCancelButtonClick:(id)arg1;
- (void)onOkButtonClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
