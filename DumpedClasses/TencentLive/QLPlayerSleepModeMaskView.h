//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIImageView, UILabel;

@interface QLPlayerSleepModeMaskView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _isPortrait;
    id <QLPlayerSleepModeMaskViewDelegate> _delegate;
    UIImageView *_iconView;
    UILabel *_tips;
}

@property(nonatomic) _Bool isPortrait; // @synthesize isPortrait=_isPortrait;
@property(retain, nonatomic) UILabel *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <QLPlayerSleepModeMaskViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutInPortrait:(_Bool)arg1;
- (void)layoutSubviews;
- (void)didTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

