//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UILabel, UITextView;

@interface ESPEntryNewUserPresentContainerView : UIImageView
{
    UITextView *_textView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateWithDeliveryInfo:(id)arg1;
- (void)updateWithRedEnvelope:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
