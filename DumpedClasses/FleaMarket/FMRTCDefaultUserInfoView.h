//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMAvatarImageView, UILabel;

@interface FMRTCDefaultUserInfoView : UIView
{
    FMAvatarImageView *_userAvatarImgV;
    UILabel *_userNameLbl;
    UILabel *_userTipLbl;
}

@property(retain, nonatomic) UILabel *userTipLbl; // @synthesize userTipLbl=_userTipLbl;
@property(retain, nonatomic) UILabel *userNameLbl; // @synthesize userNameLbl=_userNameLbl;
@property(retain, nonatomic) FMAvatarImageView *userAvatarImgV; // @synthesize userAvatarImgV=_userAvatarImgV;
- (void).cxx_destruct;
- (void)hidden;
- (void)showWithType:(int)arg1 Tip:(id)arg2;
- (void)layoutWithType:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
