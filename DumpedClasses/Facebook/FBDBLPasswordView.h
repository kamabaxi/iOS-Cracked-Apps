//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBAuthHeaderContentFooterView.h"

@class UIButton, UITextField, UIView;

@interface FBDBLPasswordView : FBAuthHeaderContentFooterView
{
}

- (id)_footerView;
- (id)_passwordContentView;
- (void)stopActivityIndicator;
- (void)startActivityIndicator;
@property(readonly, nonatomic) UIButton *helpButton;
@property(readonly, nonatomic) UIButton *backButton;
@property(readonly, nonatomic) UIButton *loginButton;
@property(readonly, nonatomic) UITextField *passwordInput;
@property(readonly, nonatomic) UIView *userImage;
- (id)initWithUserImage:(id)arg1 instructions:(id)arg2 configuration:(id)arg3;

@end
